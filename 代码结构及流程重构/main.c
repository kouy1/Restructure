#include <stdio.h>
#include <windows.h>
#include "file.h"
#include "format.h"

#define SOURCE_FILE_ADDR "D:\\test\\1.c"
#define TARGET_FILE_ADDR "D:\\test\\2.c"
#define SOURCE_FILE_OPENMODE "r+"
#define TARGET_FILE_OPENMODE "w+"

int main() {
    FILE*  souece_file = NULL;
    FILE*  target_file = NULL;
    souece_file = Fopen(SOURCE_FILE_ADDR, SOURCE_FILE_OPENMODE);
    target_file = Fopen(TARGET_FILE_ADDR, TARGET_FILE_OPENMODE);
    
    
    brace(souece_file, target_file);
    
    //Fprintf_space(target_file);
    Fclose(souece_file);
    Fclose(target_file);
    //system("pause");
    return 0;
}