/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 13:16:17 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/12 22:06:44 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
private:
	std::string m_name; 
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& src);
	FragTrap& operator=(const FragTrap& rhs);
	~FragTrap();

	void attack(const std::string& m_name);
	void highFivesGuys(void);
};

#endif
