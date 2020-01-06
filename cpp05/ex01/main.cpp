#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat jam("jam",1);
    Form form("creat",5,10);
    Form form1("creat",5,10);
    std::cout << form;
   // jam.signForm(0);
    return (0);
}