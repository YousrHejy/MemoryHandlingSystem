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