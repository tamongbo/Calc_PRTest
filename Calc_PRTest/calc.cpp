#include <stdexcept>
using namespace std;

class Calc {
public:
	int getSum(int a, int b) {
		return a + b;
	}
	int getGop(int a, int b) {
		return a*b;
	}
	int getZegop(int a) {
		return a * a;
	}
	int getMinus(int a, int b) {
		return (a - b);
	}
	int getDivide(int a, int b) {
		if (b == 0)
		{
			throw invalid_argument("It can't be zero");
		}
		return a / b;
	}
	int getSumSum(int a, int b, int c) {
		return 0;
	}
};