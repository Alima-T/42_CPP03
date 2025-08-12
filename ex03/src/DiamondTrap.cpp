/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:14:08 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/12 22:20:39 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

/*• Name, which is passed as a parameter to a constructor
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (ScavTrap)
*/

DiamondTrap::DiamondTrap() 
	: ClapTrap(),
	ScavTrap(),
	FragTrap()
{
	m_hitPoints = FragTrap::m_hitPoints;
	m_energyPoints = ScavTrap::m_energyPoints;
	m_attackDamage = FragTrap::m_attackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	m_name(name)
{
	m_hitPoints = FragTrap::m_hitPoints;
	m_energyPoints = ScavTrap::m_energyPoints;
	m_attackDamage = FragTrap::m_attackDamage;
	std::cout << "DiamondTrap parameterized constructor called for " << m_name << " with" << std::endl
			<< "HitPoints from FragTrap:    " << m_hitPoints << std::endl
			<< "EnergyPoints from ScavTrap: " << m_energyPoints << std::endl
			<< "AttackDamage from FragTrap: " << m_attackDamage << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &src)
	: ClapTrap(src),
	ScavTrap(src),
	FragTrap(src),
	m_name(src.m_name)
{
	std::cout << "DiamondTrap copy constructor called for " << m_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this != &rhs) // Check for self-assignment
	{
		ClapTrap::operator=(rhs); // Call base class assignment operator
		// ScavTrap::operator=(rhs);
		// FragTrap::operator=(rhs);
		m_name = rhs.m_name;
	}
	std::cout << "DiamondTrap copy assignment operator called for " << m_name << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << m_name << std::endl;
}
void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap, my name is " << m_name
			  << " and my ClapTrap name is " << ClapTrap::m_name << std::endl;
}
