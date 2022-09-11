#pragma once

#include "Entity.h"
#include "EntityManager.h"
#include "Ghost.h"

class GhostSpawner: public Entity{
    
    private:
        EntityManager* em;
        ofImage spriteSheet;

    public:
        GhostSpawner(int, int, int, int, EntityManager*, ofImage);
        void spawnghost();
        void keyPressed(int);    
};
