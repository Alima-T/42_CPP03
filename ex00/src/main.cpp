/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:27:21 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/04 23:53:29 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"


int main()
{
	//TODO: test constructors, copy constructor, assignment operator, destructor
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
	return 0;
}