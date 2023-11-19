#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

      int a, b, c, d;
      cin >> a >> b >> c >> d;

      cout << max(a, b) << endl;

      cout << max({a, b, c, d}); // For multiple values

      return 0;
}