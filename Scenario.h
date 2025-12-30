/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Scenario.h
 * Author: weihan
 *
 * Created on 31 August 2022, 14:20
 */

#ifndef SCENARIO_H
#define SCENARIO_H


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

#include "OutputVideo.h"
#include "OutputImage.h"
#include "Asset.h"

using namespace std;
using namespace rapidjson;

class Scenario {
public:
    Scenario(string);
    Scenario(const Scenario& orig);
    void addAsset(string, int, bool);
    void Run();
    virtual ~Scenario();
protected:
    vector<Asset> asset_container;    //struct
    string scenarioid;
    OutputImage imgPlayer;
    OutputVideo vidPlayer;
private:

};

#endif /* SCENARIO_H */

