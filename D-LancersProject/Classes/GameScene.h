#include "cocos2d.h"
#include "buttonM.h"
#include "Definitions.h"
#include <iostream>
#include <fstream>
#include "rapidjson/rapidjson.h"
#include "rapidjson/document.h"

using namespace rapidjson;

class GameScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);

    void update (float dt);

    void readjson(std::string path);
    
private:
    Vector<music_node> *vector_ms;
    Layer * mlayer_Music;
    Layer * mlayer_Attack;
    Size visibleSize;
    Vec2 origin;
    buttonM * d;
};