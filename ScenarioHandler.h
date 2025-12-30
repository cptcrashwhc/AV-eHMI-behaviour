/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ScenarioHandler.h
 * Author: weihan
 *
 * Created on 31 August 2022, 14:58
 */

#ifndef SCENARIOHANDLER_H
#define SCENARIOHANDLER_H


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

#include "Asset.h"
#include "Scenario.h"
#include "OutputVideo.h"
#include "OutputImage.h"

using namespace std;
using namespace rapidjson;

class ScenarioHandler {
public:
    ScenarioHandler();
    ScenarioHandler(const ScenarioHandler& orig);
    static void ScenarioLoading();
    void setScenarioDecision(int);
    int getScenarioDecision();
    virtual ~ScenarioHandler();
protected:
    static vector<Scenario> scenario_container;
    int scenarioSel;
private:

};

#endif /* SCENARIOHANDLER_H */

