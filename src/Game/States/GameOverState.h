#pragma once

#include "State.h"
#include "Button.h"

class GameOverState : public State {
private:
	ofImage img1;
	ofImage img2;
    ofImage img3;
	ofImage up, down, left, right;
	Button *restartButton;

public:
	GameOverState();
	void tick();
	void render();
	void keyPressed(int key);
	void mousePressed(int x, int y, int button);
	void reset();
	

};
