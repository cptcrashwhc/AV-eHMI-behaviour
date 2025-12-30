/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Asset.cpp
 * Author: weihan
 * 
 * Created on 31 August 2022, 14:06
 */


#include "Asset.h"

using namespace std;
//using namespace rapidjson;

Asset::Asset() {
    duration = 0;
    isImg = true;
}

Asset::Asset(const Asset& orig) {
    name = orig.name;
    duration = orig.duration;
    isImg = orig.isImg;
}

Asset::~Asset() {
}

