#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
using namespace std;
int pos (string a, string b)
 {
	int m,l,k;
	m=a.length();
	l=b.length();
	for (int i=1; i<m; i++)
	{
		if (a[i]==b[1])
		for (int j=1; j<l; j++)
			if (a[i+j-1]==b[j])
				k=k+1;
		if (k==l)
			return i;
        };
 }

int main() 
{
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt");
	//enter line
	string s, str;
	getline (out,s);
	str.append(s);
	str.append("\n");
	int l,n,k;
   while (! in.eof())
   {
		//enter abbreviation and decryption
		string a,d,abb,dec;
		getline (in,a," ");
		abb.append(a);
		getline (in,d);
		dec.append(d);
		l=abb.length();
		n=dec.length();
		k=0;
		k=pos(str,abb)
		if (k!=0)
			str.erase(k,l);
		str.insert(k,dec,1,n);
	};
	out<<str;
	in.close();
	out.close();
}
