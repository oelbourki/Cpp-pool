#include "Form.hpp"
Form::Form() : _name("form"), _ex_grade(5),_sig_grade(8),_signe(0)
{
}

Form::~Form()
{
}

Form::Form(std::string name,int ex_grade,int sig_grade,bool signe) : 
 _name(name),_ex_grade(ex_grade),_sig_grade(sig_grade),_signe(signe)
{
    if (ex_grade > 150 || sig_grade > 150)
        throw Form::GradeTooLowException();
    else if (ex_grade < 1 || sig_grade < 1)
        throw Form::GradeTooHighException();
}
Form::Form(std::string name,int ex_grade,int sig_grade) : 
 _name(name),_ex_grade(ex_grade),_sig_grade(sig_grade),_signe(0)
{
    if (ex_grade > 150 || sig_grade > 150)
        throw Form::GradeTooLowException();
    else if (ex_grade < 1 || sig_grade < 1)
        throw Form::GradeTooHighException();
}


std::ostream &operator<<(std::ostream &out,Form &form)
{
    out << "form inforamtion:" << std::endl;
    out << "name: " << form.getName() << std::endl;
    out << "signing grade requirement: "<< form.getSig_grade() << std::endl;
    out  << "excution grade requirement: " << form.getEx_grade() << std::endl;
    if (form.getSigne())
        out << "form has been signed\n";
    else 
        out << "form has been not signed yet\n";
    return out;
}

std::string    Form::getName() const
{
    return this->_name;
}
int     Form::getEx_grade() const
{
    return this->_ex_grade;
}
int     Form::getSig_grade() const
{
    return this->_sig_grade;
}
bool    Form::getSigne() const
{
    return this->_signe;
}

void    Form::beSigned(Bureaucrat &bur)
{
        if (this->_sig_grade <= bur.getGrade())
        {
            if (this->_signe == 1)
            {
                bur.signForm(0);
            }
            else
            {
                std::cout << "sign" << std::endl;
                bur.signForm(1);
            }
        }
        else 
        {
            bur.signForm(0);
            throw Form::GradeTooLowException();
        }
}

//------------------------------------------------------------------------

//-------------------------------------------------------------
Form::GradeTooHighException::GradeTooHighException()
{
    return;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &g)
{
    *this = g;
    return ;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
    return;
}
Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &g)
{
    (void)g;
    return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("ERROR: Grade too high");
}

Form::GradeTooLowException::GradeTooLowException()
{
    return;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &g)
{
    *this = g;
    return ;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
    return;
}
Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &g)
{
    (void)g;
    return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("ERROR: Grade too Low");
}