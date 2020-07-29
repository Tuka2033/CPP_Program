#include<iostream>
using namespace std;
class Printjobs
{
	int npages;
	static int ntray_pages;
	static int njobs;
public:
	static int getjobs()
	{
		return njobs;
	}
	static int checkpages()
	{
		return ntray_pages;
	}
	static void load_pages(int np)
	{
		ntray_pages += np;
	}
	Printjobs(int np) :npages(np)
	{
		++njobs;
		cout << "Printing " << np << " Pages ...." << endl;
		ntray_pages = ntray_pages - np;
	}
	Printjobs()
	{
		--njobs;
	}
};
int Printjobs::ntray_pages = 500;
int Printjobs::njobs = 0;
int main()
{
	cout << "jobs= " << Printjobs::getjobs() << endl;
	cout << "Pages= " << Printjobs::checkpages ()<< endl;
	Printjobs job1(10);
	cout << "jobs= " <<Printjobs::getjobs() << endl;
	cout << "Pages= " << Printjobs::checkpages() << endl;
	Printjobs job2(30),job3(20);
	cout << "jobs= " << Printjobs::getjobs() << endl;
	cout << "Pages= " << Printjobs::checkpages() << endl;
	Printjobs::load_pages(100);
	cout << "jobs= " << Printjobs::getjobs() << endl;
	cout << "Pages= " << Printjobs::checkpages() << endl;
	return 0;
}