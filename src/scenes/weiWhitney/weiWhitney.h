#pragma once

#include "ofMain.h"


#include "baseScene.h"



typedef struct {
    
    float     x;
    float     y;
    bool     bBeingDragged;
    bool     bOver;
    float     radius;
    
}draggableVertex;


class weiWhitney : public baseScene{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    int nCurveVertices;
    draggableVertex curveVertices[7];
    draggableVertex bezierVertices[4];
    
    
		
};
