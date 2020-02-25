/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-bour <oel-bour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:26:29 by oel-bour          #+#    #+#             */
/*   Updated: 2020/02/22 17:26:29 by oel-bour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



// int     main()
// {
//     Bureaucrat staff1("max",1);
//     Bureaucrat staff2("jack",150);
//     std::cout << "creation of two bureaucrats" << std::endl;
//     std::cout << staff1 << std::endl;
//     std::cout << staff1 << std::endl;
//     Intern intern;

//     Form *form1;
//     std::cout << "creating a form" << std::endl;
//     form1 = intern.makeForm("shrubbery creation","old man");
//     std::cout << "signing the form by max should work" << std::endl;
//     std::cout << "signing the form by jack should fail" << std::endl;
//     form1->beSigned(staff1);
//     staff2.executeForm(*form1);
//     return 0;
// }


int	main()
{
	Bureaucrat	test("Arta", 1);
	Bureaucrat	test2("Lydeka", 150);
	std::cout << "** Created Bureaucrat Arta, grade 1 **" << std::endl << test << std::endl <<
		"** Created Bureaucrat Lydeka, grade 150 **" << std::endl << test2 << std::endl;

	Intern	intern;
	std::cout << "** Created new Intern, will now proceed to make forms with intern **" << std::endl << std::endl;

	Form	*ftest;

	std::cout << "** Creating Shrubbery Creation form with target Mary_Jane with Intern **" << std::endl;
	ftest = intern.makeForm("Shrubbery Creation", "Mary_Jane");
	std::cout << "** Now having Arta signed the form (should succeed), and Lydeka execute form (should fail) **" << std::endl;
	ftest->beSigned(test);
	test2.executeForm(*ftest);

	Form	*ftest2;

	std::cout << std::endl << "** Creating Robotomy Request form with target Gundam with Intern **" << std::endl;
	ftest2 = intern.makeForm("Robotomy Request", "Gundam");

	std::cout << "** Now having Arta signed the form (should succeed), and Lydeka execute form (should fail) **" << std::endl;
	ftest2->beSigned(test);
	test2.executeForm(*ftest2);

	Form	*ftest3;

	std::cout << std::endl << "** Creating Presidential Pardon form with target Obama with Intern **" << std::endl;
	ftest3 = intern.makeForm("Presidential Pardon", "Obama");

	std::cout << "** Now having Arta signed the form (should succeed), and Lydeka execute form (should fail) **" << std::endl;
	ftest3->beSigned(test);
	test2.executeForm(*ftest3);

	Form *ftest4;
	std::cout << std::endl << "** Creating Non Existent form with target Whatever with Intern, should fail **" << std::endl;
	ftest4 = intern.makeForm("Non Existent", "Whatever");

	delete ftest;
	delete ftest2;
	delete ftest3;
	delete ftest4;

	return (0);
}