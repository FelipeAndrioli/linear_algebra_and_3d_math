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

float distanceBetweenVectors(Vec3 vec_a, Vec3 vec_b) {
	Vec3 resulting_vector;

	resulting_vector.x = vec_b.x - vec_a.x;	
	resulting_vector.y = vec_b.y - vec_a.y;	
	resulting_vector.z = vec_b.z - vec_a.z;	

	return vectorMagnitude(resulting_vector);
}

void negateVector(Vec3 *vector) {
	vector->x = -vector->x;
	vector->y = -vector->y;
	vector->z = -vector->z;
}

Vec3 normalize(Vec3 vector) {
	float magnitude = vectorMagnitude(vector);

	Vec3 normalized;

	normalized.x = vector.x / magnitude;
	normalized.y = vector.y / magnitude;
	normalized.z = vector.z / magnitude;

	return normalized;
}

Vec3 vectorAddition(Vec3 vec_a, Vec3 vec_b) {
	Vec3 resulting_vector;

	resulting_vector.x = vec_a.x + vec_b.x;
	resulting_vector.y = vec_a.y + vec_b.y;
	resulting_vector.z = vec_a.z + vec_b.z;

	return resulting_vector;
}

Vec3 vectorSubtraction(Vec3 vec_a, Vec3 vec_b) {
	Vec3 resulting_vector;

	resulting_vector.x = vec_a.x - vec_b.x;
	resulting_vector.y = vec_a.y - vec_b.y;
	resulting_vector.z = vec_a.z - vec_b.z;

	return resulting_vector;
}

Vec3 vectorMultiplication(Vec3 vec_a, Vec3 vec_b) {
	Vec3 resulting_vector;

	resulting_vector.x = vec_a.x * vec_b.x;
	resulting_vector.y = vec_a.y * vec_b.y;
	resulting_vector.z = vec_a.z * vec_b.z;

	return resulting_vector;
}

Vec3 vectorScalarMultiplication(Vec3 vector, float scalar) {
	Vec3 new_vector;

	new_vector.x = vector.x * scalar;
	new_vector.y = vector.y * scalar;
	new_vector.z = vector.z * scalar;

	return new_vector;
}

Vec3 vectorScalarDivision(Vec3 vector, float scalar) {
	Vec3 new_vector;

	new_vector.x = vector.x / scalar;
	new_vector.y = vector.y / scalar;
	new_vector.z = vector.z / scalar;

	return new_vector;
}


