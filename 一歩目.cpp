#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string.h>
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

bool isNumber(const char c) {
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9') return true;
	else return false;
}

int main(void){
	cout << "ぷろぐらみんぐするよ\nすうじをかいてね" << endl;
	char n[32];
	char g[] = "ばいばい";
	while (1) {
		scanf("%s", n);
		int s = 0;
		int length = 0;
		while (n[length] != '\0') length++;
		if (length > 16) {
			fprintf(stderr, "Invalid input\n");
			exit(0);
		}
		int i = 0;
		while(n[i] != '\0') {
			if (isNumber(n[i]) == 0) s = 1;
			i++;
		}
		if (s == 0) cout << "ええやん" << n << "ええやん" << endl;
		else if (strcmp(n, "ばいばい") == 0) {
			cout << "ばいばい!";
			exit(0);
		}
		else cout << "ちゃうやん" << n << "ちゃうやん" << endl;
	}
}