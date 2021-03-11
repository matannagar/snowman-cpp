#include "snowman.hpp" //import the interface
#include <iostream>    //input output stream , string
#include <cstring>
#include <array>
using namespace std;

namespace ariel
{
   constexpr int min = 11111111;constexpr int max = 44444444;constexpr int bttm_r_arm = 30;
   constexpr int top_r_arm = 22;constexpr int bttm_l_arm=24;constexpr int top_l_arm =16;
   constexpr int max_digits =8;constexpr int min_digit =1;constexpr int max_digit =4;
   constexpr int hat =0;constexpr int nose =1;constexpr int left_eye =2;constexpr int right_eye =3;
   constexpr int left_hand =4;constexpr int right_hand =5;constexpr int torso =6;constexpr int legs =7;
   constexpr int ten =10;

   string *setHat(int i, string *snowman){
      array<string, 4> hats = {"       \n _===_ \n", "  ___  \n ..... \n", "   _   \n  /_\\  \n", "  ___  \n (_*_) \n"};
      (*snowman) = hats.at(i - 1);
      return snowman;
   }
   string *setLEye(int i, string *snowman){
      array<string, 4> eyes = {".", "o", "O", "-"};
      (*snowman) += " (" + eyes.at(i - 1);
      return snowman;
   }
   string *setNose(int i, string *snowman){
      array<string, 4> noses = {",", ".", "_", " "};
      (*snowman) += noses.at(i - 1);
      return snowman;
   }
   string *setREye(int i, string *snowman){
      array<string, 4> eyes = {".", "o", "O", "-"};
      (*snowman) += eyes.at(i - 1) + ") \n";
      return snowman;
   }
   string *setTorso(int i, string *snowman){
      array<string, 4> torsos = {" : ", "] [", "> <", "   "};
      (*snowman) += " (" + torsos.at(i - 1) + ") \n";
      return snowman;
   }
   string *setBase(int i, string *snowman){
      array<string, 4> base = {" : ", "\" \"", "___", "   "};
      (*snowman) += " (" + base.at(i - 1) + ") ";
      return snowman;
   }
   string *setLArm(int i, string *snowman){
      array<char, 3> left_arms = {'<', '\\', '/'};

      if (i == 1 || i == 3){
         (*snowman).at(bttm_l_arm) = left_arms.at(i - 1);}
      if (i == 2){
         (*snowman).at(top_l_arm) = left_arms.at(i - 1);}
      return snowman;
   }
   string *setRArm(int i, string *snowman){
      array<char, 3> right_arms{'>', '/', '\\'};
      if (i == 1 || i == 3){
         (*snowman).at(bttm_r_arm) = right_arms.at(i - 1);}
      if (i == 2){
         (*snowman).at(top_r_arm) = right_arms.at(i - 1);}
      return snowman;
   }
   string snowman(long x){
      if (min > x || x > max) { 
         throw invalid_argument("Illegal Input!");}

      array <int,max_digits> arr={0,0,0,0,0,0,0,0};

      for (int i = max_digits-1; i >= 0; i--){ 
         long temp = x % ten;
         if (temp > max_digit || temp < min_digit){
            throw invalid_argument("Illegal Input!");}
         arr.at(i) = temp;
         x /= ten;
      }
      string ans;
      setHat(arr.at(hat), &ans);
      setLEye(arr.at(left_eye), &ans);
      setNose(arr.at(nose), &ans);
      setREye(arr.at(right_eye), &ans);
      setTorso(arr.at(torso), &ans);
      setBase(arr.at(legs), &ans);
      setLArm(arr.at(left_hand), &ans);
      setRArm(arr.at(right_hand), &ans);

      return ans;
   }
}