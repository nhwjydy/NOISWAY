#ifndef FUNC_H
#define FUNC_H
#include<string.h>
#include<stdlib.h>
#include<raylib.h>
#define max 225
extern char* buff;
extern char* line;
extern int poin;
void init(void);
int getsp(char* buff,int timece);
int pastzero(int poin);
char* input(int poin);
void debug(char* line,char* buff,int poin);
int with(int poin);
void pause(char* buff,int push,int size);
void codechange(char* dest,int destsize,char* src,int srcsize);
void adden(char* drection,char *str,int size);
#endif
