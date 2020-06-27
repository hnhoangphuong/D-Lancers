#include "GameScene.h"

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
    
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("sf.plist", "sf.png");

    d = new buttonM();

    vector_ms = new Vector<music_node>();

    readjson(MUSIC_JSON_FILE_NAME_1);


    d->spawnbutton(this, sf, vector_ms->at(0));


    //d->spawnbutton(mlayer_Music, SpriteFrameCache::getInstance());

    this->scheduleUpdate();
    
    return true;
}

void GameScene::update(float dt){

}

void GameScene::readjson(std::string path){

    Document m_document;
    ssize_t size

    char* buf = (char*)FileUtils::getInstance()->getFileData(path + ".json", "r", &size);
    std::string content(buf, size);

    m_document.Parse(content.c_str());


    Value& m_doc = m_document["tracks"]["notes"];

    for (int i = 0; i < m_doc.Size(); ++i)
    {
        Value& m_doci = m_doc[i];
        
        if (m_doci["midi"].GetInt() == 54 ){
        
            music_note ms;

            ms.name = m_doci["name"].GetString();
        
            ms.duration = m_doci["duration"].GetLong();

            ms.time = m_doci["time"].GetLong();

            vector_ms->pushBack(ms);
        }
    }
    
}

