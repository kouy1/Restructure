#pragma once


FILE* Fopen(const char * path, const char * mode); // �ļ��򿪺���
int Fclose(FILE* f);            // �ļ��رպ���

char Fgetc(FILE *f);            // ���ļ��ж�ȡ�����ַ�����
void Fputc(FILE *f, char buff); // ���ļ�д�뵥���ַ�����

long Flength(FILE *f);          //�����ļ���С����

void Fputc_space(FILE*  f);     // ���ļ�д�뵥���ո���
void Fputc_n(FILE*  f);         // ���ļ�д�뵥�����к���
void Fputc_nt(FILE*  f);        // ���ļ�д�뻻�мӿո���