/* C++ implementation of QuickSort */
#include <bits/stdc++.h>
using namespace std;

void lineFromPoints(pair<double, double>p , pair<double, double>q)
{
	double a = q.second - p.second;
	double b = p.first - q.first;
	double c = a *(p.first) + b* (p.second);
	
	if(b<0){
		cout << "The Line Passing through points P and Q is :"
		<<" " << a <<"x - " << b << " y = " << c << endl;
		}else{
			  cout << "The line passing through points P and Q "
                "is: "
             << a << "x + " << b << "y = " << c << endl;
			}
}
 
int  main(){

pair<double,double> p = make_pair(3,2);
pair<double, double> q = make_pair(2,6);

lineFromPoints(p, q);

return 0;
}
 
// c++ programe for telling us wheather the two points represents a line or not


 
 
 
 
 
 
 
   
