#include "TestAMgr.h"
#include <stdio.h>
using namespace std;
void TestAMgr::run(deque<TestA_DT>& lstTestA)
{
	printf("go to run\n");
	deque<TestA_DT>::iterator it=lstTestA.begin();
	for(;it<lstTestA.end();it++)
	{
		printf("it=%08x\n",&it);
		printf("number=%d\n",it->number);
		printf("number=%s\n",it->numberName);
	}
	for(int i=0;i<lstTestA.size();i++)
	{
		printf("lstTest[i]=%08x\n",&lstTestA[i]);
		printf("number=%d\n",lstTestA[i].number);
		printf("number=%s\n",lstTestA[i].numberName);
	}
	
}
