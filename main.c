#include"func.h"
char* buff;
char* line;
int poin;
int WinMain(){
    int key=0;
    char* incode;
    //debuge or
        int keypro=0,code=0,keyend=0,wall=0,size[2];
        int de;
    //
    init();
    InitWindow(800,800,"WinMain");
    while(!WindowShouldClose()){
        BeginDrawing();
        de=with(poin);
        if(!line[poin*2])code=*(incode=input(poin));
        keyend=getsp(incode,1)-1;
        key=GetKeyPressed();
        if (key)keypro=key;
        if (key)
        {
            if (key == 263) { //333,enter257,335
                if(poin)poin--;
                goto PLmove;
            }
            if (key == 262){
                poin++;
                goto PLmove;
            }
            //no walls anymore.
            wall=with(poin);
            if (key == 32){
                pause(incode,keyend,-1);
                pause(line,(++poin)*2,2);
                pause(buff,getsp(buff,pastzero(poin)),1);
                line[wall+1]++;
                goto spend;
            }
            if (code=='&'){
                pause(incode,keyend,-1);
                char src[4]={2,1,0,0};
                codechange(line+(poin++*2),2,src,4);
                goto spend;
            }
            if(code=='['){
                pause(incode,keyend,-1);
                char src[4]={3,1,0,0};
                codechange(line+(poin++*2),2,src,4);
                goto spend;
            }
            if(line[wall]==1&&wall/2-poin<=1){
                
            }else{
                if(!(code>=48&&code<=57||code==34||code==39||code<33)&&1){//!find(inputt)
                    char src[4]={1,1,0,0};
                    codechange(line+(poin++*2),2,src,4);
                    goto spend;
                }
            }
            if(wall<0){
                if(key==258){
                    char src[14]={4,1,0,0,5,1,0,0,6,0,5,1,0,0};
                    //char str[2][7];
                    // strcpy(str[0],"hander");
                    // strcpy(str[1],"main");
                    adden(buff+(size[0]=getsp(buff,pastzero(poin+1))),"hander",max-size[0]);
                    adden(buff+(size[1]=getsp(buff,pastzero(poin+2))),"main",max-size[1]);
                    codechange(line+(poin++*2),2,src,14);
                    goto spend;
                }
            }


        }
        spend:;
        PLmove:;





        debug(line,buff,poin);
        DrawText(TextFormat("input:%d,end:%d,",code,keyend),100,100,20,WHITE);
        DrawText(TextFormat("key:%d",keypro),100,120,20,WHITE);
        DrawText(TextFormat("wall:%d",wall),100,140,20,WHITE);
        DrawText(TextFormat("poin:%d",poin),100,160,20,WHITE);
        DrawText(TextFormat("de:%d",de),100,180,20,WHITE);
        DrawText(TextFormat("size0:%d,size1:%d",size[0],size[1]),100,200,20,WHITE);
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}   