#include <stdio.h>

#define name_to_str(name_31415926)  (#name_31415926)

// �ļ��򿪺���
FILE* Fopen(const char * path, const char * mode) {
    FILE*  f= NULL;
    f = fopen(path,mode);
    if (f == NULL) {
        printf("���ļ� %s ʧ�ܣ�", path);
    }
    return f;
} 
//�ļ��رպ���
int Fclose(FILE* f) {
    int ret = 0;
    ret = fclose(f);
    if (ret != 0) {
        printf("�ر��ļ�ʧ�ܣ�");
    }
    return ret;
}

// ���ļ��ж�ȡ�����ַ�����
char Fgetc(FILE *f) {
    char buff = '\0';
    buff = fgetc(f);
    return buff;
}
// ���ļ�д�뵥���ַ�����
void Fputc(FILE *f, char buff) {
    fputc(buff, f);  
}

//�����ļ���С����
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


// ���ļ�д�뵥���ո���
void Fputc_space(FILE*  f){
    fputc(32,f);
}
// ���ļ�д�뵥�����к���
void Fputc_n(FILE*  f) {
    fputc('\n',f);
}
// ���ļ�д�뻻�м��Ʊ������
void Fputc_nt(FILE*  f) {
    fputc('\n',f);
    fputc('\t',f);
}
