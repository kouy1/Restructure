#include <stdio.h>

#define name_to_str(name_31415926)  (#name_31415926)

// 文件打开函数
FILE* Fopen(const char * path, const char * mode) {
    FILE*  f= NULL;
    f = fopen(path,mode);
    if (f == NULL) {
        printf("打开文件 %s 失败！", path);
    }
    return f;
} 
//文件关闭函数
int Fclose(FILE* f) {
    int ret = 0;
    ret = fclose(f);
    if (ret != 0) {
        printf("关闭文件失败！");
    }
    return ret;
}

// 从文件中读取单个字符函数
char Fgetc(FILE *f) {
    char buff = '\0';
    buff = fgetc(f);
    return buff;
}
// 往文件写入单个字符函数
void Fputc(FILE *f, char buff) {
    fputc(buff, f);  
}

//计算文件大小函数
long Flength(FILE *f) {
    long total = 0;
    long length = 0;
    fseek(f, 0, 1);
    total = ftell(f);
    fseek(f, 0, 2);
    length = ftell(f);
    fseek(f, total, 0);
    return length;
}


// 往文件写入单个空格函数
void Fputc_space(FILE*  f){
    fputc(32,f);
}
// 往文件写入单个换行函数
void Fputc_n(FILE*  f) {
    fputc('\n',f);
}
// 往文件写入换行加制表符函数
void Fputc_nt(FILE*  f) {
    fputc('\n',f);
    fputc('\t',f);
}
