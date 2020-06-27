#include "cocos2d.h"
#include <iostream>
#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"
#include <fstream>
#include "Definitions.h"

using namespace rapidjson;

class buttonM {
public:
    buttonM();

    void spawnbutton(cocos2d::Layer *layer, cocos2d::SpriteFrameCache * sf);

    //Document readjson(std::string path);

private:
    cocos2d::Size visibleSize;
    cocos2d::Vec2 origin;
}