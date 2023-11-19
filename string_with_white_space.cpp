#include <iostream>
#include <string>
using namespace std;

int main()
{

      int a;
      char name[100];

      cin >> a;
      getchar(); // to avoid space and enter
      cin.getline(name, 100);

      cout << a << endl
           << name;

      return 0;
}