#include <vector>
using namespace std;

int min(vector<int> list){
  int tmp_min=list[0],tmp_ind=0;
  int i=0;
  while(i<list.size()){
    if(tmp_min>list[i]){
      tmp_ind=i;
      tmp_min=list[i];
    }
    i++;
  }
    
    return list[tmp_ind];
}

int max(vector<int> list){
  int tmp_max=list[0],tmp_ind=0;
  int i=0;
  while(i<list.size()){
    if(tmp_max<list[i]){
      tmp_ind=i;
      tmp_max=list[i];
    }
    i++;
  }
    
    return list[tmp_ind];
}
