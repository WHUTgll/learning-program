// Main.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "glc_Compress.h"
#include"glc_Huffman.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "=========Huffman�ļ�ѹ��=======" << endl;
	cout << "�������ļ�����";
	char filename[256];
	cin >> filename;
	if (Compress(filename) == 1) {
		cout << "\nѹ����ɣ�" << endl;
	}
	else {
		cout << "\nѹ��ʧ��" << endl;
	}
	return 0;
}