#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l = {10,2,5,20};
  l.pop_front();
  l.pop_back();
  for (auto it = l.begin(); it != l.end();it ++)
  {
    cout << (*it) << " ";
  } 

    return 0;
}