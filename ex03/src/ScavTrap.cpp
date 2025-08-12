/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:45:56 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/12 22:01:16 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

//in ClapTrap.hpp changed the level of access from private to protected
//to give access to members in this child class and initioalise them with different values 
ScavTrap::ScavTrap() : ClapTrap()
{
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
	std::cout << "ScavTrap default constructor called"<< std::endl;
}
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
	std::cout << "ScavTrap parameterized constructor called for " << m_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called for " << m_name << std::endl;
}
// we don't implement the copy assignment operator here, use the one from ClapTrap
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap copy assignment operator called\n";
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << m_name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(m_hitPoints > 0 && m_energyPoints > 0)
	{
		m_energyPoints--;
		std::cout << "ScavTrap " << m_name << " attacks " << target << ", causing "
				  << m_attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << m_name << " can't attack without EnergyPoints or HitPoints!"
				  << " Energy: " << m_energyPoints << ", HitPoints: " << m_hitPoints << std::endl;
		return;
	}
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << m_name << " is now in guard mode." << std::endl;
}	
