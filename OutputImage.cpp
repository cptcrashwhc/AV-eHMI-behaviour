/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   OutputImage.cpp
 * Author: weihan
 * 
 * Created on 31 August 2022, 11:38
 */


#include "OutputImage.h"

using namespace std;
//using namespace rapidjson;
//using namespace sw::redis;

using namespace std::chrono;

OutputImage::OutputImage() {
    durationImg = 0;
}

OutputImage::OutputImage(const OutputImage& orig) {
    durationImg = orig.durationImg;
    imgName = orig.imgName;
}

void OutputImage::setDuration(int duration) {        //Set value for waitKey(). Currently user input, need to become fixed
    //cout << "Enter duration in int in seconds : ";
    //cin >> duration;
    duration = duration * 1000;         //Receive inputs in seconds, convert to milliseconds for waitKey()
    durationImg = duration;
}
int OutputImage::getDuration() {
    return durationImg;
}

void OutputImage::setImgName(string name) {
    imgName = name;
}
string OutputImage::getImgName() {
    return imgName;
}

void OutputImage::play()  {
    //destroyAllWindows();                                //close previous window
    
        high_resolution_clock::time_point oimage_start = high_resolution_clock::now();    

    Mat img;
    img = imread(getImgName(), 1);

//    cout << "Image type : " << img.type() << endl;
//    cout << "Image shape : " << img.size() << endl;

    //for (int i = 0; i < 5000; i++) {
    namedWindow("imagewin", WINDOW_NORMAL);                                        //FOR TESTING
//    setWindowProperty("imagewin", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);       //REACTIVATE THIS UPON DEPLOYMENT

    //waitKey(0);
    
    int display_duration = getDuration() * 1000; //converft to seconds
    if (display_duration > 0)
    {
        imshow("imagewin", img);
        waitKey(display_duration);                        //ideally 60
    }
    else
        destroyWindow("imagewin");
    
        high_resolution_clock::time_point oimage_end = high_resolution_clock::now();
        duration<double> opencv_span = duration_cast<duration<double>>(oimage_end - oimage_start);
        cout << "opencv image play timespan: " << opencv_span.count() << "s " << endl;

//    destroyAllWindows();
}

OutputImage::~OutputImage() {
}

