#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
vector<int> res;
struct node
{
    int infor;
    struct node *left;
    struct node *right;
};
typedef node *Tree;
void Init(Tree &T)
{
    T = NULL;
}
Tree GetNode()
{
    Tree p;
    p = new node();
    return p;
}
void FreeNode(Tree &p)
{
    delete p;
}
int isEmpty(Tree T)
{
    if (T == NULL) return 1;
    return 0;
}
Tree MakeNode(int x)
{
    Tree p;
    p = GetNode();
    p -> infor = x;
    p -> left = NULL;
    p -> right = NULL;
    return p;
}
Tree Search(Tree T, int x)
{
    if(T == NULL) return NULL;
    if (T -> infor == x) return T;
    Tree p = Search(T -> left, x);
    if (p == NULL) p = Search(T -> right, x);
    return p; 
}
Tree Make_Root(Tree T, int x)
{
    if (T == NULL) T = MakeNode(x);
    return T;
}
void Add_Left(Tree &T, int x, int y)
{
    Tree p, q;
    p = Search(T, x);
    if (p == NULL) return;
    else
        if ((p -> left) != NULL) return;
        else
        {
            q = MakeNode(y);
            p -> left = q;
        }
}
void Add_Right(Tree &T, int x, int y)
{
    Tree p, q;
    p = Search(T, x);
    if (p == NULL) return;
    else
        if ((p -> right) != NULL) return;
        else
        {
            q = MakeNode(y);
            p -> right = q;
        }
}
int countLeaf(Tree &T)
{
    if (T == NULL) return 0;
    if (T -> left == NULL && T -> right == NULL) return 1;
    else
        return countLeaf(T -> right) + countLeaf(T -> left); 
}
void treeDisplayLevel(Tree &T)
{
    queue <pair<Tree, int> > q;
    q.push(mp(T, 0));
    while(!q.empty())
    {
        int level = q.front().second;
        if (q.front().first == NULL)
        {
            q.pop();
            continue;
        }
        res.push_back(q.front().first -> infor);
        q.push(mp(q.front().first -> right, level + 1));
        q.push(mp(q.front().first -> left, level + 1));
        q.pop();
    }
}
void solve()
{
    int n;
    Tree root;
    Init(root);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int u, v;
        char x;
        cin >> u >> v >> x;
        if (isEmpty(root))
        {
            root = Make_Root(root, u);
        }
        if (Search(root, v) == root)
        {
            Make_Root(root, u);
        }
        if (x == 'L') Add_Left(root, u, v);
        else Add_Right(root, u, v);
    }
    res.clear();
    treeDisplayLevel(root);
    for(int i = res.size() - 1; i >= 0; i--) cout << res[i] << ' ';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}