#include <stdio.h>
#include <math.h>

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

float vectorMagnitude(Vec3 vector) {
	return sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vector.z, 2));
}

Vec3 normalize(Vec3 vector) {
	float magnitude = vectorMagnitude(vector);

	Vec3 normalized;

	normalized.x = vector.x / magnitude;
	normalized.y = vector.y / magnitude;
	normalized.z = vector.z / magnitude;

	return normalized;
}

int main() {

	Vec3 vector;
	vector.x = 2.0;
	vector.y = 6.0;
	vector.z = 12.0;

	return 0;
}










