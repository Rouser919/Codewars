#include <string>
using namespace std;
string sliceString(string str){
  int size = str.size();
  if (size > 2) {
    str.erase(0, 1);
    str.erase(size - 2, 1);
  }

  return str;
}
