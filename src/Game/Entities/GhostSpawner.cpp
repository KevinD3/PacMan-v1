#include "GhostSpawner.h"

GhostSpawner:: GhostSpawner(int x, int y,int height, int width, EntityManager* em, ofImage spriteSheet) : Entity(x, y, width, height){
    this-> em = em;
    this-> spriteSheet = spriteSheet;
}

void GhostSpawner::spawnghost(){
    Ghost* ghostNuev = new Ghost(x, y, width, height, spriteSheet);
    em->ghost.push_back(ghostNuev);
    em->entities.push_back(ghostNuev);
}

void GhostSpawner::keyPressed(int key){
    if(key == 'g'){
        spawnghost();
    }
}