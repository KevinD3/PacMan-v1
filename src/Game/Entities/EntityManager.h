#pragma once

#include "BlockEntity.h"
#include "Ghost.h"

class EntityManager {

public:

	std::vector<Entity*> entities;
	std::vector<BlockEntity*>blocks;
	std::vector<Ghost*> ghost;
	void tick();
	void render();

};