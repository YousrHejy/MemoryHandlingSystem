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
            cout << "Access success"<<"\n";
        }else{
            throw 505;
        }
    }
    catch (...){
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

path filePath = "/home/yousr/Tasks/BackendTasks/c++Project/trails/timefile.txt";
    file_time_type modificationTime = std::filesystem::last_write_time(filePath);
    // Convert file_time_type to std::chrono::system_clock::time_point
    system_clock::time_point modificationTimePoint = time_point_cast<system_clock::duration>(modificationTime 
    - file_time_type::clock::now() + system_clock::now());
    // Convert std::chrono::system_clock::time_point to std::string
    time_t modificationTimeT = system_clock::to_time_t(modificationTimePoint);

map<string, time_t> FilesInfo::getFilesTime(){
    try {
      if(this->files.size()>0){
        for(const auto &  filePath :this->files){
            file_time_type modificationTime = filesystem::last_write_time(filePath);
            system_clock::time_point modificationTimePoint = time_point_cast<system_clock::duration>(modificationTime 
             - file_time_type::clock::now() + system_clock::now());
            time_t modificationTimeT = system_clock::to_time_t(modificationTimePoint);
            
            // string modificationTimeString = ctime(&modificationTimeT);
            // istringstream iss(modificationTimeString);
            // vector<string> dateWords;
            // // Splitting the string on spaces
            // std::string word;
            // while (iss >> word) {
            //     dateWords.push_back(word);
            // }
            // int timeOfFile = dateWords[3];
        }
      }else{
        cout << "Empty "<<"\n";
      }
        
    } catch(filesystem_error& ex) {
        std::cout << ex.what() << '\n';
    }
    return  this->filesTime;
}



