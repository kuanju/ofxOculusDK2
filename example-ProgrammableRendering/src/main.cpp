#include "testApp.h"
#include "ofGLProgrammableRenderer.h"

//--------------------------------------------------------------
int main(){
    ovr_InitializeRenderingShim();
    ofSetCurrentRenderer(ofGLProgrammableRenderer::TYPE);

    ofSetupOpenGL(1920, 1080, OF_WINDOW);
	ofRunApp(new testApp()); // start the app
}
