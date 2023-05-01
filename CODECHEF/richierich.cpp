#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B,X;
	    cin>>A>>B>>X;
	    int c = B - A;
	    double y;
	    y = (double) c/X;
	    cout<<y<<" ";
	}
	return 0;
}
