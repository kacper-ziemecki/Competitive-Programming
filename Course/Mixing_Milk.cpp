#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);

  int c1,m1,c2,m2,c3,m3;
  cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;

  for(int i = 0; i < 100; i++){
    if(i%3 == 0){
      int temporary = m2;
      m2 = min(c2, m2 + m1);
      m1 -= min(m1, c2-temporary);
    }
    if(i%3 == 1){
      int temporary = m3;
      m3 = min(c3, m3 + m2);
      m2 -= min(m2, c3-temporary);
    }
    if(i%3 == 2){
      int temporary = m1;
      m1 = min(c1, m1+m3);
      m3 -= min(m3, c1-temporary);
    }
  }
  cout << m1 << endl << m2 << endl << m3 << endl;
}