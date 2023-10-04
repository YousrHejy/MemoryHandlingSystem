#include"logs.hpp"

void writeLogs(int event){
    ofstream logfile;
    logfile.open("/home/islam/Desktop/fork/MemoryHandlingSystem/log/service.log", std::ios::app);// open log file in append mode
    if (logfile.is_open()) {
        // writes the event in the log file
        switch(event)
        {
        case AppStart:
            logfile << "[INFO] Application started." << endl; 
            break;
        
        case FileDeleted:
                logfile << "[INFO] File deleted." << endl;
            break;
        case DeleteError:
                logfile << "[ERROR] Error deleting file.." << endl;
            break;   
        case AccessSuccess:
                logfile << "[INFO] File Access succeeded." << endl;
            break;
        case AccessDenied:
                logfile << "[ERROR] File Access Denied." << endl;
            break;    
        default:
            break;
    }   
        logfile.close();
    } else {
        cerr << "Failed to open the log file." << endl;
    }
    
}
