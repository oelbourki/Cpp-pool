#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm() : Form("",137,145)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target,137,145)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigne() && (executor.getGrade() <= this->getEx_grade()))
    {
    std::ofstream file;
    file.open(this->getName() + "_shrubbery");
    if (!file.good())
    {
        std::cout << "file can not be opened" << std::endl;
        return;
    }
    std::string tree;
    tree += "                                                                ";
    tree += "          .     .  .      +     .      .          .             ";
    tree += "     .       .      .     #       .           .                 ";
    tree += "        .      .         ###            .      .      .         ";
    tree += "      .      .   #:. .:####:. .:#  .      .                     ";
    tree += "          .      . ###########  .                               ";
    tree += "       .     #:.    .:#####:.    .:#  .        .       .        ";
    tree += "  .             ##################        .        .            ";
    tree += "        .    #:.  ###########  .:#   .       .                  ";
    tree += "     .     .  ##################                  .             ";
    tree += "                .##############           .      .              ";
    tree += "    .   #:. ...  .:##########:.  ... .:#     .                  ";
    tree += "      .     #######################      .     .                ";
    tree += "    .    .     #################    .      .                    ";
    tree += "            .           000          .     .                    ";
    tree += "       .         .   .   000     .        .       .             ";
    tree += ".. .. ..................O000O........................ ...... ...";

        file << tree;
        std::cout << "Shrubbery form has been created" << std::endl;
        file.close();
    }
    else if (this->getSigne() == 0 && (executor.getGrade() <= this->getEx_grade()))
        std::cout << "the form must be signed first" << std::endl;
    else 
        throw Form::GradeTooLowException();
}


std::ostream &operator<<(std::ostream &out,ShrubberyCreationForm &form)
{
    out << "ShrubberyCreationForm inforamtion:" << std::endl;
    out << "name: " << form.getName() << std::endl;
    out << "signing grade requirement: "<< form.getSig_grade() << std::endl;
    out  << "excution grade requirement: " << form.getEx_grade() << std::endl;
    if (form.getSigne())
        out << "form has been signed\n";
    else 
        out << "form has been not signed yet\n";
    return out;
}