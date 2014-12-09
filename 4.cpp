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
	str.append(s);
	str.append("\n");
	//enter abbreviation and decryption
	string a,d,abb,dec;
	getline (in,a);
	abb.append(a);
	abb.append("\n");
	getline (in,d);
	dec.append(d);
	dec.append("\n");
   int l,n,k;
	l=abb.length();
	n=dec.length();
	k=str.find(a);
	str.erase(k,l);
   str.insert(k,dec,1,n);
	out<<str;
	in.close();
	out.close();
}
