#include <bits/stdc++.h>
using namespace std;

int simulate(int x, vector<vector<int>> list){
  vector<int> cups{1, 2, 3};
  int answer = 0;
  for(int i = 0; i < list.size(); i++){
    int temporary = cups[list[i][0]-1];
    cups[list[i][0]-1] = cups[list[i][1]-1];
    cups[list[i][1]-1] = temporary;
    if(cups[list[i][2]-1] == x){
      answer++;
    }
  }
  return answer;
}

int main()
{
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);

  int n;
  cin >> n;
  vector<vector<int>> list(n, vector<int>(3, 0));
  for(auto &subList : list){
    for(auto &element : subList){
      cin >> element;
    }
  }

  int result = 0;
  result = max(result, simulate(1, list));
  result = max(result, simulate(2, list));
  result = max(result, simulate(3, list));

  cout << result << endl;
}