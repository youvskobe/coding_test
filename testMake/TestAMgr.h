#ifndef __TESTA_MGR_H__
#define __TESTA_MGR_H__

#include "TestA_DT.h"
#include <string>
#include <deque>
using namespace std;


class TestAMgr
{
public:
	TestAMgr(){};
	~TestAMgr(){};
	void run(deque<TestA_DT>& lstTestA);
	
private:
	
};


#endif
