/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:15:24 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/11 23:41:51 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"


int main()
{
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