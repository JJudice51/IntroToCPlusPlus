#include "Character.h"

//Default Constructor
Character::Character()
{
	m_health = 0;
	m_damage = 0;
}

/// <summary>
/// This is the Constructor for a Character or what defines a character 
/// </summary>
/// <param name="health">how much healthpoints or lives a character has before they would be considered dead at 0 and removed from the game</param>
/// <param name="damage">the amount of health that will be subtracted from another character when the take damage function is utilized</param>
Character::Character(float health, float damage)
{
	m_health = health;
	m_damage = damage;
}

/// <summary>
/// 
/// </summary>
/// <param name="damage"></param>
void Character::takeDamage(float damage)
{
	m_health -= m_damage;
}

/// <summary>
/// 
/// </summary>
/// <param name="opponent"></param>
void Character::attack(Character opponent)
{
	opponent.takeDamage(getDamage());
}




