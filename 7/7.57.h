class Account
{
 public:
  static constexpr double tax = 0.14;

  Account(double s = 0.0, unsigned n = 0, double l = 0.0):
      sum(s), numberOfOperations(n), lastOperation(l) {}
  
 private:
  double sum;
  unsigned numberOfOperations;
  double lastOperation;
};
