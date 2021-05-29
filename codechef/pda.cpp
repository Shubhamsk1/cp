#include <iostream>

struct state
{
    int a[3][3], st[3][3];
};
using namespace std;
int main()
{
    int ns, a, f, l, j, k;
    char ch;
    cout << "Enter the no. of States: ";
    cin >> ns;
    struct state s[ns];
    int st[40];
    int top = 0;
    st[top] = 2;
    //Transitions
    cout << "Enter the respective transition state: \n";
    for (int i = 0; i < ns; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                cout << "(q" << i << ",";
                if (j == 2)
                    cout << "e,";
                else
                    cout << j << ",";
                if (k == 2)
                    cout << "e): ";
                else
                    cout << k << "): ";
                cin >> ch;
                if (ch != '-')
                {
                    s[i].a[j][k] = ch - 48;
                    cout << "stack_top: ";
                    cin >> ch;
                    if (ch != '-')
                        s[i].st[j][k] = ch - 48;
                    else
                        s[i].st[j][k] = 2;
                }
                else
                {
                    s[i].a[j][k] = -1;
                    s[i].st[j][k] = 2;
                }
            }
        }
    }
    cout << "Enter the final states: ";
    cin >> f;
    cout << "Enter the length of string: ";
    cin >> l;
    int p[l];
    cout << "Enter the string: ";
    for (inti = 0; i < l; i++)
    {
        cin >> p[i];
    }
    intcn = 0, c0 = 0;
    for (inti = 0; i < l; i++)
    {

        int t = st[top];
        cn = s[c0].a[p[i]][t];
        if (cn == -1)
            break;
        if (s[c0].st[p[i]][t] != 2)
            st[++top] = s[c0].st[p[i]][t];
        else
            top--;
        c0 = cn;
    }
    if (f == s[cn].a[2][st[top]] && cn != -1)
        cout << "\nString Valid";
    else
        cout << "\nString Invalid";
}