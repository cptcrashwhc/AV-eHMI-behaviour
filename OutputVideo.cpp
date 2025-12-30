/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   OutputVideo.cpp
 * Author: weihan
 * 
 * Created on 31 August 2022, 11:28
 */


#include "OutputVideo.h"

using namespace cv;
using namespace std;

OutputVideo::OutputVideo() {
    cyclesVid = 0;
}

OutputVideo::OutputVideo(const OutputVideo& orig) {
    cyclesVid = orig.cyclesVid;
    videoName = orig.videoName;
}

void OutputVideo::setCyclesVid(int cycles) {
    cyclesVid = cycles;
}

int OutputVideo::getCyclesVid() {
    return cyclesVid;
}

void OutputVideo::setVideoName(string name) {
    videoName = name;
}
string OutputVideo::getVideoName() {
    return videoName;
}

void OutputVideo::play()  {
    VideoCapture vid_capture(getVideoName());                   // Pass getter string

    //For error
    if (!vid_capture.isOpened()) {                              // For frames
        cout << "Error opening video stream or file" << endl;
    }
    else {
        int fps = vid_capture.get(CAP_PROP_FPS);		                    // Obtain fps and frame count by get() method and print. Can replace 5 with CAP_PROP_FPS as well, they are enumerations
        cout << "Frames per second: " << fps;

        int frame_count = vid_capture.get(CAP_PROP_FRAME_COUNT);		            // Obtain frame_count using opencv built in frame count reading method. Can replace 7 with CAP_PROP_FRAME_COUNT as well, they are enumerations
        cout << "  Frame count: " << frame_count;
    }

    //Actual Play

    int cycleCounter = 0;

    while (vid_capture.isOpened()) {                            // Read the frames to the last frame
        if (cycleCounter == cyclesVid - 1)                      // Counter
            break;

            Mat frame;                                              // Initialise frame matrix
            bool isSuccess = vid_capture.read(frame);               // Initialize a boolean to check if frames are there or not

            namedWindow("Frame", WINDOW_NORMAL);                    // Create window
            setWindowProperty("Frame", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);

            cout << "Video to initiate" << endl;
            if (isSuccess == true) {                                // If frames are present, show it
                cout << "Playing" << endl;
                imshow("Frame", frame);                             // display frames
            }

            if (isSuccess == false)                                 // If frames are not there, ie. once ended
            {
                cout << "Loop ended, will re-index" << endl;
                vid_capture.set(CAP_PROP_POS_FRAMES, 0);            // Re-index to 0, for looping
                cout << "Video camera is disconnected" << endl;
                //break;                                  // cut, close it
                cycleCounter++;
                cout << "Counter" << cycleCounter << endl;
            }

            int key = waitKey(20);                                  // wait 20 ms between successive frames and break the loop if key q is pressed
            if (key == 'q')
            {
                cout << "q key is pressed by the user. Stopping the video" << endl;
                break;
            }

    }

    //waitKey(0);                     //wait for keypress
    // Release the video capture object
    vid_capture.release();
    destroyAllWindows();
}

OutputVideo::~OutputVideo() {
}

