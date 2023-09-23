#ifndef MEMORY_HANDLER_LIB_FILESINFO_H
#define MEMORY_HANDLER_LIB_FILESINFO_H
#include <string>
#include <filesystem>
#include <map>
#include <iostream>
#include<vector>
using namespace std::filesystem;
using namespace std;

class FilesInfo {
private:
    vector <string>  files;
    map <string ,uint64_t > Info;
    
public:
    FilesInfo();
    FilesInfo(const string & directoryPath);
    void getFiles(const string  & folderPath );
    map<string ,uint64_t > getDiskUsage();
};


#endif //MEMORY_HANDLER_LIB_FILESINFO_H