#include "cocos2d.h"

class GameScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);

    void update (float dt);

    void spawnbuttonmusic();

    void readJson();
    
private:
    Layer * mlayer_Music;
    Layer * mlayer_Attack;
    Size visibleSize;
    Vec2 origin;
    
};