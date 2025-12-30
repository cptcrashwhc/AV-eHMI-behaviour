/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: weihan
 *
 * Created on Visual Studio on 15 June 2022, 14:53
 */


#include <cstdlib>
#include <iostream>
#include <utility>
#include <fstream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <ctime>
#include <ratio>
#include <chrono>

#include <signal.h>


#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/reader.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/istreamwrapper.h"
//#include <sw/redis++/redis++.h>


#include "OutputVideo.h"        //3b
#include "OutputImage.h"        //3a
#include "Asset.h"              //2x
#include "Scenario.h"           //2b
#include "ScenarioHandler.h"    //2a
#include "DataD.h"              //1x
#include "InputHandler.h"       //1


using namespace cv;
using namespace std;
using namespace rapidjson;
//using namespace sw::redis;

using namespace std::chrono;


//Main -------------------------------------------------------------//
int main()
{  
        high_resolution_clock::time_point mainstart = high_resolution_clock::now();
    
//    ScenarioHandler shh;
//    shh.ScenarioLoading();
    
        high_resolution_clock::time_point mainstart2 = high_resolution_clock::now();
    
    InputHandler in;
    //in.RedisPPConnect();   
    in.RedisConnect();
    
        high_resolution_clock::time_point mainend = high_resolution_clock::now();
    
        duration<double> time_span = duration_cast<duration<double>>(mainend - mainstart2);
    
        cout << "Complete cycle time: " << time_span.count() << "s" << endl;
}