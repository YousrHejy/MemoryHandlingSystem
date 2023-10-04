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
    writeLogs(ConfigSuccsess);
    config_file.close();
  }
   else {
    writeLogs(ConfigFailed);
    cout << "Error \n";
    }
//   cout << "Max Storage" << *max_storage << endl;
//   cout << "Max time" << *max_time << endl;
  
}
int main() {
  //const int SLEEP_INTERVAL = 5;
   // Enter daemon loop
  // while(1)
   //{
      //time and config
      path filesPath = "/home/islam/Desktop/folder1";
      int maxStorage = 0;
      int maxFileTime = 0;
      vector <string> filesToDelete;
      path configPath =  "/home/islam/Desktop/fork/MemoryHandlingSystem/configurations/system.config";
      LoadSystemConfiration(configPath, &maxStorage, &maxFileTime);
      PurgingService serv;
      serv.purgeDataFiles(maxStorage,maxFileTime,filesPath);
     // sleep(SLEEP_INTERVAL);
 //  }
 // exit(EXIT_SUCCESS);
 return 0;
}
