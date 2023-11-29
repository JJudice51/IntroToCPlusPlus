#pragma once

class Character
{

public:
	void takeDamage(float damage);

	float getHealth() { return m_health; }
	float getDamage() { return m_damage; }

	/// <summary>
	/// m_ = member variables for this class aka private variables. you also only have to put it once and list all the private variables you want.
	/// </summary>
	private:
		float m_health;
		float m_damage;


};