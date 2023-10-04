#ifndef MEMORY_HANDLER_LIB_PURGINGSERVICE_H
#define MEMORY_HANDLER_LIB_PURGINGSERVICE_H
#include <iostream>
#include <unistd.h>
#include <fstream>
#include "filesInfo.hpp"
#include "logs.hpp"
using namespace std;


class PurgingService{

    private:
        int maxDiskUsage;
        bool deleteFile(const string& filePath);
        uint64_t DiskSize( FilesInfo & diskFile );
        vector <string>  oldestFile(FilesInfo & file,int & maximumTime);
    public:
        PurgingService();
        void purgeDataFiles(int & maxDiskUsage, int & maxTime, path folderPath);
        
        
        
};
#endif //MEMORY_HANDLER_LIB_PURGINGSERVICE_H
