/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:25:39 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:25:40 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string _name;
    const int _ex_grade;
    const int _sig_grade;
    bool _signe;
public:
    Form();
    Form(std::string name,int ex_grade,int sig_grade,bool signe);
    Form(std::string name,int ex_grade,int sig_grade);
    ~Form();
    std::string    getName() const;
    int     getEx_grade() const;
    int     getSig_grade() const;
    bool    getSigne() const;
    void    beSigned(Bureaucrat &bur);
    class GradeTooHighException : public std::exception
    {
        public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const &g);
        virtual ~GradeTooHighException() throw();
        GradeTooHighException &operator=(GradeTooHighException const &g);
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const &g);
        virtual ~GradeTooLowException() throw();
        GradeTooLowException &operator=(GradeTooLowException const &g);
        virtual const char * what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out,Form &form);

#endif