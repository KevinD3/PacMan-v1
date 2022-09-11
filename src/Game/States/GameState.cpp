#include "GameState.h"
#include "Entity.h"

GameState::GameState() {
	mapImage.load("images/map1.png");
	map = MapBuilder().createMap(mapImage);
	cancionJuego.load("audio/siveoatumamabeat.wav");
	cancionJuego.play();
	cancionJuego.setLoop(true);
	//soundTRack.load("audio/siveoatumamabeat.mp3");
	//soundTRack.setLoop(true);
	//soundTRack.play();
	//soundTRack.stop();

}
void GameState::tick() {
	map->tick();
}
void GameState::render() {
	map->render();
}

void GameState::keyPressed(int key){
	map->keyPressed(key);
}

void GameState::mousePressed(int x, int y, int button){
	map->mousePressed(x, y, button);
}

void GameState::keyReleased(int key){
	map->keyReleased(key);
}

void GameState::reset(){
	setFinished(false);
	setNextState("");
}
