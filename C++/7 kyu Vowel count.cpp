#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0,i=0;
  for(i=0;i<inputStr.size();i++){
    if(inputStr[i]=='a' || inputStr[i]=='e' || inputStr[i]=='i' || inputStr[i]=='o' || inputStr[i]=='u') num_vowels++;
    }
  return num_vowels;
}
