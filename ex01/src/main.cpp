/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:38:57 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/15 15:17:33 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap scavNamed("Guardian");// Constructor with name
	scavNamed.attack("BadRobot");
	scavNamed.takeDamage(100);
	scavNamed.beRepaired(10);
	scavNamed.guardGate();
	scavNamed.attack("BadRobot2");
	scavNamed.takeDamage(60);
	scavNamed.attack("BadRobot3");
	scavNamed.takeDamage(60);
	// ScavTrap scavDefault; // Default constructor
	// scavDefault.attack("TargetA");
	// scavDefault.takeDamage(20);
	// scavDefault.beRepaired(10);
	// scavDefault.guardGate();
	// ScavTrap scavCopy(scavNamed); // Copy constructor
	// ScavTrap scavAssigned;
	// scavAssigned = scavDefault; // Assignment operator
	std::cout << "\n*** Destructors ***\n" << std::endl;

	return 0;
}