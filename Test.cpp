#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<string> v;
		v.resize(n);
		for (auto& str : v)
		{
			cin >> str;
		}

		//�趨����������ֵ���������
		bool lensort = true, dirsort = true;
		for (int i = 1; i<v.size(); ++i)
		{
			if (v[i - 1].size() > v[i].size())
			{
				lensort = false;
				break;
			}
		}

		//
		//string�ı�����֧���ֵ������
		for (int i = 1; i<v.size(); ++i)
		{
			if (v[i - 1] > v[i])
			{
				dirsort = false;
				break;
			}
		}

		if (lensort && dirsort)
		{
			cout << "both" << endl;
		}
		else if (lensort){
			cout << "lengths" << endl;
		}
		else if (dirsort){
			cout << "lexicographically" << endl;
		}
		else{
			cout << "none" << endl;
		}
	}
	return 0;
}




#include<iostream>
using namespace std;

//�õ���С��Լ���ĺ���
//��С��Լ������---շת�����
int get(int a, int b)
{
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	return b;
}
int main()
{
	int a = 0, b = 0, c = 0;
	while (cin >> a >> b)
	{
		//��ʱ�����С�Ĺ�Լ������b�Ľ��
		cout << a*b / get(a, b) << endl;
	}
	return 0;
}
