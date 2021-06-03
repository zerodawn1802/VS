/*
Cho một danh sách chứa cả các số và các từ.
Yêu cầu bạn hãy sắp xếp danh sách này tăng dần sao cho các từ theo thứ tự từ điển, các số theo thứ tự số.
Hơn nữa, nếu phần tử thứ n là số thì danh sách sau khi sắp xếp phần tử thứ n cũng phải là số, nếu là từ thì vẫn là từ.
Input:
    Dòng đầu tiên là số danh sách T (1≤T≤100).
    T dòng tiếp theo, mỗi dòng là một danh sách.
    Mỗi phần tử của danh sách cách nhau bởi dấu phẩy (",") theo sau là dấu cách,
    và danh sách được kết thúc bằng dấu chấm (".").
Output:
    Với mỗi danh sách trong dữ liệu, xuất ra danh sách đã sắp xếp thỏa mãn yêu cầu đề bài (có định dạng như trong dữ liệu).
*/
#include<bits/stdc++.h>
using namespace std;
bool isNum(char c)
{
	return (c >= '0' && c <= '9');
}
bool cmp(string a, string b)
{
	return ((a.size() < b.size()) || (a.size() == b.size() && a < b));
}
void process()
{
	string s;
	vector<string> num, word;
	vector<int> typ;
	while (cin >> s)
	{
		char sig = s.back();
		s.erase(s.size() - 1, 1);
		if (isNum(s[0]))
		{
			num.push_back(s);
			typ.push_back(0);
		}
		else
		{
			word.push_back(s);
			typ.push_back(1);
		}
		if (sig == '.') break;
	}
	sort(num.begin(), num.end(), cmp);
	sort(word.begin(), word.end());
	int it1 = 0, it2 = 0; 
	for(int i = 0; i < typ.size(); i++)
	{
		if (typ[i]) cout << word[it1++];
		else cout << num[it2++];
		if (i == typ.size() - 1) cout << endl;
		else cout << ", ";
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--) process();
}