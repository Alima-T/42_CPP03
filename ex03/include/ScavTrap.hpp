/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:42:30 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/11 21:08:32 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"  // Наследуем всё из ClapTrap

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();                              // Конструктор по умолчанию
	ScavTrap(const std::string& name);       // Конструктор с именем
	ScavTrap(const ScavTrap& other);         // Конструктор копирования
	ScavTrap& operator=(const ScavTrap& other); // Оператор присваивания
	~ScavTrap();                             // Деструктор

	void attack(const std::string& target);  // Переопределённая атака
	void guardGate();                        // Специальный режим охраны
};

#endif
