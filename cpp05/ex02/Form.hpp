#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;
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
    virtual void    execute(Bureaucrat const & executor) const = 0;
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