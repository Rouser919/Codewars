int rgb(int r, int g, int b, char *output){
  int index;
  int x;
  for (index=5;index>=0;index--){
    x=0;
    if (index>=4){
      if (b>255) b=255;
      else if (b<0) b=0;
      x=b%16;
      b/=16;
    }
    else if (index>1 && index<4){
      if (g>255) g=255;
      else if (g<0) g=0;
      x=g%16;
      g/=16;
    }
    if (index<=1){
      if (r>255) r=255;
      else if (r<0) r=0;
      x=r%16;
        r/=16;  
    }
    switch (x){
      case (15):
        output[index]='F';
        break;
      case (14):
        output[index]='E';
        break;
      case (13):
        output[index]='D';
        break;
      case (12):
        output[index]='C';
        break;
      case (11):
        output[index]='B';
        break;
      case (10):
        output[index]='A';
        break;
      case (0):
        output[index]='0';
        break;
      case (1):
        output[index]='1';
        break;
      case (2):
        output[index]='2';
        break;
      case (3):
        output[index]='3';
        break;
      case (4):
        output[index]='4';
        break;
      case (5):
        output[index]='5';
        break;
      case (6):
        output[index]='6';
        break;
      case (7):
        output[index]='7';
        break;
      case (8):
        output[index]='8';
        break;
      case (9):
        output[index]='9';
        break;
      default:
        output[index]=x;
    }
  }
   return *output; 
}
