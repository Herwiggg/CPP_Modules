/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:28:10 by almichel          #+#    #+#             */
/*   Updated: 2024/07/10 18:10:51 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(const std::string& first_name) 
{
    this->_first_name = first_name;
}

void Contact::setLastName(const std::string& last_name) 
{
    this->_last_name = last_name;
}

void Contact::setNickName(const std::string& nick_name) 
{
   this->_nick_name = nick_name;
}

void Contact::setPhoneNumber(const std::string& phone_number) 
{
    this->_phone_number = phone_number;
}

void Contact::setDarkestSecret(const std::string& darkest_secret) 
{
    this->_darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() const 
{
    return _first_name;
}

std::string Contact::getLastName() const 
{
    return _last_name;
}

std::string Contact::getNickName() const 
{
    return _nick_name;
}

std::string Contact::getPhoneNumber() const 
{
    return _phone_number;
}

std::string Contact::getDarkestSecret() const 
{
    return _darkest_secret;
}
