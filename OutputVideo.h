/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   OutputVideo.h
 * Author: weihan
 *
 * Created on 31 August 2022, 11:28
 */

#ifndef OUTPUTVIDEO_H
#define OUTPUTVIDEO_H


#include <cstdlib>
#include <iostream>
#include <utility>
#include <fstream>
#include <vector>
#include <cstring>
#include <ctime>
#include <ratio>
#include <chrono>

#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

class OutputVideo {
public:
    OutputVideo();
    OutputVideo(const OutputVideo& orig);
    void setCyclesVid(int);
    int getCyclesVid();
    void setVideoName(string);
    string getVideoName();
    void play();
    virtual ~OutputVideo();
protected:
    int cyclesVid;
    string videoName;
private:

};

#endif /* OUTPUTVIDEO_H */

