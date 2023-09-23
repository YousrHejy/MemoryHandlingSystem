#include "headers.hpp"
int main() {
    //FilesInfo file1("/home/sama/Templates/");
    FilesInfo file1;
    file1.getFiles("/home/sama/Music/");
    map <string ,uint64_t > filesInfo=file1.getDiskUsage();
    map<string,uint64_t>::iterator itr;
    for(itr=filesInfo.begin(); itr != filesInfo.end(); ++itr)
    {
        cout << "  " << itr->first << ", " << itr->second << endl;
        cout << endl;
    }
    return 0;
}