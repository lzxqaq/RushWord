#ifdef RESOURCELOADER_H
#define RESOURCELOADER_H

class ResourceLoader
{
private:
    /* data */
    //存放加载的文件名
    string[] resourceFileName;

public:
    void initResourceFile();
    string[] getAllFileName();
    string getSingleFileName(int index);

    Word[] loadResourceFile(string fileName);
    ResourceLoader(/* args */);
    ~ResourceLoader();
};

ResourceLoader::initResourceFile()
{
}

#endif