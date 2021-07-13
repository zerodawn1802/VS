#include<iostream>
using namespace std;
int r[10004], p[10004];
int tim(int a)
{
    if(p[a] != a) p[a] = tim(p[a]);
    return p[a];
}
void pro()
{
    for(int i = 0; i < 10004; i++)
	{
        p[i] = i;
        r[i] = 0;
    }
}
void process(int a, int b)
{
    a = tim(a);
    b = tim(b);
    if(a == b) return;
    if(r[a] == r[b]) r[a]++;
    if(r[a] < r[b]) p[a] = b;
    else p[b] = a;
}
int main()
{
    pro();
    int Q;
    cin >> Q;
    while(Q--)
	{
        int a, b, t;
        cin >> a >> b >> t;
        if(t == 1)
		{
            process(a, b);
        }
        else
		{
            a = tim(a);
            b = tim(b);
            if(a == b)
			{
                cout << 1 << endl;
            }
            else
			{
                cout << 0 << endl;
            }
        }
    }
}
