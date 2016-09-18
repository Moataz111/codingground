#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i;
	string a;
	cout<<"\t\t\t\tWelcome to ROT-13 app\n\n\n";
	cout<<"===  Moataz ZS  ===\n\n===  This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.  === \n\n\n";
		cout<<"\t\t = Encrypt / Decrypt = \n\nEnter a text:\n";
		getline(cin, a);
		while(a[i]!='\0')
		{
			if((a[i]>='A' && a[i]<='M') || (a[i]>='a' && a[i]<='m'))
				a[i]= int (a[i])+13;
			else if((a[i]>='N' && a[i]<='Z') || (a[i]>='n' && a[i]<='z'))
				a[i]= int (a[i])-13;
			i++;
		}
		cout<<"\nResult:\n\n";;
		for(i=0;a[i]!='\0';i++)
		cout<<a[i];
			cout<<"\n\nGoodbye :)\n";
	return 0;
}
