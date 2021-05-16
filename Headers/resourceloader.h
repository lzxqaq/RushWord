#ifdef RESOURCELOADER_H
#define RESOURCELOADER_H

class ResourceLoader
{
private:
    //存放加载的文件名
    string[] m_resourceFileName;

    //唯一静态实例，单例模式
    static ResourceLoader *s_loaderInstance;


public:
    static ResourceLoader *getInstance();
    void initResourceFile();
    string[] getAllFileName();
    string getSingleFileName(int index);

    Word[] loadResourceFile(string fileName);


    ResourceLoader();
    ~ResourceLoader();
};

#endif