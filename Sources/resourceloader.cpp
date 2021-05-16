#include "resourceloader.h"

ResourceLoader::ResourceLoader()
{
}

ResourceLoader::~ResourceLoader()
{
}

ResourceLoader::initResourceFile()
{

}
ResourceLoader::getInstance()
{
    if(NULL == s_loaderInstance) {
        s_loaderInstance = new ResourceLoader();
    }

    return s_loaderInstance;

}