
/*
DECLARE AN ENUMERSTION OF BOOLEAN AS FOLLOWS
enum BOOLEAN {T=5,F=-5}BOOL;
DECLARE A 1 DIMENSIONAL ARRAY WITH THE FOLLOWING VALUES IN IT AS FOLLOWS
int numbers[] ={-9,8,5,8,14,109,-981}
USING THE DECLARED ENUMERATION WRITE A PROGRAME THAT WILL SEARCH FOR
14 IF 14 IS FOUND, TELL THE USER 14 IS FOUND OTHERWISE TELL THE
USER 14 WAS NOT FOUND.
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <afxres.h>
#include <fstream>
#include <sstream>
using namespace std;
//#include <Crispen.h>
//#include "sqlite/sqlite3.h"
#include <vector>
enum booleanVariable {T,F};
int numbers[] ={-9,8,5,8,14,109,-981};
int main(){
   cout<<"Enter the integer that you are looking for in an array: "<<endl;
   int choice;
   cout<<"Choice: \t";
   cin>>choice;
   booleanVariable found;
   int maximum =sizeof(numbers)/sizeof(numbers[0]);

   for(int i=0;i<maximum;i++){
    if(numbers[i]==choice){
        found =T;
        goto label;
    }else{
        found = F;
        continue;
    }
   }
   label:
   switch(found){
      case 0:
         cout<<"The number was found"<<endl;
         break;
      default:
         cout<<"The number was not found"<<endl;
         break;
   }
   return 0;
}
