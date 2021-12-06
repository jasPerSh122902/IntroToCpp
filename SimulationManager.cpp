#include "SimulationManager.h"
#include "StartScene.h"
#include "BattleScene.h"

SimulationManager::SimulationManager()
{
	m_entityCount = 0;
	m_currentFighterIndex = 0;
}

SimulationManager::~SimulationManager()
{
}

void SimulationManager::start()
{
	//actors that are in the scene
	Entity wompus = Entity('W', 100, 400, 200);
	Entity unclePhil = Entity('U', 500, 239, 20);
	Entity skeleto = Entity('s', 234, 239, 30);

	//the actors being put in to the enitites array that was made
	m_entities[0] = wompus;
	m_entities[1] = unclePhil;
	m_entities[2] = skeleto;
	//made the entitycounter equal to the number of entityes that i have
	m_entityCount = 3;

	//this is pointer to pointer array
	int test = 5;
	Entity* entityPtrs[5];
	Entity** entities = new Entity * [test];

	//made the current fighter equal to the respected entity that is in the array.
	m_currentFighter1 = &m_entities[0];
	m_currentFighter2 = &m_entities[1];
	m_currentFighterIndex = 2;
}

void SimulationManager::update()
{

	

	//checkes to see if the current fighter 1 has health that is lower than 0 and the current fighter index is lower than the entity counter.
	if (m_currentFighter1->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		//this updates the current figthter 1 and makes enitties update to current fighter index ...
		m_currentFighter1 = &m_entities[m_currentFighterIndex];
		//increments the current fighter index by 1
		m_currentFighterIndex++;
	}
	//checkes to see if the current fighter 2 has health that is lower than 0 and the current fighter index is lower than the entity counter.
	if (m_currentFighter2->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		//this updates the current figthter 2 and makes enitties update to current fighter index ...
		m_currentFighter2 = &m_entities[m_currentFighterIndex];
		//increments the current fighter index by 1
		m_currentFighterIndex++;
	}

	//if eather of the fighter are dead and the current fighter index is greater or eaqual to the entitycounter...
	if (m_currentFighter1->getHealth() <= 0 || m_currentFighter2->getHealth() <= 0 && m_currentFighterIndex >= m_entityCount)
	{
		//application should close and...
		Engine::setApplicationShouldClose(true);
		//...returns that value.
		return;
	}
	//the oponits fight each other and attacks the other fighter. 
	m_currentFighter1->attack(m_currentFighter2);
	m_currentFighter2->attack(m_currentFighter1);

	
}
