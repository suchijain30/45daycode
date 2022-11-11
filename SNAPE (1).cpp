#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t ;
	cin>>t ;
	while (t--)
	{
	 int LS , B , RS ;
	 cin>>LS>>B;
	 float max = sqrt((B*B) +(LS*LS));
	 float min =sqrt((B*B)-(LS*LS));
	 cout<<min<<" "<<max<<endl;

	}
	return 0;
}
