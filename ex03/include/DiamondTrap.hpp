/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:14:04 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/08 14:46:11 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string m_name; //TODO from ClapTrap
public:
	DiamondTrap();
	DiamondTrap(const std::string& m_name);
	DiamondTrap(const FragTrap& src);
	DiamondTrap& operator=(const FragTrap& rhs);
	~DiamondTrap();

	void attack(const std::string& target); // from from ScavTrap
	void whoAmI(); //own
};

#endif