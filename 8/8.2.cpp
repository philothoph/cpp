#include <iostream>

using std::istream;

istream& print(istream& is)
{
  char ch;
  while (is >> ch)
  {
    std::cout << ch;
  }
  std::cout << std::endl;
  is.clear();
  return is;
}

int main()
{
  print(std::cin);
  std::cout << std::cin.rdstate() << std::endl;
  return 0;
}
