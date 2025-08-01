/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:27:17 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/01 23:31:23 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("Default"), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0) {}

void ClapTrap::attack(const std::string& target)
{
	if(m_hitPoints > 0 || m_energyPoints >0)
	{
		m_energyPoints--;
		m_attackDamage++; //Not sure! Increment attack damage with each attack
		std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " 
		<< m_attackDamage <<  " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << m_name << " can't attack without energy or hitpoints!" << std::endl;
		return;
	}
}
