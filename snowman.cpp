#include "snowman.hpp"
#include <iostream>
#include <array>
#include <string>
#include <cstring>

namespace ariel{
    string snowman(long x){
        if (11111111 > x || x > 44444444) {
            throw invalid_argument("Illegal Input!");
        }
    char snowman[][8]= { 
        {' ',' ',' ',' ',' ',' ',' ','\n'},
        {' ',' ',' ',' ',' ',' ',' ','\n'},
        {' ','(',' ',' ',' ',')',' ','\n'},
        {' ','(',' ',' ',' ',')',' ','\n'},
        {' ','(',' ',' ',' ',')',' ','\0'}};

        int arr[8]; //allocating memory to array
        int temp = x;
        //insert digits by order
        for (int i = 7; i >= 0; i--){
            int temp = x %10;
            if (temp>4 || temp<1) throw invalid_argument("Illegal Input!");
            arr[i] = temp;
            x /= 10;
        }

       //hats
    char hat1_2[] = {' ','_','=','=','=','_',' ','\n'};
    char hat2[] = {' ',' ','_','_','_',' ',' ','\n'},hat2_2[] = {' ','.','.','.','.','.',' ','\n'};
    char hat3_2[] = {' ',' ','/','_','\\',' ',' ','\n'};
    char hat4[] = {' ',' ','_','_','_',' ',' ','\n'},hat4_2[] = {' ','(','_','*','_',')',' ','\n'};
    //torso
    char buttons[]={' ','(',' ',':',' ',')',' ','\n'},
     vest[]={' ','(',']',' ','[',')',' ','\n'},
     arms[]={' ','(','>',' ','<',')',' ','\n'},
     notroso[]={' ','(',' ',' ',' ',')',' ','\n'};
    //base
    char bottombuttons[]={' ','(',' ',':',' ',')',' ','\0'},
    feet[]={' ','(','"',' ','"',')',' ','\0'},
    flat[]={' ','(','_','_','_',')',' ','\0'},
    nolegs[]={' ','(',' ',' ',' ',')',' ','\0'};

    //setting the base
if(arr[7]==1){
    std::memcpy(snowman[4],bottombuttons,sizeof(bottombuttons));}
else if(arr[7]==2) {
    std::memcpy(snowman[4],feet,sizeof(feet));}
else if(arr[7]==3){
    std::memcpy(snowman[4],flat,sizeof(flat));}

    //setting the torso
if(arr[6]==1){
    std::memcpy(snowman[3],buttons,sizeof(buttons));}
else if(arr[6]==2) {
    std::memcpy(snowman[3],vest,sizeof(vest));}
else if (arr[6]==3){
    std::memcpy(snowman[3],arms,sizeof(arms));}
else {
    std::memcpy(snowman[3],notroso,sizeof(notroso));}

    //setting the hat
if(arr[0]==1)std::memcpy(snowman[1],hat1_2,sizeof(hat1_2));
else if(arr[0]==2) {
    std::memcpy(snowman[0],hat2,sizeof(hat2)),
    std::memcpy(snowman[1],hat2_2,sizeof(hat2_2));}
else if (arr[0]==3){
    snowman[0][3]='_';
    std::memcpy(snowman[1],hat3_2,sizeof(hat3_2));}
else {
    std::memcpy(snowman[0],hat4,sizeof(hat4)),
    std::memcpy(snowman[1],hat4_2,sizeof(hat4_2));}

//setting the nose
if (arr[1]==1) {
    snowman[2][3]=',';}
else if (arr[1]==2){
snowman[2][3]='.';
}else if(arr[1]==3){
snowman[2][3]='_';
};

//setting the left eye
if (arr[2]==1) {
    snowman[2][2]='.';}
else if (arr[2]==2){
snowman[2][2]='o';
}else if (arr[2]==3){
snowman[2][2]='O';
}else {
snowman[2][2]='-';
};

//setting the right eye
if (arr[3]==1) {
    snowman[2][4]='.';}
else if (arr[3]==2){
snowman[2][4]='o';
}else if (arr[3]==3){
snowman[2][4]='O';
}else {
snowman[2][4]='-';
};

//setting the left arm
if (arr[4]==1) {
    snowman[2][0]=' ';
    snowman[3][0]='<';
    }
else if (arr[4]==2){
snowman[2][0]='\\';
snowman[3][0]=' ';
}else if (arr[4]==3){
snowman[2][0]=' ';
snowman[3][0]='/';
}

//setting the right arm
if (arr[5]==1) {
snowman[2][6]=' ';
snowman[3][6]='>';
}
else if (arr[5]==2){
snowman[2][6]='/';
snowman[3][6]=' ';
}else if (arr[5]==3){
snowman[2][6]=' ';
snowman[3][6]='\\';
};

string s = snowman[0];

        return s;
    }
}