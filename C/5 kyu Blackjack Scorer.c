#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
int charToInt( char c )
{
    if( c >= 48 && c <= 57 )
        return (c - 48);
    else
        return 0;
}
int score_hand(size_t n, const char cards[]) {
  int tmp=0;// zmienna pomocnicza okreslajaca ilosc asów
  unsigned int i=0;
  int score=0; // i-index w petli score-liczba punktow;
  while (i<n){
    if (cards[i]>=48 && cards[i]<=57){
      score+=charToInt(cards[i]);
      printf("%d %c\n",score,cards[i]);
      i++;
      continue;
    }
    switch(cards[i]){
      case 'J':
        score+=10;
        break;
      case 'Q':
        score+=10;
        break;
      case 'K':
        score+=10;
        break;
      case 'A':
        tmp++;
        break;
      case 'T':
        score+=10;
        break;
    }
    i++;
    printf("%d \n",score);
  }
  while (tmp>0){
    if (score>=10 && score <21 && tmp>1){
    score++;
    tmp--;
    continue;
    }
    if(score+11>21){
    score++;
    tmp--;
    continue;
    }
    if(abs(score+1-21)>abs(score+11-21)){
      score+=11;
      tmp--;
    } 
    else if (abs(score+1-21)<=abs(score+11-21)){
      score+=1;
      tmp--;
    }     
  }
  return score;
}
