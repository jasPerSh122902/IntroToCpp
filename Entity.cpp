#include "Entity.h"
#include <iostream>

Entity::Entity()
{
	m_icon = '\0';
	m_health = 0;
	m_attackPower = 0;
	m_defensePower = 0;
}

Entity::Entity(char icon, float health, float attackPower, float defensePower)
{
	m_icon = icon;
	m_health = health;
	m_attackPower = attackPower;
	m_defensePower = defensePower;
}

float Entity::takeDamage(float damageAmount)
{
	//makes damageTaken = to the amount of damge - form  the defence
	float damageTaken = damageAmount - getDefencePower();

	//if the damage taken was lower than0
	if (damageTaken < 0)
		damageTaken = 0;//null
	//subtracts the health from damage
	m_health -= damageTaken;

	//if health is going lower than 0 
	if (m_health < 0)
		m_health = 0;//set 0

	return damageTaken;
}

float Entity::attack(Entity* entity)
{
	//returns the damage taken and gets the attackpower.
	return entity -> takeDamage(getAttackPower());
}

void Entity::printStats()
{
	std::cout << m_icon << std::endl;
	std::cout << "Health: " << getHealth() << std::endl;
	std::cout << "Attack: " << getAttackPower() << std::endl;
	std::cout << "Defence: " << getDefencePower() << std::endl;
	
}
