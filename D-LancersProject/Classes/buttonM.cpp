#include "../Classes/buttonM.h"

USING_NS_CC;

buttonM::buttonM(){
    visibleSize = Director::getInstance()->getVisibleSize();
    origin = Director::getInstance()->getVisibleOrigin();

}
void buttonM::spawnbutton(Layer * layer, SpriteFrameCache * sf, music_note ms){
    


}

/*Document buttonM::readjson(std::string path){
    
    Document m_document;
    ssize_t size;

    char* buf = (char*)FileUtils::getInstance()->getFileData(_fileName, "r", &size);
    std::string content(buf, size);

    m_document.Parse(content.c_str());

    return m_document;
}*/