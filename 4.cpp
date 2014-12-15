#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
using namespace std;
int main() 
{
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt");
	//enter line
	string s, str;
	getline (in,s);
	str.append(str);
	str.append("\n");
	//enter number of substitutions
	int m;
	cin>>m;
	int l,n,k;
	for (int i=1; i<m; i++)
	{
		//enter abbreviation and decryption
		string a,d,abb,dec;
		getline (in,a);
		abb.append(a);
		getline (in,d);
		dec.append(d);
		l=abb.length();
		n=dec.length();
		k=0;
		k=str.find(a);
		if (k!=0)
			str.erase(k,l);
		str.insert(k,dec,1,n);
	};
	out<<str;
	in.close();
	out.close();
}
