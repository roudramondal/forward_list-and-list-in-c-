#include<bits/stdc++.h>
using namespace std;
int main ()
{
  forward_list<int> l;
  l.assign({10, 20, 30, 10});
  l.remove(10);
  for (auto it = l.begin(); it != l.end();it++)
  {
    cout << (*it) << " ";
  }
  return 0;
}