#include<iostream>
#include"Hashing.h"
#include"PerfectHashing.h"
using namespace std;
int main()
{
	int n;
	cout << "Enter your integer n :";
	cin >> n;
	unsigned long long int *r=generateRandomKeys(n);	
//	Hashing h;
	PerfectHashing ph(n);
	unsigned int rnd;
	for (int i = 0; i < n; i++) {
	cout << i << ": ";
	cout << *(r + i) << endl;
	}
	int random = 0;
	bool check;
	unsigned long long int key = 0;
	for (int i = 0;i < n;i++)
	{
		ph.insert(r[i]);
	}
//	ph.displayHash();
	//for (int i = 0; i < n; i++) {
	//	srand((unsigned)time(NULL));
	//	rnd = 1 + rand() % 3;
	//	if (rnd == 1 ||i==0)
	//		h.insertElement(r[i]);
	//	else if (rnd == 2 &&i!=0)
	//	{
	//		 random =  rand() % i;
	//		 key = r[random];
	//		h.removeElement(key);
	//		i--;
	//	}
	//	else if (rnd == 3 &&i!=0) {
	//		 random = rand() % i;
	//		 key = r[random];
	//		check=h.Search(key);
	//		if(check)
	//		cout << "**********" << key << " is found *************\n";
	//		i--;
	//	}
	//}
//	h.printAll();
//	cout << "TOTAL NO. OF COLLISIONS :" << h.countCollisions()<<endl;
	PerfectHashing h =PerfectHashing(50);
	for (int i = 0;i < 50;i++)
	{
		h.insert(r[i]);
	}
	h.displayHashTable();
	return 0;
}