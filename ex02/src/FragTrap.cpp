/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:45:56 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/15 15:41:42 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

// in ClapTrap.hpp changed the level of access from private to protected
// to give access to members in this child class and initioalise them with different values

FragTrap::FragTrap() : ClapTrap()
{
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	m_hitPoints = 100;
	m_energyPoints = 100;
	m_attackDamage = 30;
	std::cout << "FragTrap parameterized constructor called for " << m_name << " with" << std::endl
			  << "HitPoints:    " << m_hitPoints << std::endl
			  << "EnergyPoints: " << m_energyPoints << std::endl
			  << "AttackDamage: " << m_attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called for " << m_name << std::endl;
}
// we don't implement the copy assignment operator here, use the one from ClapTrap
FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs) // Check for self-assignment
	{
		ClapTrap::operator=(rhs);
	}
	std::cout << "FragTrap copy assignment operator called\n";
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << m_name << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (m_hitPoints > 0 && m_energyPoints > 0)
	{
		m_energyPoints--;
		std::cout << "FragTrap " << m_name << " attacks " << target << ", causing "
				  << m_attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << m_name << " can't attack without EnergyPoints or HitPoints!"
				  << " Energy: " << m_energyPoints << ", HitPoints: " << m_hitPoints << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	if (m_hitPoints > 0 && m_energyPoints > 0)
	{
		std::cout << "FragTrap " << m_name << " requests a HighFive!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << m_name << " can't request a HighFive without EnergyPoints or HitPoints!"
				  << " Energy: " << m_energyPoints << ", HitPoints: " << m_hitPoints << std::endl;
	}
}
