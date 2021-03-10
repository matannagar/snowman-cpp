#include "snowman.hpp" //import the interface
#include <iostream> //input output stream , string
#include <cstring>

using namespace std;
#define min 11111111
#define max 44444444
namespace ariel{

char* setHat(int x, char snowman[][8]){
const char hat1_2[] = {' ','_','=','=','=','_',' ','\n'};
const char hat2[] = {' ',' ','_','_','_',' ',' ','\n'},hat2_2[] = {' ','.','.','.','.','.',' ','\n'};
const char hat3_2[] = {' ',' ','/','_','\\',' ',' ','\n'};
const char hat4[] = {' ',' ','_','_','_',' ',' ','\n'},hat4_2[] = {' ','(','_','*','_',')',' ','\n'};

if(x==1)std::memcpy(snowman[1],hat1_2,sizeof(hat1_2));
else if(x==2) {
    std::memcpy(snowman[0],hat2,sizeof(hat2)),
    std::memcpy(snowman[1],hat2_2,sizeof(hat2_2));}
else if (x==3){
    snowman[0][3]='_';
    std::memcpy(snowman[1],hat3_2,sizeof(hat3_2));}
else {
    std::memcpy(snowman[0],hat4,sizeof(hat4)),
    std::memcpy(snowman[1],hat4_2,sizeof(hat4_2));
    }

    return snowman[0];
}
char* setTorso(int x, char snowman[][8]){
const char buttons[]={' ','(',' ',':',' ',')',' ','\n'},
    vest[]={' ','(',']',' ','[',')',' ','\n'},
    arms[]={' ','(','>',' ','<',')',' ','\n'},
    notroso[]={' ','(',' ',' ',' ',')',' ','\n'};
if(x==1){
    std::memcpy(snowman[3],buttons,sizeof(buttons));}
else if(x==2) {
    std::memcpy(snowman[3],vest,sizeof(vest));}
else if (x==3){
    std::memcpy(snowman[3],arms,sizeof(arms));}
else {std::memcpy(snowman[3],notroso,sizeof(notroso));}

return snowman[0];
}
char* setBase(int x, char snowman[][8]){
const char bottombuttons[]={' ','(',' ',':',' ',')',' ','\0'},
feet[]={' ','(','"',' ','"',')',' ','\0'},
flat[]={' ','(','_','_','_',')',' ','\0'},
nolegs[]={' ','(',' ',' ',' ',')',' ','\0'};

if(x==1){
   std::memcpy(snowman[4],bottombuttons,sizeof(bottombuttons));}
else if(x==2) {
    std::memcpy(snowman[4],feet,sizeof(feet));}
else if(x==3){
    std::memcpy(snowman[4],flat,sizeof(flat));}

return snowman[0];
}
char* setLEye(int x, char snowman[][8]){
//setting the left eye
if (x==1) {snowman[2][2]='.';}
else if (x==2){snowman[2][2]='o';}
else if (x==3){snowman[2][2]='O';}
else {snowman[2][2]='-';};

return snowman[0];
}
char* setREye(int x, char snowman[][8]){
//setting the right eye
if (x==1) {snowman[2][4]='.';}
else if (x==2){snowman[2][4]='o';}
else if (x==3){snowman[2][4]='O';}
else {snowman[2][4]='-';};

return snowman[0];
}
char* setNose(int x, char snowman[][8]){
//setting the nose
if (x==1) {snowman[2][3]=',';}
else if (x==2){snowman[2][3]='.';}
else if(x==3){snowman[2][3]='_';};

return snowman[0];
}
char* setLArm(int x, char snowman[][8]){
//setting the left arm
if (x==1) {snowman[2][0]=' ',snowman[3][0]='<';}
else if (x==2){snowman[2][0]='\\',snowman[3][0]=' ';}
else if (x==3){snowman[2][0]=' ',snowman[3][0]='/';}

    return snowman[0];
}
char* setRArm(int x, char snowman[][8]){
//setting the right arm
if (x==1) {snowman[2][6]=' ',snowman[3][6]='>';}
else if (x==2){snowman[2][6]='/',snowman[3][6]=' ';}
else if (x==3){snowman[2][6]=' ',snowman[3][6]='\\';}

    return snowman[0];
}
string snowman(long x){ 
if (min > x || x > max) {//first check for input correctness
    throw invalid_argument("Illegal Input!"); }

int arr[8]; int temp = x;
for (int i = 7; i >= 0; i--){ //insert digits by order && validating correction of digits
    int temp = x %10;
    if (temp>4 || temp<1)
        throw invalid_argument("Illegal Input!");
    arr[i] = temp;
    x /= 10;
    }
char snowman[][8]= { {' ',' ',' ',' ',' ',' ',' ','\n'},{' ',' ',' ',' ',' ',' ',' ','\n'},
    {' ','(',' ',' ',' ',')',' ','\n'},{' ','(',' ',' ',' ',')',' ','\n'},
    {' ','(',' ',' ',' ',')',' ','\0'} };
//setting the entire snowman
setHat(arr[0],snowman); setTorso(arr[6],snowman); setBase(arr[7],snowman);
setNose(arr[1],snowman); setLEye(arr[2],snowman); setREye(arr[3],snowman);
setLArm(arr[4],snowman); setRArm(arr[5],snowman);

string s = snowman[0];
        return s;
    }
}