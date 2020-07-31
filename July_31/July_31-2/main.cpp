#include"cStack.cpp"
#include"Employee.h"
int main()
{
	stack<Emp> s;
	int n;
	Emp ele;
	Emp ele1;
	do
	{
		cout << "\n1.push\n2.pop\n3.display\n4.exit\n";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "\nEnter a element" << endl;
			//cin>>ele;
			ele.Accept();
			s.push(ele);
			break;
		case 2:
			ele1 = s.pop();
			cout << "\ndeleted element is: "; ele1.display_e();
			break;
		case 3:
			s.display();
			break;
		case 4:
			exit(0);
		}
	} while (n != 0);
}