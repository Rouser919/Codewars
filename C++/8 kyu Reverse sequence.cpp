std::vector<int> reverseSeq(int n) {
  std::vector<int> reve;
  while (n>0){
    reve.push_back(n);
    n--;
  }
  return reve;
}
