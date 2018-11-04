//
// Created by hazmi.arifin on 5/26/2018.
//

#include "stdafx.h"
#include "OGLAdapter.h"
#include "OGLNative.h"
#include "OGLRender.h"
#include "Engine/Utils/Speak.h"
#include "Engine/Implement.h"

bool setupGraphics(int w, int h) {
#if defined (AndroidStudio)
    printGLString("Version", GL_VERSION);
    printGLString("Vendor", GL_VENDOR);
    printGLString("Renderer", GL_RENDERER);
    printGLString("Extensions", GL_EXTENSIONS);
#endif

    Speak("setupGraphics(%d, %d)", w, h);
    glViewport(0, 0, w, h);
    checkGlError("glViewport");
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    
    //init model here

    return true;
}


void renderFrame() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //render model here
}

void cleanup()
{
    //cleanup here
}

