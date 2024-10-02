#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l = { 10, 20, 30, 40, 20, 40};
  l.unique();
  l.sort();
  l.reverse();
  for(auto x : l)
  {
    cout << x << " ";
  }

  return 0;
}