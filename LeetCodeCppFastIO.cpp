// LeetCodeCppFastIO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//题目描述：
/*

*/
#define __cplusplus 201203L
#include<bits/stdc++.h>

//Macro to reduce typing
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=b-1;i>=a;i--)
#define mem(a,b) memset(a,b,sizeof(a))
#define UMP unordered_map
#define UST unordered_set
#define LL long long
#define VEC vector
#define VI VEC<int>
#define VLL VEC<LL>
#define PII pair<int,int>
#define PLL pair<LL,LL>
#define PQ priority_queue
#define GT greater
#define PQ2(T) PQ<T,VEC<T>,GT<T>>

using namespace std;

vector<vector<int>> stringToIntegerVectorVector(string s) {
	vector<vector<int>> res;
	vector<int> row;
	int num = 0;
	bool isNum = false;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '[') {
			row.clear();
			isNum = false;
		}
		else if (s[i] == ']') {
			if (isNum) {
				row.push_back(num);
				num = 0;
				isNum = false;
			}
			res.push_back(row);
		}
		else if (s[i] == ',') {
			if (isNum) {
				row.push_back(num);
				num = 0;
				isNum = false;
			}
		}
		else {
			num = num * 10 + s[i] - '0';
			isNum = true;
		}
	}
	return res;
}
int stringToInteger(string s) {
	int res = 0;
	for (int i = 0; i < s.size(); i++) {
		res = res * 10 + s[i] - '0';
	}
	return res;
}

vector<int> stringToIntegerVector(string s) {
	vector<int> res;
	int num = 0;
	bool isNum = false;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '[') {
			res.clear();
			isNum = false;
		}
		else if (s[i] == ']') {
			if (isNum) {
				res.push_back(num);
				num = 0;
				isNum = false;
			}
		}
		else if (s[i] == ',') {
			if (isNum) {
				res.push_back(num);
				num = 0;
				isNum = false;
			}
		}
		else {
			num = num * 10 + s[i] - '0';
			isNum = true;
		}
	}
	return res;
}

//Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
TreeNode* stringToTreeNode(string s) {
	vector<int> v = stringToIntegerVector(s);
	if (v.size() == 0) return nullptr;
	TreeNode* root = new TreeNode(v[0]);
	queue<TreeNode*> q;
	q.push(root);
	int i = 1;
	while (!q.empty()) {
		TreeNode* node = q.front();
		q.pop();
		if (i < v.size() && v[i] != -1 && v[i] != 69560) {
			node->left = new TreeNode(v[i]);
			q.push(node->left);
		}
		i++;
		if (i < v.size() && v[i] != -1 && v[i] != 69560) {
			node->right = new TreeNode(v[i]);
			q.push(node->right);
		}
		i++;
	}
	return root;
}
//读取in.txt中的数据，然后调用Solution,输出结果到out.txt
//数据样例：
/*

*/
int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
	string line;
	while (getline(in, line)) {
		
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
