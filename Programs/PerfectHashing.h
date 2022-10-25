#pragma once
class PerfectHashing {
private:
	unsigned long long int size;
	Hashing* pTable;
	unsigned long long int a, b;
	unsigned long long int primeNumber;
public:
	list<unsigned long long int>* table;
	PerfectHashing(unsigned long long int m)
	{
		pTable = new Hashing[m];
		size = m;
		primeNumber = 18361375334787046697;
		a = 1 + (rand() % (primeNumber - 1));
		b = (rand() % (primeNumber - 1));
		table = new list<unsigned long long int>[m];
	}
	unsigned long long int KeyGenerator(unsigned long long int key) {
		srand((unsigned)time(NULL));
		return (((a * key) + b) % primeNumber) % size;
	}
	void insert(unsigned long long int key)
	{
		int index = KeyGenerator(key);
		pTable[index].insertElement(key);
		pTable[index].collision();
	}
	int Search(unsigned long long int key)
	{
		bool srch=false;
		for (int i = 0;i < size;i++)
		{
			srch=pTable[i].Search(key);
			if (srch)
				return i;
		}
	}
	void displayHashTable()
	{
		int count = 0;
		for (int i = 0;i < size;i++)
		{
			cout << "=>INDEX " << i << " :";
			pTable[i].printAll();
			count+=pTable[i].countCollisions();
			cout << endl;
		}
		cout << "TOTAL COLLISIONS ARE  :" << count << endl;
	}
	/*void f(Hashing* h1[])
	{
		for (int i = 0;i < 50;i++) {
			this->table[i] = h1[i];
		}
	}*/

};