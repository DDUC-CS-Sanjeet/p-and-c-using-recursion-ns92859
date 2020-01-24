/*
	Submitted By : Neeraj Sharma
	About : To find the permutation and combination using Rercursion
*/
#include<iostream>
using namespace std;
int permutation(int n, int r)
{
	if(r==0)
	{
		return 1;
	}
	else 
	{
		return n*permutation(n-1,r-1);
	}
}

int combination(int n, int r)
{
	if(r==0)
	{
		return 1;
	}
	else 
	{
		return (1.0*combination(n-1,r-1))*n/r;
	}
  return 0;
}

int main()
{
	int n,r;
	int choice;
	cout<<"\n\n                                  Welcome to Permutations and Combinations (With Recurssion) :)\n\n\n";
	cout<<"\nEnter the value of 'n'(number of elements) and 'r'(number of formations) : \n";
	cin>>n>>r;
	try
	{
		if(n<=0||r<0)
		{
			throw "Wrong input..";
		}
		else if(n<r)
		{
			throw "Wrong input..";
		}
		else
		{
			cout<<"\nWhat to do want to perform at a time permutation or combination \n";
			cout<<"Enter '1' for permutation and '2' for combination : ";
			cin>>choice;
			switch(choice)
			{
				case 1: {
					int rcvpermu=permutation(n,r);
					cout<<"\nPermutation of "<<n<<" and "<<r<<" is : "<<rcvpermu;
					break;
				}
				case 2: {
					int rcvcombo=combination(n,r);
					cout<<"\nCombination of "<<n<<" and "<<r<<" is : "<<rcvcombo;
					break;
				}
				default:cout<<"\nSorry, but you've given me an incorrect input which I'm unable to perform..    :(";
			}
		}
	}
	catch(const char* s)
	{
		cout<<s<<"\n";
		cout<<"Program Aborted.....";
	}
    return 0;
}
