/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:14:04 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/12 21:01:30 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string m_name;
public:
	DiamondTrap();
	DiamondTrap(const std::string& m_name);
	DiamondTrap(const DiamondTrap& src);
	DiamondTrap& operator=(const DiamondTrap& rhs);
	~DiamondTrap();

	using ScavTrap::attack;
	void whoAmI(); //own
};

#endif