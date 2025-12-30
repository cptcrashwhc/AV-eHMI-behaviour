/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ScenarioHandler.cpp
 * Author: weihan
 * 
 * Created on 31 August 2022, 14:58
 */


#include "ScenarioHandler.h"

using namespace std;
//using namespace rapidjson;
//using namespace sw::redis;

using namespace std::chrono;

vector<Scenario> ScenarioHandler::scenario_container;

ScenarioHandler::ScenarioHandler() {
//    ScenarioLoading();
}

ScenarioHandler::ScenarioHandler(const ScenarioHandler& orig) {
    scenario_container = orig.scenario_container;
    std::copy(orig.scenario_container.begin(), orig.scenario_container.end(), scenario_container.begin());
    scenarioSel = orig.scenarioSel;
}

void ScenarioHandler::ScenarioLoading() {     
    cout << "ScenarioLoading clear" << endl;
    scenario_container.clear();
    
    cout << "ScenarioHandler::ScenarioLoading " << endl;

    ifstream scenariofile("Scenario.json");
    IStreamWrapper sswrapper(scenariofile);

    Document sce;
    sce.ParseStream(sswrapper);

    const Value& prog = sce["Scenarios"];
    for (Value::ConstValueIterator itr = prog.Begin(); itr != prog.End(); ++itr) {
        Scenario onescenario((*itr)["scenario_no"].GetString());        //constructor overloading

        const Value& inside = (*itr)["assets"];
        for (Value::ConstValueIterator itr2 = inside.Begin(); itr2 != inside.End(); ++itr2) {
            onescenario.addAsset((*itr2)["name"].GetString(), (*itr2)["duration"].GetInt(), (*itr2)["isImg"].GetBool());    
            //uses push_back from within addAsset
        }
        scenario_container.push_back(onescenario);
    }
//            cout << "ScenarioHandler::ScenarioLoading scenario_container size: " << scenario_container.size() << endl;
////            for (int s = 0; s < scenario_container.size(); s++) {
////                cout << scenario_container[s] << endl;
////            }

}

void ScenarioHandler::setScenarioDecision(int s) {           //1, 2, 3, 4
    // safety check, ensure scenario exists
//    cout << "ScenarioHandler::setScenarioDecision " << endl;    
    
    if (s - 1 < scenario_container.size())
    {
        scenarioSel = s;
//            cout << "ScenarioHandler::setScenarioDecision scenario_container size: " << scenario_container.size() << endl;
////            for (int s = 0; s < scenario_container.size(); s++) {
////                cout << scenario_container[s] << endl;
////            }
        scenario_container[s-1].Run();
    }
}
int ScenarioHandler::getScenarioDecision() {
    return scenarioSel;
}

ScenarioHandler::~ScenarioHandler() {
}

