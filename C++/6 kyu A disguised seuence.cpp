class HiddenSeq
{
    public:
    static unsigned long long fcn(int n);
};

unsigned long long HiddenSeq::fcn(int n)
{
  typedef unsigned long long ull;
  ull u0 = 1;
  ull u1 = 2;
  ull u2 = 0;
  
  for (auto i = 0; i < n - 1; i++)
  {
    u2 = 6L * u0 / (5L * u0 - u1) * u1;
    u0 = u1;
    u1 = u2;
  }
  return u2;
}
