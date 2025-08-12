/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:06:49 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/12 21:17:16 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap
{
private:
	std::string m_name;
	unsigned int m_hitPoints;
	unsigned int m_energyPoints;
	unsigned int m_attackDamage;

public:
	ClapTrap();
	ClapTrap(const std::string &name);			// Constructor with name parameter
	ClapTrap(const ClapTrap &src);				// Copy constructor src = other object being copied
	ClapTrap &operator=(const ClapTrap &rhs);	// Copy assignment operator rhs = object being assigned
	~ClapTrap();
	
	void attack(const std::string& target); // Target is the name of the object being attacked
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif
