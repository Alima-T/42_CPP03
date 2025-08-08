/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:38:57 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/08 14:23:17 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "\n***Testing ClapTrap ***\n" << std::endl;

	ClapTrap default1; // Default constructor
	default1.attack("Test1");
	default1.takeDamage(3);
	default1.beRepaired(2);
	ClapTrap robot("Robot"); // Constructor with name
	robot.attack("Kiborg");
	robot.takeDamage(5);
	robot.beRepaired(3);
	robot.attack("Zelebra");
	robot.takeDamage(10);
	ClapTrap copyRobot1(robot); // Copy constructor
	ClapTrap copyRobot2 = robot; // Copy initialization
	ClapTrap assignedRobot;
	assignedRobot = robot; // Assignment operator

	std::cout << "\n*** Testing ScavTrap ***\n" << std::endl;
	ScavTrap scavDefault; // Default constructor
	scavDefault.attack("TargetA");
	scavDefault.takeDamage(20);
	scavDefault.beRepaired(10);
	scavDefault.guardGate();
	ScavTrap scavNamed("Guardian");// Constructor with name
	scavNamed.attack("BadRobot");
	scavNamed.guardGate();
	ScavTrap scavCopy(scavNamed); // Copy constructor
	ScavTrap scavAssigned;
	scavAssigned = scavDefault; // Assignment operator

	std::cout << "\n*** End of main (destructors will be called) ***\n" << std::endl;

	return 0;
}