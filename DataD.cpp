/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   DataD.cpp
 * Author: weihan
 * 
 * Created on 31 August 2022, 15:43
 */


#include "DataD.h"

DataD::DataD() {
    frameid = 0;
    count = 0;
    crossingScore = 0.0;
    ydistance = 0.0;
    xdistance = 0.0;
}

DataD::DataD(const DataD& orig) {
    frameid = orig.frameid;
    count = orig.count;
    crossingScore = orig.crossingScore;
    state = orig.state;
    ydistance = orig.ydistance;
    xdistance = orig.xdistance;
}

DataD::~DataD() {
}

