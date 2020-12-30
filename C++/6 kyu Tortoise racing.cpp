#include<iostream>
#include<vector>
using namespace std;

class Tortoise
{
public:
    static vector<int> race(int s1, int s2, int l){
     if(s1>=s2) return {-1,-1,-1};
     int hr=0,sec=0,min=0;
     double time=(double) l/(s2-s1);     
      sec=3600*time;
      while(sec>=60){
        sec=sec-60;
        min++;
      }
      while(min>=60){
        min=min-60;
        hr++;
      }   
   return {hr,min,sec};
}
};
