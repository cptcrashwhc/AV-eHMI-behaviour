/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Asset.h
 * Author: weihan
 *
 * Created on 31 August 2022, 14:06
 */

#ifndef ASSET_H
#define ASSET_H


#include <cstdlib>
#include <iostream>
#include <utility>
#include <fstream>
#include <vector>
#include <cstring>
#include <ctime>
#include <ratio>
#include <chrono>

#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/reader.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/istreamwrapper.h"

using namespace std;
using namespace rapidjson;

struct Asset {
    string name;    // filename
    int duration;
    bool isImg;     // true = img, false = video
    
    Asset();
    Asset(const Asset& orig);
    virtual ~Asset();
};

#endif /* ASSET_H */

