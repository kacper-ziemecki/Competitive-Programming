#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ld long double

void test(void (*program)(), string inputTemplate, string outputTemplate, string outputRes, string outputTmp, ll begin, ll end, ll sep, ll show=100, bool showInput=true, ll testLines=-1){
  try{
    streampos sp = cin.tellg();
    freopen(outputRes.c_str(), "w", stdout);
    for(ll iter = begin; iter <= end; iter += sep){
      if(iter%show == 0) cout << iter/show << "-";
      if(iter%(show*8) == 0) cout << endl;
      try{
        freopen((inputTemplate + to_string(iter) + ".in").c_str(), "r", stdin);
        cin.seekg(sp);
      } catch(exception& e){
        cout << "COULD NOT FIND INPUT FILE: " << (inputTemplate + to_string(iter) + ".in") << endl;
        continue;
      }
      freopen(outputTmp.c_str(), "w", stdout);
      program();
      freopen(outputRes.c_str(), "a", stdout);
      bool flag = true;

      ifstream file1, file2;
      string text1,text2,temp1,temp2;

      file1.open(outputTmp);
      try{
        file2.open((outputTemplate + to_string(iter) + ".out"));
      } catch(exception& e){
        cout << "COULD NOT FIND OUTPUT FILE: " << (outputTemplate + to_string(iter) + ".out") << endl;
      }
      while((!file1.eof() && !file2.eof()) && (testLines != 0)){
        getline(file1, temp1);
        getline(file2, temp2);
        text1 += temp1;
        text2 += temp2;
        testLines--;
      }
      if(text1 != text2){
          cout << "\n--------------";
          cout << "\nWRONG (" << iter << "):\n";
          if(showInput){
            cout << "INPUT:\n";
            cin.seekg(sp);
            while(!cin.eof()){
              getline(cin, temp1);
              cout << temp1 << endl;
            }
            cin.seekg(sp);
          }
          cout << "CORRECT:\n";
          cout << text2 << endl;
          cout << "ANSWER:\n";
          cout << text1 << endl;
          cout << "--------------\n";
        }
    }
    cout << "ENDED\n";
  } catch(exception& e){
    freopen(outputRes.c_str(), "a", stdout);
    cout << e.what() << endl;
    return;
  }
}
