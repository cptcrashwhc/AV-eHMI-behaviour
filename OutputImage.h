/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   OutputImage.h
 * Author: weihan
 *
 * Created on 31 August 2022, 11:38
 */

#ifndef OUTPUTIMAGE_H
#define OUTPUTIMAGE_H


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

class OutputImage {
public:
    OutputImage();
    OutputImage(const OutputImage& orig);
    void setDuration(int);
    int getDuration();
    void setImgName(string);
    string getImgName();
    void play();
    virtual ~OutputImage();
protected:
    int durationImg;
    string imgName;
private:

};

#endif /* OUTPUTIMAGE_H */

