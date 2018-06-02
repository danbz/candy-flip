#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxGui.h"
#include "ofxVideoRecorder.h"


class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	void mousePressed(int x, int y, int button);
    void keyPressed(int key);
	
	ofVideoGrabber cam;	
	ofxCv::ContourFinder contourFinder;
	ofColor targetColor;
    
    ofxPanel gui;
    ofParameter<float> threshold;
    ofParameter<bool> trackHs;
    ofParameter<bool> holes;
    
    
    ofVideoPlayer video;
    bool b_showGui, b_ShowVideo;
    
    
    /// FOR RECORDING
    
    ofVideoGrabber      vidGrabber;
    ofxVideoRecorder    vidRecorder;
    bool b_Recording;
    void startRecord();
    void stopRecord();
    
};
