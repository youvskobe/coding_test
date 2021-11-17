#include <string>
#include <stdio.h>

using namespace std;

void test3(string a,string c)
{
	printf("test3\n");
	printf("a=%s,c=%s\n", a.c_str(),c.c_str());

}

void test2(string a,string c)
{
	printf("test2\n");
	test3(a,c);
}

void test1(string a,string c)
{
	printf("test1\n");
	test2(a,c);
};

int main(int argc,char** argv )
{
	string a=argv[1];
	string c=argv[2];
	test1(a,c);
	return 0;
}