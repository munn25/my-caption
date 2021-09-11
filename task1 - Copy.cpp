#include<iostream>
using namespace std;
int main(){
	int inttype;
	float floattype;
	double doubletype;
	char chartype;
	
	printf("size of int: %zu bytes\n", sizeof(inttype));
	printf("size of double: %zu bytes\n", sizeof(doubletype));
	printf("size of float: %zu bytes\n", sizeof(floattype));
	printf("size of char: %zu bytes\n", sizeof(chartype));
	return 0;
}
