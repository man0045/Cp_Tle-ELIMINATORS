#include <iostream>
#include <string>
using namespace std;

int main()
{
 int t;
 cin >> t;

 while (t--)
 {
  int k;
  cin >> k;

  string st;
  cin >> st;

  int n = st.size();
  int x = 0;
  bool flag = true;

  for (int i = 0; i < n; i++)
  {
   if (st[i] == '.')
    x++;

   if (i > 0 && i < n - 1)
   {
    if (st[i - 1] == '.' && st[i] == '.' && st[i + 1] == '.')
    {
     cout << 2 << endl;
     flag = false;
     break;
    }
   }
  }

  if (flag)
  {
   cout << x << endl;
  }
 }

 return 0;
}
