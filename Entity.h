#pragma once

class Entity
{
public:
    Entity();
    Entity(char icon, float health, float attackPower, float defensePower);

    //gets the health of the entity
    float getHealth() {return m_health;}
    //gets the attack power entity.
    float getAttackPower() { return m_attackPower; }
    //get the defecnce power of entity.
    float getDefencePower() { return m_defensePower; }

    //makes the entity take the damage.
    float takeDamage(float damageAmount);
    //allows enetity to attack
    float attack(Entity* entity);

private:
    float m_health;
    float m_attackPower;
    float m_defensePower;
    char  m_icon;

};