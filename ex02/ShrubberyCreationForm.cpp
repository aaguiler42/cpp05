/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.Cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:46:30 by aaguiler          #+#    #+#             */
/*   Updated: 2022/11/20 12:00:55 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 145, 137),
	_target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
	Form(src),
	_target(src.getTarget())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream ofs(this->_target + "_shrubbery");
	ofs << "			 				'.,\n\
                              'b      *\n\
                               '$    #.\n\
                                $:   #:\n\
                                *#  @):\n\
                                :@,@):   ,.**:'\n\
                      ,         :@@*: ..**'\n\
                       '#o.    .:(@'.@*'''\n\
                          'bq,..:,@@*'   ,*\n\
                          ,p$q8,:@)'  .p*'\n\
                         '    '@@Pp@@*'\n\
                               Y7'.'\n\
                              :@):.\n\
                             .:@:'.\n\
                           .::(@:.\n";
	ofs.close();
}