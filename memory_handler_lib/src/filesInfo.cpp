#include "filesInfo.hpp"
FilesInfo::FilesInfo(){

}
FilesInfo::FilesInfo(const string & directoryPath ) {
   getFiles(directoryPath);
}

void FilesInfo::getFiles( const string  & folderPath){
    try {
        if(is_directory(folderPath)){
            for (const auto& entry : directory_iterator(folderPath)) {
                const  string &  file_path = entry.path().string();
               this->files.push_back(file_path);
            }
            writeLogs(AccessSuccess);
            cout << "Access success"<<"\n";
            
        }else{
            throw 505;
        }
    }
    catch (...){
        writeLogs(AccessDenied);
        cout << "Access denied"<<"\n";
        
    }
}

map<string ,uint64_t > FilesInfo:: getDiskUsage(){
    try {
      if(this->files.size()>0){
        for(const auto &  file :this->files){
           this->Info[file]=file_size(file);
        }
      }else{
        cout << "Empty "<<"\n";
      }
        
    } catch(filesystem_error& ex) {
        std::cout << ex.what() << '\n';
    }
    return  this->Info;
}

map<string, time_t> FilesInfo::getFilesTime(){
    try {
      if(this->files.size()>0){
        for(const auto &  filePath :this->files){
            file_time_type modificationTime = filesystem::last_write_time(filePath);
            system_clock::time_point modificationTimePoint = time_point_cast<system_clock::duration>(modificationTime 
             - file_time_type::clock::now() + system_clock::now());
            time_t modificationTimeT = system_clock::to_time_t(modificationTimePoint);
            this->filesTime[filePath]=modificationTimeT ;
        }
      }else{
        cout << "Empty "<<"\n";
      }
        
    } catch(filesystem_error& ex) {
        std::cout << ex.what() << '\n';
    }
    return  this->filesTime;
}



