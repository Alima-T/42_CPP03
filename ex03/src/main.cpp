/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:41:00 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/12 22:16:48 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Diamond");
	diamond.attack("target");	//  from ScavTrap
	diamond.takeDamage(30);		// explicitly call from ClapTrap
	diamond.beRepaired(20);		// from ClapTrap
	diamond.highFivesGuys();	// from FragTrap
	diamond.guardGate();		// from ScavTrap
	diamond.whoAmI();			// own method
	return 0;
}
/* The destructors will be called in reverse order of construction, for correct cleanup of resources. */
