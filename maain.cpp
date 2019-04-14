#include "THeadList.h"
#include <cstdlib>
#include "TPolinom.h"

int main()
{
	int r, m, o;
	TPolinom p, q,copy;
	cout << "The first polinom :" << endl;
	cin >> p;
	system("cls");
	cout << "The second polinom :" << endl;
	cin >> q;
	system("cls");
	cout << "The first polinom: " << p << endl;
	cout << "The second polinom: " << q << endl;
	M1:
	cout << "Choose the operation: " << endl;
	cout << "1)Operation +" << endl;
	cout << "2)Operation -" << endl;
	cout << "3)Operation *" << endl;
	cout << "4)Exit" << endl;
	cin >> r;
	if (r == 1)
	{
		cout << "================Operation + ================" << endl;
		p += q;
		cout << "p+q=" << p << endl;
		goto M1;
	}
	if (r == 2)
	{
		cout << "================Operation - ================" << endl;
		p -= q;
		cout << "p-q=" << p << endl;
		goto M1;
	}
	if (r == 3)
	{
		cout << "================Operation * ==============" << endl;
		cout << "The number for multiplication :" << endl;
		cin >> m;
		p *= m;
		cout << "1)myltiply first polinom" << endl;
		cout << "2)myltiply second polinom" << endl;
		cin >> o;
		if (o == 1)
		{
			cout << "p*m=" << p << endl;
		}
		if (o == 2)
		{
			cout << "q*m=" << q << endl;
		}
		goto M1;
	}
	if (r == 4)
	{
		return 0;
	}
	system("pause");
	return 0;
}