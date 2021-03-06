// Roman to Integer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//M=1000,D=500,C=100,L=50,X=10,V=5,I=1

#include "pch.h"
#include <iostream>

using namespace std;

class Solution {
public:     
	int romanToInt(string s) {
		int sum = 0, size = s.size();
		for (int i = 0; i < size; i++) {
			if (s[i] == 'M') {
				if (i == 0)
					sum = sum + 1000;
				else if (i > 0  && (s[i - 1] != 'C'))
					sum = sum + 1000;
				else
					sum = sum + 800;
			}
			else if (s[i] == 'D') {
				if (i == 0)
					sum = sum + 500;
				else if (i > 0  && (s[i - 1] != 'C'))
					sum = sum + 500;
				else
					sum = sum + 300;
			}
			else if (s[i] == 'C') {
				if (i == 0)
					sum = sum + 100;
				else if (i > 0 && (s[i - 1] != 'X'))
					sum = sum + 100;
				else
					sum = sum + 80;
			}
			else if (s[i] == 'L') {
				if (i == 0)
					sum = sum + 50;
				else if (i > 0 && (s[i - 1] != 'X'))
					sum = sum + 50;
				else
					sum = sum + 30;
			}
			else if (s[i] == 'X') {
				if (i == 0)
					sum = sum + 10;
				else if (i > 0 && (s[i - 1] != 'I'))
					sum = sum + 10;
				else
					sum = sum + 8;
			}
			else if (s[i] == 'V') {
				if (i == 0)
					sum = sum + 5;
				else if (i > 0 && (s[i - 1] != 'I'))
					sum = sum + 5;
				else
					sum = sum + 3;
			}
			else if (s[i] == 'I') {
				sum = sum + 1;
			}
		}
		return sum;
	}
};

int main()
{
	Solution s;
    std::cout << s.romanToInt("MCMXCIV"); 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
