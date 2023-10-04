#include "purgingService.hpp"
PurgingService:: PurgingService(){

}

bool PurgingService::deleteFile(const string& filepath) {
    if (remove(filepath.c_str()) == 0) {
        writeLogs(FileDeleted);
        return true;
    } else {
        writeLogs(DeleteError);
        return false;
    }
}
uint64_t  PurgingService::DiskSize(FilesInfo & diskFile ){
    uint64_t sum = 0; //summition of all file usages
    map <string ,uint64_t > storageInfo=diskFile.getDiskUsage();
    for(const auto diskItr :storageInfo)
        {
            sum = sum + diskItr.second ; // adding all file spaces in the directory
        }
    return sum;
}
 vector <string>  PurgingService::oldestFile(FilesInfo & file,int & maximumTime){
    vector <string> oldestFiles;
    map<string, time_t> timeInfo=file.getFilesTime();
    for(const auto timeItr :timeInfo)
        {          
           if((timeItr.second) >maximumTime){
                oldestFiles.push_back(timeItr.first);
           }
           
        }
    return oldestFiles;
 }  
void PurgingService::purgeDataFiles(int & maxDiskUsage, int & maxTime, path folderPath){
    FilesInfo  file1; // object from filesinfo class
    file1.getFiles(folderPath); // change the path to the targeted directory
    const uint64_t & sum = DiskSize(file1);
    if (sum > maxDiskUsage){
            vector <string>  filesDelete=oldestFile( file1,maxTime);
            if(filesDelete.size()>0){
                for(const auto &  filePath :filesDelete){
                    deleteFile(filePath); //delete all files in the directory
                }
                cout << "Deleted all files in the directory" << endl;
            }else{
                cout << "There is no old files to be deleted "<< endl;
            }
            
        } 
    else{
        cout << "Disk is not full!"<<endl;
    }       
}