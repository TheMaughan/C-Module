/********************************************************************************
*  This code only solves for "x".
*  Currently works but is a work in progress.
********************************************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

struct VAR{
	float i;
};

struct LINE{
//k*x+a
	float a, k;
	VAR* x;

	LINE(){}
	LINE(int a) : a(a), k(0), x(0) {}
	LINE(VAR& v) : a(0), k(1), x(&v) {}
};

LINE operator + (LINE A, LINE B)
{
//assumes that A.x == 0 or B.x == 0 or A.x == B.x
	LINE R;
	R.a = A.a + B.a;
	R.k = A.k + B.k;
	if(A.x) R.x = A.x;
	else R.x = B.x;
	return R;
}

LINE operator - (LINE A, LINE B)
{
//same as +
	LINE R;
	R.a = A.a - B.a;
	R.k = A.k - B.k;
	if(A.x) R.x = A.x;
	else R.x = B.x;
	return R;
}

LINE operator * (LINE A, LINE B)
{
//assumes that A.x == 0 or B.x == 0
	LINE R;
	R.a = A.a * B.a;
	R.k = A.k * B.a + B.k * A.a;
	if(A.x) R.x = A.x;
	else R.x = B.x;
	return R;
}

LINE operator / (LINE A, LINE B)
{
//assumes that B.x == 0
	LINE R;
	R.a = A.a / B.a;
	R.k = A.k / B.a;
	R.x = A.x;
	return R;
}

void operator == (LINE A, LINE B)
{
	LINE C = A - B;
	C.x->i = -C.a/C.k;
}

int main()
{
	VAR x;
	//5 == (2 + (x-7)*10)/2;
	250 == 2 * x + 4 * (x-20);

	std::cout << "x = " << x.i;
	std::cin.get();

	return 0;
}
