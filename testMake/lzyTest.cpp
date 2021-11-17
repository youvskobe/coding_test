#include "TestAMgr.h"
#include "TestBMgr.h"
#include <stdio.h>
using namespace std;
int main()
{
	TestAMgr theTestAMgr;
	TestBMgr theTestBMgr;
	deque<TestA_DT> lstTestA;
	for(int i=0;i<5;i++)
	{
		TestA_DT dt;
		dt.number=i*10;
		snprintf(dt.numberName,sizeof(dt.numberName),"number%d",i);
		lstTestA.push_back(dt);
	}
	theTestAMgr.run(lstTestA);
	theTestBMgr.run();
	return 0;
}
