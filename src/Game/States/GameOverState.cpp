#include "GameOverState.h"

GameOverState::GameOverState() {
	restartButton = new Button(ofGetWidth()/2, ofGetHeight()/2, 64, 50, "BACK TO GAME");
	ofSetColor(45,89,78);
	img3.load("images/gameover.png");
	
}

void GameOverState::tick() {
	
	restartButton->tick();
	if(restartButton->wasPressed()){
		setNextState("Game");
		setFinished(true);

	}
}
void GameOverState::render() {
	ofSetBackgroundColor(0, 30, 50);
	restartButton->render();
	ofSetColor(255);
	img3.draw(64,50);

}

void GameOverState::keyPressed(int key){
	
}

void GameOverState::mousePressed(int x, int y, int button){
	restartButton->mousePressed(x, y);
	
}

void GameOverState::reset(){
	setFinished(false);
	setNextState("");
	restartButton->reset();
}