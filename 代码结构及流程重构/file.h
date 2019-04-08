#pragma once


FILE* Fopen(const char * path, const char * mode); // 文件打开函数
int Fclose(FILE* f);            // 文件关闭函数

char Fgetc(FILE *f);            // 从文件中读取单个字符函数
void Fputc(FILE *f, char buff); // 往文件写入单个字符函数

long Flength(FILE *f);          //计算文件大小函数

void Fputc_space(FILE*  f);     // 往文件写入单个空格函数
void Fputc_n(FILE*  f);         // 往文件写入单个换行函数
void Fputc_nt(FILE*  f);        // 往文件写入换行加空格函数