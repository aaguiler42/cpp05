/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:01:28 by aaguiler          #+#    #+#             */
/*   Updated: 2022/11/20 11:58:22 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	bool _isSigned;
	int const	_gradeNeededToSign;
	int const	_gradeNeededToExecute;

public:
	Form(void);
	Form(std::string const &name, int gradeNeededToSign, int gradeNeededToExecute);
	Form(Form const &src);
	virtual ~Form(void);

	Form	&operator=(Form const &rhs);

	std::string			getName(void) const;
	bool				getIsSigned(void) const;
	int					getGradeNeededToSign(void) const;
	int					getGradeNeededToExecute(void) const;

	void				beSigned(Bureaucrat const &bureaucrat);
	virtual void		execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException;
	class GradeTooLowException;
	class FormNotSignedException;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
