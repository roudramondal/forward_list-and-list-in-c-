#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l = {10,2,5,20};
  list<int> l2 = {5, 15, 25};
  l.merge(l2);
  for (auto x : l)
  {
    cout << x << " ";
  }
    return 0;
}