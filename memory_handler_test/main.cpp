#include "headers.hpp"

void LoadSystemConfiration(const path fpath,int *max_storage, int *max_time){
  std::ifstream config_file;
  config_file.open(fpath);
  if (config_file){
    string line;
    while(getline(config_file, line)){
      if(line[0] == '#' || line.empty())
          continue;
      istringstream iss(line);
      string parameter_name;
      int parameter_value;
      iss >> parameter_name >> parameter_value;
      cout << parameter_name << endl;
      cout << parameter_value << endl;
      if(parameter_name == "MAX_STORAGE"){
        *max_storage = parameter_value;
      }
      else{
        *max_time = parameter_value;
      }
    }
    config_file.close();
  }
   else {
    cout << "Error \n";
    }
//   cout << "Max Storage" << *max_storage << endl;
//   cout << "Max time" << *max_time << endl;
  
}


int main() {
    int maxStorage = 0;
    int maxFileTime = 0;
    path configPath =  "/home/yousr/c++projects/MemoryHandlingSystem/configurations/system.config";
    path filesPath = "/home/yousr/Documents/";
    //FilesInfo file1("/home/sama/Templates/");
    FilesInfo file1;
    // file1.getFiles("/home/sama/Music/");

    LoadSystemConfiration(configPath, &maxStorage, &maxFileTime);
    file1.getFiles(filesPath);
    map <string ,uint64_t> filesInfo = file1.getDiskUsage();
    map <string,uint64_t>::iterator itr;
    map <string, time_t> filesTimeMap  = file1.getFilesTime() ;


    for(itr=filesInfo.begin(); itr != filesInfo.end(); ++itr){
        cout << "  " << itr->first << ", " << itr->second << endl;
        cout << endl;
    }
    for (const auto& file : filesTimeMap){
        cout << "  " << file.first << ", " << file.second << endl;
        cout << endl;
    }

    return 0;
}