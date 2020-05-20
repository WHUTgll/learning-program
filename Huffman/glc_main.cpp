// Main.cpp: 定义控制台应用程序的入口点。
//

#include "glc_Compress.h"
#include"glc_Huffman.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "=========Huffman文件压缩=======" << endl;
	cout << "请输入文件名：";
	char filename[256];
	cin >> filename;
	if (Compress(filename) == 1) {
		cout << "\n压缩完成！" << endl;
	}
	else {
		cout << "\n压缩失败" << endl;
	}
	return 0;
}