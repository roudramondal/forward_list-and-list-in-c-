#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l;
  l.push_back(10);
  l.push_back(20);
  l.push_front(5);
  for(auto x : l)
  {
    cout << x << " ";
  }
  return 0;
}