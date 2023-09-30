#include "purgingService.hpp"




bool PurgingService::deleteFile(const string& filepath) {
    if (remove(filepath.c_str()) == 0) {
        //std::cout << "File deleted successfully." << std::endl;
        return true;
    } else {
        std::cerr << "Error deleting file." << std::endl;
        return false;
    }
}


void PurgingService::purgeDataFiles(){

    int maxDiskUsage = 20; // maximum allowed disk space
    FilesInfo file1; // object from filesinfo class
    int sum = 0; //summition of all file usages
    file1.getFiles("/home/islam/Desktop/folder1"); // change the path to the targeted directory
    map <string ,uint64_t > filesInfo=file1.getDiskUsage();
    map<string,uint64_t>::iterator itr;
    for(itr=filesInfo.begin(); itr != filesInfo.end(); ++itr)
        {
            sum = sum + itr->second ; // adding all file spaces in the directory
        }
        
    if (sum > maxDiskUsage){
        for(itr=filesInfo.begin(); itr != filesInfo.end(); ++itr){
            deleteFile(itr->first); //delete all files in the directory
            }
        cout << "Deleted all files in the directory" << endl;
        } 
    else{
        cout << "Disk is not full!";
    }       
}