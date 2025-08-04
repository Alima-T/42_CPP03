/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:27:21 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/01 23:13:23 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"


int main()
{
	ClapTrap robot ("Robot");
	robot.attack("Kiborg");
	robot.takeDamage(5);
	robot.beRepaired(3);
	robot.attack("Zelebra");
	robot.takeDamage(10);
	
	return 0;
}