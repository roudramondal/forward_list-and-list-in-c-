#include <bits/stdc++.h>
using namespace std;
int main ()
{
  forward_list<int> l1 = {15, 20, 30};
  auto it = l1.insert_after(l1.begin(), 10);
  it = l1.insert_after(it, {2, 3, 5});
  it = l1.emplace_after(it, 40);
  it = l1.erase_after(it);
  for(int x : l1)
  {
    cout << x << " ";

  }
  return 0;
}