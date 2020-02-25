/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:26:15 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:26:16 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("bureau"),_grade(5)
{
}

Bureaucrat::Bureaucrat(std::string name,int grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else 
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream & operator<<(std::ostream &out,Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return out;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

Bureaucrat &Bureaucrat::operator+=(int n)
{
    if (this->_grade - n < 1)
        throw Bureaucrat::GradeTooHighException();
    else 
        this->_grade -= n;
    return *this;
}
Bureaucrat &Bureaucrat::operator-=(int n)
{
    if (this->_grade + n > 150)
        throw Bureaucrat::GradeTooLowException();
    else 
        this->_grade += n;
    return *this;
}

void    Bureaucrat::signForm(bool s)
{
    if (s)
    {
        std::cout << this->_name << " signs " << "form>" << std::endl;
    }
    else
    {
        std::cout <<  "<bureaucrat> cannot sign <form> because <reason>" << std::endl;
    }
    
}

void    Bureaucrat::executeForm(Form const & form)
{
    if (this->_grade < form.getEx_grade())
    {
        std::cout << this->_name << " execute " << form.getName() << std::endl;
        form.execute(*this);
    }
    else
    {
        std::cout << this->_name << " can not execute " << form.getName() << std::endl;
        std::cout << "grad is low" << std::endl;
    }
}
//-------------------------------------------------------------
Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &g)
{
    *this = g;
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    return;
}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &g)
{
    (void)g;
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("ERROR: Grade too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &g)
{
    *this = g;
    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    return;
}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &g)
{
    (void)g;
    return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("ERROR: Grade too Low");
}