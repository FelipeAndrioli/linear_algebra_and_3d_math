#include <stdio.h>

typedef struct {
	float x;
	float y;
	float z;
} Vec3;

void printVector(Vec3 vector) {
	printf("Vector x -> %f\n", vector.x);
	printf("Vector y -> %f\n", vector.y);
	printf("Vector z -> %f\n", vector.z);
}

float dotProduct(Vec3 vec_a, Vec3 vec_b) {
	return (vec_a.x * vec_b.x + vec_a.y * vec_b.y + vec_a.z * vec_b.z);
}

Vec3 crossProduct(Vec3 vec_a, Vec3 vec_b) {
	Vec3 cross_product;

	cross_product.x = vec_a.y * vec_b.z - vec_a.z * vec_b.y;
	cross_product.y = vec_a.z * vec_b.x - vec_a.x * vec_b.z;
	cross_product.z = vec_a.x * vec_b.y - vec_a.y * vec_b.x;

	return cross_product;
}

int main() {

	/*
		TODO's
			[IN PROGRESS] - Vectors
				[DONE] - Struct
				[DONE] - Print
				[] - Magnitude(length)
				[] - Unit Vector(normalized vector)
				[DONE] - Products
					[DONE] - Dot Product
					[DONE] - Cross Product
	*/

	Vec3 vector;
	vector.x = 2.0;
	vector.y = 6.0;
	vector.z = 12.0;

	Vec3 vector_b;
	vector_b.x = 12.0;
	vector_b.y = 16.0;
	vector_b.z = 2.0;

	return 0;
}
