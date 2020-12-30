#include <stdio.h>
#include <stdlib.h>

int score(const int dice[5]) {
  int i=0,i_k=0,number_dice,count_dice=0,tmp,tmp_count,sum=0;
  while(i<5){
    for(i_k=0,tmp=0;i_k<5;i_k++){
      if(dice[i]==dice[i_k]){
        tmp++;
        tmp_count=dice[i];
      }
    }
    if(tmp>2){
      number_dice=tmp;
      count_dice=tmp_count;
      break;
    }
    i++;
  }
  if(number_dice>2){
    if(count_dice==1){
      sum+=1000;
      number_dice-=3;
    }
    else if(count_dice>1 && count_dice<7){
        sum=sum+count_dice*100;
        number_dice-=3;
    }
  }
  while(number_dice>0 && (count_dice==1 || count_dice==5)){
    if(count_dice==1) sum+=100;
    else if(count_dice==5) sum+=50;
    number_dice--;
  }
  i=0;
  while (i<5){
    if(dice[i]!=count_dice && (dice[i]==1 || dice[i]==5)){
      if(dice[i]==1) sum+=100;
      else if(dice[i]==5) sum+=50;
    }
    i++;
  }
  return sum;
}
