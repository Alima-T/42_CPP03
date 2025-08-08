/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:45:56 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/08 17:43:43 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

//in ClapTrap.hpp changed the level of access from private to protected
//to give access to members in this child class and initioalise them with different values 

FragTrap::FragTrap() : ClapTrap("FragTrap_default")
{
	m_hitPoints = 100; // more hit points
	m_energyPoints = 50; // more energy points
	m_attackDamage = 20; // more attack damage
	std::cout << "FragTrap default constructor called for " << m_name << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap (name)
{
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
	std::cout << "FragTrap parameterized constructor called for " << m_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for " << m_name << std::endl;
}
// we don't implement the copy assignment operator here, use the one from ClapTrap
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other) // Check for self-assignment
	{
		ClapTrap::operator=(other); // Call base class assignment operator
	}
	std::cout << "FragTrap copy assignment operator called\n";
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << m_name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (m_hitPoints > 0 && m_energyPoints > 0)
	{
		std::cout << "FragTrap " << m_name << " requests a high five!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << m_name << " can't request a high five without energy or hitpoints!" 
				  << "Energy: " << m_energyPoints << ", Hit Points: " << m_hitPoints << std::endl;
	}
}
