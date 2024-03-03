#include"func.h"
void init(void){
	buff = MemAlloc(225);
	line = MemAlloc(225);
    poin = 0;
    // findlist = MemAlloc(225);
}
int getsp(char* buff,int timece){
    int i=0;
    if(timece){
        int cont=0;
        while(1){
            if(!buff[i++]){
                if(timece==(++cont)){
                    return i;
                }
            }
        }
    }else{
        return 0;
    }
}
int pastzero(int poin){
    int cont=0;
    for(int i=0;i<poin;i++){
        if(line[i*2]==0){
            cont++;
        }
    }
    return cont;
}
char* input(int poin){
    int bufD=getsp(buff,pastzero(poin));
    char* buf=buff+bufD;
    int key,i=getsp(buf,1)-1;
    while((key=GetCharPressed())){
        if(key=='`'){
            if(i){
                memmove(buf+i-1,buf+i,max-bufD-i);
                i--;
            }
        }
        else{
            memmove(buf+i+1,buf+i,max-bufD-i-1);
            buf[i]=key;
            i++;
        }
    }
    return buf;
}
void debug(char* line,char* buff,int poin){
    char textout[225];
    for(int i=0;i<225;i++){
        if(buff[i])textout[i]=buff[i];
        else textout[i]='#';
    }
    DrawText(TextFormat("%s",textout),0,0,20,WHITE);
    for(int i=0;i<=40;i++){//print list
        if(poin==i){
            DrawText(TextFormat(">%d,%d,%s",line[i*2],line[(i*2)+1],buff+getsp(buff,pastzero(i))),0,(i*20)+20,20,WHITE);
        }else{
            DrawText(TextFormat("#%d,%d,%s",line[i*2],line[(i*2)+1],buff+getsp(buff,pastzero(i))),0,(i*20)+20,20,WHITE);
        }
    }
}
int with(int poin){
    char v;
    int i=0,up,rt;
    while(i<=poin+1){
        if ((v=line[(rt=((poin-i)*2))+1]))
        {
            
            if ((i-up-v)<=0)
            {
                return rt;
            }
            up=i-2;
        }
        i++;
    }
    return rt;
}
void pause(char* buff,int push,int size){
    memmove(buff+push+size,buff+push,max-push-size);
    for (int i = 0; i < size; ++i)
    {
        buff[push+i]=0;
    }
}
void codechange(char* dest,int destsize,char* src,int srcsize){
    memmove(dest+srcsize,dest+destsize,max-destsize-srcsize);
    memmove(dest,src,srcsize);
}
void adden(char* drection,char *str,int size){
    int cont=0;
    while(str[cont++]&&cont<10);
    memmove(drection+cont,drection,size-cont);
    memmove(drection,str,cont);
}
// char find(char* buf){
//     int listend;
//     for (int i = 0;!getsp(findlist,i); ++i)
//     {
//         listend=i;
//     }
//     for (int i = 0; i < listend; ++i)
//     {
//         if(!strcmp(buff+getsp(findlist,i),buf)){
//             return 1;
//         }
//     }
//     return 0;
// }
// int with(int poin){
//     char v;
//     int i=0,up,rt;
//     while(i<=poin+1){
//         if ((v=line[(rt=((poin-i)*2))+1]))
//         {
            
//             if ((i-up-v)<=0)
//             {
//                 return rt;
//             }
//             up=i-2;
//         }
//         i++;
//     }
//     return rt;
// }
// // bool inxe(char* inputt,int poin,int wall){
// //     return ((*inputt>='A'&&*inputt<='Z')||(*inputt>='a'&&*inputt<='z'))&&(!find(inputt))&&wall<0;
// // }
// void pause(char* buff,int push,int size){
//     memmove(buff+push+size,buff+push,max-push-size);
//     for (int i = 0; i < size; ++i)
//     {
//         buff[push+i]=0;
//     }
// }