bool is_isogram(std::string str) {
  int i=0;
  int j;
  while (i<str.length()){
    for(j=i+1;j<str.length();j++){
      if ((tolower(str[i]))==(tolower(str[j]))){
        return false;
      }
    }
    i++;
  }
  return true;
}
