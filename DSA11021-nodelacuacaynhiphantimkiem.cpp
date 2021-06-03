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
void showLeft(Tree root)
{
    if (root == NULL) return;
    if (root -> left == NULL && root -> right == NULL) cout << root -> infor << ' ';
    else
    {
        showLeft(root -> left);
        showLeft(root -> right);
    }
}
void solve()
{
    Init(root);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int so;
        char c;
        cin >> so;
        root = Insert(root, so);
    }
    showLeft(root);
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}