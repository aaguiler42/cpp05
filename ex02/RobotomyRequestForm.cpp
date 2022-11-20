/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:10:36 by aaguiler          #+#    #+#             */
/*   Updated: 2022/11/20 12:28:05 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 72, 45),
	_target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) :
	Form(obj),
	_target(obj.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	Form::operator=(obj);
	return *this;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "NOOOOOIIISSEEE" << std::endl;
	std::srand(std::time(0));
	int randNumber = rand() % 2;
	if (randNumber == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " robotomization failed" << std::endl;
}