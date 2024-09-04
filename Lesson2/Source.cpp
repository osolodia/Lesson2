#include<iostream>

using namespace std;

int Sum(int a, int b) {
	return a + b;
}

void PrintHelloWorld() {
	cout << "Hello world!";
}

int main() {
	int b = 1, c = 5;
	int a = Sum(b, c);
	PrintHelloWorld();
}