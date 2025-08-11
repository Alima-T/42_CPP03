/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:41:00 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/12 00:52:36 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap();
    DiamondTrap diamond("Diamond");

    diamond.attack("target");	//  from ScavTrap
    diamond.takeDamage(30);		//  from ClapTrap
	diamond.beRepaired(20);		// from ClapTrap
	diamond.highFivesGuys();	// from FragTrap
	diamond.guardGate();		// from ScavTrap
	diamond.whoAmI();			// own method
    return 0;
}
/* The destructors will be called in reverse order of construction,
   demonstrating the correct cleanup of resources. */
 