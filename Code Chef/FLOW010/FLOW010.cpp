#include<iostream>
using namespace std;
int main()
{
	int t;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>ch;
		if(ch=='B' || ch=='b')
			cout<<"BattleShip"<<endl;
		
		if(ch=='C' || ch=='c')
			cout<<"Cruiser"<<endl;

		if(ch=='D' || ch=='d')
			cout<<"Destroyer"<<endl;
		
		if(ch=='F' || ch=='f')
		    cout<<"Frigate"<<endl;	
	}
	return 0;
}
