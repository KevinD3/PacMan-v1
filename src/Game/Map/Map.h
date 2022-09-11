#pragma once
#include "Player.h"
#include "GhostSpawner.h"
#include "Ghost.h"

class Map{
    public:
      Map(EntityManager*);
      void addBlockEntity(BlockEntity*);
      void addEntity(Entity*);
      void setPlayer(Player*);
      void tick();
      void render();
      void keyPressed(int key);
		  void mousePressed(int x, int y, int button);
		  void keyReleased(int key);

      void setGhostSpawner(GhostSpawner*);
      void spawnGhost();
      Player* getPlayer();
      Player* getHealth();


    private:
      EntityManager *entityManager;
      Player *player;
      GhostSpawner *ghostSpawner;
        
};