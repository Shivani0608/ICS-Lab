#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double alpha_num1,alpha_num2,p=11,e=2,q=13,n,fn,pd,c;
	char alpha1,alpha2;
	//generating public key and private key
	n=p*q;
	fn=(p-1)*(q-1);
	pd=(2*fn+1)/e;
	
	//encrypting data
	cout<<"Enter two alphabets :";
	cin>>alpha1>>alpha2;
	alpha_num1=alpha1-64;
	alpha_num2=alpha2-64;
	c=pow((alpha_num1*10 + alpha_num2),e);
	c=c%n;
	//decrypting the data
	c=pow(c,pd);
	c=c%n;
	cout<<endl<<c;
	return 0;
}
