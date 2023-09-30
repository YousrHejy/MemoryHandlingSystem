#ifndef MEMORY_HANDLER_LIB_PURGINGSERVICE_H
#define MEMORY_HANDLER_LIB_PURGINGSERVICE_H
#include <iostream>
#include <unistd.h>
#include <fstream>
#include "filesInfo.hpp"
using namespace std;

class PurgingService{

    private:
        int maxDiskUsage;
        bool deleteFile(const string& filePath);

    public:
        void purgeDataFiles();
        



};
#endif //MEMORY_HANDLER_LIB_PURGINGSERVICE_H
