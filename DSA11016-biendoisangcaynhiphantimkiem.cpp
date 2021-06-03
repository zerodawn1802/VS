#include<bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int infor;
    Node *left;
    Node *right;
} * Tree;
Tree root;
void Init(Tree &root)
{
    root = NULL;
}
bool isLeft(int val, Tree root)
{
    return val < root -> infor;
}
bool isRight(int val, Tree root)
{
    return val > root -> infor;
}
Tree Insert(Tree root, int val)
{
    if (root == NULL)
    {
        root = new Node;
        root -> infor = val;
        root -> left = NULL;
        root -> right = NULL;
        return root;
    }
    if (isLeft(val, root))
        root -> left = Insert(root -> left, val);
    else
        if (isRight(val, root))
            root -> right = Insert(root -> right, val);
    return root;
}
void process(Tree root)
{
    if (root == NULL) return;
    process(root -> left);
    cout << root -> infor << ' ';
    process(root -> right);
}
void solve()
{
    Init(root);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, so;
        char c;
        cin >> a >> so >> c;
        if (root == NULL) root = Insert(root, a);
        root = Insert(root, so);
    }
    process(root);
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
}