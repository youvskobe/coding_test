#ifndef __TESTA_DT_H__
#define __TESTA_DT_H__
using namespace std;

struct TestA_DT
{
	int number;
	char numberName[15+1];
	int flag;

	TestA_DT()
	{
		setEmpty();
	}

	void setEmpty()
	{
		number= 0;
     	numberName[0] ='\0';
     	flag=0;
	};
};

#endif 

