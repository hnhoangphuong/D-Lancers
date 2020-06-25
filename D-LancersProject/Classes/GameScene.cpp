#include "GameScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* GameScene::createScene()
{
    return GameScene::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in GameScene.cpp\n");
}

// on "init" you need to initialize your instance
bool GameScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }

    visibleSize = Director::getInstance()->getVisibleSize();
    origin = Director::getInstance()->getVisibleOrigin();


    mlayer_Attack = new Layer::create();

    mlayer_Music = new Layer::create();
    

    this->scheduleUpdate();
    
    return true;
}

void GameScene::update(float dt){

}

void GameScene::spawnbuttonmusic(){

    /*DrawNode* btn = new DrawNode::create();
    float x = random(visibleSize.width - 10, 10);
    float y = random(visibleSize.height - 10, 10);
    btn->drawCircle(Vec2(x, y), 10);*/
    

}

void GameScene::readJson(){

}