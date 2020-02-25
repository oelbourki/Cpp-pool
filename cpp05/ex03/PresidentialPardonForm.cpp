/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:26:33 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:26:34 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("",5,25)
{

}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target,5,25)
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigne() && (executor.getGrade() <= this->getEx_grade()))
        std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    else if (this->getSigne() == 0 && (executor.getGrade() <= this->getEx_grade()))
        std::cout << "the form must be signed first" << std::endl;
    else 
        throw Form::GradeTooLowException();
}


std::ostream &operator<<(std::ostream &out,PresidentialPardonForm &form)
{
    out << "PresidentialPardonForm inforamtion:" << std::endl;
    out << "name: " << form.getName() << std::endl;
    out << "signing grade requirement: "<< form.getSig_grade() << std::endl;
    out  << "excution grade requirement: " << form.getEx_grade() << std::endl;
    if (form.getSigne())
        out << "form has been signed\n";
    else 
        out << "form has been not signed yet\n";
    return out;
}