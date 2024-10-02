#include <bits/stdc++.h>
using namespace std;
int main()
{
  forward_list<int> fl1 = {1, 7, 6, 9, 12};
  forward_list<int> fl2{2, 3, 8, 5, 10};
  fl1.splice_after(fl1.begin(), fl2);
  for(int &c : fl1)
  {
    cout << c << " ";
  }

  return 0;
}