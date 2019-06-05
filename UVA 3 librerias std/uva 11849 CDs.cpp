#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned long long myint;
typedef vector <myint> cds;
int main () {
  myint m,n,i,x;
  cds a,b,v(1000000);
  vector<myint>::iterator it;
  cin >> m >> n;
  while(m!=0&&n!=0){
      for(i = 0; i<m;i++)
        {
            cin >> x;
            a.push_back(x);
        }
      for(i = 0; i<n;i++)
        {
            cin >> x;
            b.push_back(x);
        }
      it=set_intersection(a.begin(), a.end(), b.begin(), b.end(), v.begin());
      cout << it - v.begin() << endl;
      cin >> m >> n;
      a.clear();
      b.clear();
      v.clear();
  }

  return 0;
}
