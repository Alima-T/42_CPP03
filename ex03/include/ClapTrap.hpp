/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:15:10 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/11 22:51:57 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap
{
protected:
	std::string  m_name;
	unsigned int m_hitPoints; // health points, очки здоровья
	unsigned int m_energyPoints; // очки энергии, энергия для атаки
	unsigned int m_attackDamage; //урон от атаки

public:
	ClapTrap();
	ClapTrap(const std::string &name); // Constructor with name parameter
	ClapTrap(const ClapTrap &src); // Copy constructor src = other object being copied
	ClapTrap &operator=(const ClapTrap &rhs); // Copy assignment operator rhs = object being assigned
	virtual ~ClapTrap();
	
	void attack(const std::string& target); // Target is the name of the object being attacked
	void takeDamage(unsigned int amount); // Amount is the damage taken, unsigned int to ensure non-negative values
	void beRepaired(unsigned int amount); // количество восстановленных очков здоровья, Amount is the healing amount
};
#endif

/*
	Health: Hit points are essentially a measure of how much "health" a character has.
	HP - health - a measure of how much "health" a character has.
	способность персонажа или объекта противостоять повреждениям или усталости

	Behavior:
	attack() → if hit points > 0 and energy > 0:

	prints:
	ClapTrap <name> attacks <target>, causing <damage> points of damage!
	subtracts 1 energy point.

	takeDamage():
	subtracts amount from hit points and prints what happened:
	ClapTrap <name> takes <amount> points of damage!
	
	beRepaired() → if hit points > 0 and energy > 0:
	prints:
	ClapTrap <name> repairs itself, regaining <amount> hit points!
	adds to hit points, subtracts 1 energy point.
*/