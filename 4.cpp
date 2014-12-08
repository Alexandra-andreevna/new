#include <iostream>
#include <string>
using namespace std;
int main() 
{
	cout<<"enter line"<<endl;
	string s;
	cin>>s;
	cout<<"enter abbreviation and decryption"<<endl;
	string a,d;
	cin>>a;
	cin>>d;
   int l,n,k;
	l=a.length();
	n=d.length();
	k=s.find(a);
	s.erase(k,l);
        s.insert(k,d,1,n);
	cout<<s;
}
