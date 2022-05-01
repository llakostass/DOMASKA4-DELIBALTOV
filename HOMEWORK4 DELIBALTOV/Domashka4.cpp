#include <iostream>
using namespace std;
int main() {
	float a = -0.6, b = 5.3;
	float z = 0, t = 0;
	cin >> a >> b;
	if (a >= b) {
		z = 1 - 2 * cos(a) * sin(b);
	}
	else {
		z = sqrt(abs(a * a - b * b));
	}


	if (z < b) {
		t = cbrt(z + a * a * b);
	}
	else if (z == b) {
		if (z > 0)
			t = 1 - (log(z) / log(10)) + cos(a * a * b);
		else { 
			cout << "нет решений" << endl;
			return 0;
		}
	}
	else {
		if (cos(z*a)!=0) {
			t = 1 / cos(z * a);
		}
		else{
			cout << "нет решений" << endl;
			return 0;
		}
	}
	cout << "a= " << a << "    b= " << b << "   z= " << z << "   t= " << t;
}