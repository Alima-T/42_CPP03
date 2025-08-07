/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:15:24 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/07 14:11:13 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"


int main()
{
	std::cout << "\n***Testing ClapTrap ***\n" << std::endl;
	ClapTrap default1; // Default constructor
	default1.attack("Test1");
	default1.takeDamage(3);
	default1.beRepaired(2);
	ClapTrap robot ("Robot");// Constructor with name parameter
	robot.attack("Kiborg");
	robot.takeDamage(5);
	robot.beRepaired(3);
	robot.attack("Zelebra");
	robot.takeDamage(10);
	ClapTrap copyRobot1(robot); // Copy constructor
	ClapTrap copyRobot2 = robot; // Copy initialization
	ClapTrap assignedRobot;
	assignedRobot = robot; // Assignment operator

	std::cout << "\n***Testing FragTrap ***\n" << std::endl;
	FragTrap fragTrap1; // Default constructor
	fragTrap1.attack("Enemy1");
	fragTrap1.takeDamage(5);
	fragTrap1.beRepaired(3);
	fragTrap1.highFivesGuys();
	FragTrap fragTrap2("Fraggy"); // Constructor with name parameter
	fragTrap2.attack("Enemy2");
	fragTrap2.takeDamage(7);
	fragTrap2.beRepaired(4);
	fragTrap2.highFivesGuys();
	return 0;
}