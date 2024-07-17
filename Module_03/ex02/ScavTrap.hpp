/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:13:51 by almichel          #+#    #+#             */
/*   Updated: 2024/07/16 18:57:06 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ClapTrap const &src);
		ScavTrap &operator=(ScavTrap const & rhs);
		~ScavTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		
		void guardGate();
	private:
};

#endif