#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#define PRINT(x) std::cout << x << std::endl
#define CATCH catch (std::exception& e) { PRINT(e.what()); }

int	main()
{
	Bureaucrat a("Allan", 1);
	Bureaucrat b("Bill", 150);
	
	ShrubberyCreationForm sf("bush");
	RobotomyRequestForm rf("robot");
	PresidentialPardonForm pf("president");
	PRINT(sf);
	PRINT(rf);
	PRINT(pf);
	try { a.executeForm(sf); }
	CATCH;
	try { b.signForm(sf); }
	CATCH;
	try { a.signForm(sf); }
	CATCH;
	try { b.executeForm(sf); }
	CATCH;
	try { a.executeForm(sf); }
	CATCH;
	try
	{
		a.signForm(rf);
		a.signForm(pf);
	}
	CATCH;
	try { b.executeForm(rf); }
	CATCH;
	try { a.executeForm(rf); }
	CATCH;
	try { b.executeForm(pf); }
	CATCH;
	try { a.executeForm(pf); }
	CATCH;
	puts("--- INTERN ---");
	try
	{
		Intern someRandomIntern;
		Form* rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << rrf->getName() << std::endl;
		delete (rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}