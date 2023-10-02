#ifndef MEMORY_HANDLER_LIB_FILESINFO_H
#define MEMORY_HANDLER_LIB_FILESINFO_H
#include <string>
#include <filesystem>
#include <map>
#include <iostream>
#include<vector>
#include <chrono>
using namespace std::filesystem;
using namespace std;
using namespace std::chrono;

class FilesInfo {
private:
    vector <string>  files;
    map <string ,uint64_t > Info;
    map<string, time_t> filesTime;
    
public:
    FilesInfo();
    FilesInfo(const string & directoryPath);
    void getFiles(const string  & folderPath );
    map<string ,uint64_t > getDiskUsage();
    map<string, time_t> getFilesTime();
};


#endif //MEMORY_HANDLER_LIB_FILESINFO_H