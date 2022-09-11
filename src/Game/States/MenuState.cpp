#include "MenuState.h"

MenuState::MenuState() {
	startButton = new Button(ofGetWidth()/2, ofGetHeight()/2, 64, 50, "PRESS TO START");
	ofSetColor(45,89,78);
	img1.load("images/pacc.png");
	
}

void MenuState::tick() {
	
	startButton->tick();
	if(startButton->wasPressed()){
		setNextState("Game");
		setFinished(true);

	}
}
void MenuState::render() {
	ofSetBackgroundColor(0, 30, 50);
	startButton->render();
	ofSetColor(255);
	img1.draw(64,50);

}

void MenuState::keyPressed(int key){
	
}

void MenuState::mousePressed(int x, int y, int button){
	startButton->mousePressed(x, y);
	
}

void MenuState::reset(){
	setFinished(false);
	setNextState("");
	startButton->reset();
}