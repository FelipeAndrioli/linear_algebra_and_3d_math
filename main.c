#include <stdio.h>
#include "Vec3.h"

int main() {

	Vec3 vector;

	vector.x = 1.0;
	vector.y = 2.0;
	vector.z = 3.0;

	printVector(vector);
	
	return 0;
}
