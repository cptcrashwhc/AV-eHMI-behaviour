/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   DataD.h
 * Author: weihan
 *
 * Created on 31 August 2022, 15:43
 */

#ifndef DATAD_H
#define DATAD_H


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

#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/reader.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/istreamwrapper.h"

using namespace std;
using namespace rapidjson;

struct DataD {
    int frameid;
    int count;
    double crossingScore;
    string state;
    double ydistance;
    double xdistance;

    DataD();
    DataD(const DataD& orig);
    virtual ~DataD();
};

#endif /* DATAD_H */

