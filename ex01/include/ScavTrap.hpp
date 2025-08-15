/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:42:30 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/15 15:00:51 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"  // Наследуем всё из ClapTrap

class ScavTrap : public ClapTrap 
{
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& src);
	ScavTrap& operator=(const ScavTrap& rhs);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

#endif
