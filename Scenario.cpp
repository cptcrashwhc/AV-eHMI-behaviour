/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Scenario.cpp
 * Author: weihan
 * 
 * Created on 31 August 2022, 14:20
 */


#include "Scenario.h"

using namespace std;
//using namespace rapidjson;
//using namespace sw::redis;

using namespace std::chrono;

//vector<Asset> asset_container;

Scenario::Scenario(string sid) {
    scenarioid = sid;
}

Scenario::Scenario(const Scenario& orig) {
    asset_container = orig.asset_container;
    std::copy(orig.asset_container.begin(), orig.asset_container.end(), asset_container.begin());
    scenarioid = orig.scenarioid;
    imgPlayer = orig.imgPlayer;
    vidPlayer = orig.vidPlayer;
}

void Scenario::addAsset(string n, int d, bool iv) {
        cout << "Scenario::addAsset add" << endl;
    Asset oneasset;         // from struct
    oneasset.name = n;
        cout << oneasset.name << endl;
    oneasset.duration = d;
        cout << oneasset.duration << endl;
    oneasset.isImg = iv;
        cout << oneasset.isImg << endl;
    asset_container.push_back(oneasset);
        cout << "Scenario::addAsset asset container size: " << asset_container.size() << endl;
//        for (int a = 0; a < asset_container.size(); a++) {
//            cout << "Scenario::addAsset: n d iv: " << asset_container[a].name << asset_container[a].duration << asset_container[a].isImg << endl;
//        }
}

void Scenario::Run() {
//    cout << "Scenario::Run " << endl;
//    cout << "Scenario::Run asset container size: " << asset_container.size() << endl;
//        for (int a = 0; a < asset_container.size(); a++) {
//            cout << "Scenario::Run: n d iv: " << asset_container[a].name << asset_container[a].duration << asset_container[a].isImg << endl;
//        }
    for (int i = 0; i < asset_container.size(); i++) {
        // push in for Image        
        if (asset_container[i].isImg) {
            cout << "image pushing in" << endl;
                high_resolution_clock::time_point playimage_start = high_resolution_clock::now();    
            imgPlayer.setImgName(asset_container[i].name);        //function derived from class 3 objects
            imgPlayer.setDuration(asset_container[i].duration);   //function derived from class 3 objects
            imgPlayer.play();                                     //function derived from class 3 objects
                high_resolution_clock::time_point playimage_end = high_resolution_clock::now();
                duration<double> image_span = duration_cast<duration<double>>(playimage_end - playimage_start);
                cout << "Scenario image play timespan: " << image_span.count() << "s" << endl;
        }
        // for video
        else {
            cout << "video pushing in" << endl;
            vidPlayer.setVideoName(asset_container[i].name);      //function derived from class 3 objects
            vidPlayer.setCyclesVid(asset_container[i].duration);  //function derived from class 3 objects
            vidPlayer.play();                                     //function derived from class 3 objects
        }
    }
}

Scenario::~Scenario() {
}

