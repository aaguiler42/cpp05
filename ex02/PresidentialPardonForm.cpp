/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:30:49 by aaguiler          #+#    #+#             */
/*   Updated: 2022/11/20 12:31:40 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("Presidential Pardon Form", 25, 5),
	_target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("Presidential Pardon Form", 25, 5),
	_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) :
	Form(obj),
	_target(obj._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	Form::operator=(obj);
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
