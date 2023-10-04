#ifndef MEMORY_HANDLER_LIB_LOGS_H
#define MEMORY_HANDLER_LIB_LOGS_H
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>
using namespace std;

enum logExpressions{AppStart = 0 , FileDeleted = 1,DeleteError = 3,
                     AccessSuccess = 4, AccessDenied = 5, ConfigSuccsess = 6,
                      ConfigFailed = 7 }; //each expression represents system event

void writeLogs(int event);

#endif //MEMORY_HANDLER_LIB_LOGS_H
