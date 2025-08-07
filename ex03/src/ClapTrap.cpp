/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:15:18 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/07 13:15:33 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("Default"), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0) 
{
	std::cout << "ClapTrap default constructor called for " << m_name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0) 
{
	std::cout << "ClapTrap parameterized constructor called for " << m_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : m_name(other.m_name), m_hitPoints(other.m_hitPoints), m_energyPoints(other.m_energyPoints), m_attackDamage(other.m_attackDamage) 
{
	std::cout << "ClapTrap copy constructor called for " << m_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) 
{
	if (this != &rhs) // Check for self-assignment
	{
		m_name = rhs.m_name;
		m_hitPoints = rhs.m_hitPoints;
		m_energyPoints = rhs.m_energyPoints;
		m_attackDamage = rhs.m_attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap destructor called for " << m_name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(m_hitPoints > 0 || m_energyPoints > 0)
	{
		m_energyPoints--;
		std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " 
				  << m_attackDamage <<  " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << m_name << " can't attack without energy or hitpoints!" 
				  << "Energy: " << m_energyPoints << ", Hit Points: " << m_hitPoints << std::endl;
		return;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(m_hitPoints > 0)
	{
		// condition ? value_if_true : value_if_false, ensure we don't go below zero
		unsigned int damage = (amount > m_hitPoints) ? m_hitPoints : amount; 
		m_hitPoints -= damage;
		std::cout << "ClapTrap " << m_name << " takes " << damage << " points of damage! Remaining hit points: " 
				  << m_hitPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << m_name << " is destroyed and has no hit points to take damage!" << std::endl;
		return;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(m_energyPoints > 0 || m_hitPoints > 0)
	{
		m_energyPoints--;
		m_hitPoints += amount;
		std::cout << "ClapTrap " << m_name << " repairs itself for " << amount 
				  << " hit points! Current hit points: " << m_hitPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << m_name << " has no energy left to repair!" << std::endl;
	}
}

/*
Overloading	- Same name, different parameters, in the same class.
Overriding	- Redefines a virtual function from a base class in a derived class /subclass/childclass.
*/
