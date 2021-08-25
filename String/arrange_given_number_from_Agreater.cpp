#include<bits/stdc++.h>
using namespace std;

int mycompare(string X , string Y){
string XY  = X.append(Y);
string YX = Y.append(X);

return XY.compare(YX) > 0 ? 1 :0;
}

void printArray(vector<string> s){
  sort(s.begin() , s.end() , mycompare);
}


int main(){

   vector<string>s;

   s.push_back("54");
   s.push_back("546");
   s.push_back("548");
   s.push_back("60");

  printArray(s);

	return 0;
}