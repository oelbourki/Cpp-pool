/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:26:02 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:26:03 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :Form("",45,72)
{

}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target,45,72)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    static int i = 0;
    if (this->getSigne() && (executor.getGrade() <= this->getEx_grade()))
    {
        if (i % 2 == 1)
            std::cout << this->getName() << " has been robotomised succefly." << std::endl;
        else 
            std::cout << this->getName() << " has failed to be robotomised." << std::endl;
        i++;
    }
    else if (this->getSigne() == 0 && (executor.getGrade() <= this->getEx_grade()))
        std::cout << "the form must be signed first" << std::endl;
    else 
        throw Form::GradeTooLowException();
}


std::ostream &operator<<(std::ostream &out,RobotomyRequestForm &form)
{
    out << "RobotomyRequestForm inforamtion:" << std::endl;
    out << "name: " << form.getName() << std::endl;
    out << "signing grade requirement: "<< form.getSig_grade() << std::endl;
    out  << "excution grade requirement: " << form.getEx_grade() << std::endl;
    if (form.getSigne())
        out << "form has been signed\n";
    else 
        out << "form has been not signed yet\n";
    return out;
}