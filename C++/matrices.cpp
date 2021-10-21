#include <bits/stdc++.h>
using namespace std;

class Diagonal
{
    int n, *a;

public:
    Diagonal()
    {
        n = 2;
        a = new int[2];
    }
    Diagonal(int n)
    {
        this->n = n;
        a = new int[n];
    }

    void set(int i, int j, int x)
    {
        if (i == j)
            a[i - 1] = x;
    }

    int get(int i, int j)
    {
        if (i == j)
            return a[i - 1];
        return 0;
    }

    void display()
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == j)
                    cout << a[i-1] << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }
    ~Diagonal()
    {
        delete[] a;
    }
};

class LowerTriangle
{
    int n, *a;

public:
    LowerTriangle()
    {
        n = 2;
        a = new int[3];
    }
    LowerTriangle(int n)
    {
        this->n = n; //number of non-zero elements inf LT matrix
        a = new int[n * (n + 1) / 2];
    }

    void rm_set(int i, int j, int x)
    {
        if (i >= j)
        {
            int index = ((i * (i - 1)) / 2) + j - 1; //row major formula to access matrix from 1D array
            a[index] = x;                            //this can be derived after plotting array row-wise
        }
    }

    void cm_set(int i, int j, int x)
    {
        if (i >= j)
        {
            int index = n * (j - 1) - ((j - 1) * (j - 2)) / 2 + i - j; //column major formula to access matrix from 1D array
            a[index] = x;                                              //this can be derived after plotting array column-wise
        }
    }

    int rm_get(int i, int j)
    {
        if (i >= j)
        {
            int index = ((i * (i - 1)) / 2) + j - 1;
            return a[index];
        }
        else
        {
            return 0;
        }
    }

    int cm_get(int i, int j)
    {
        if (i >= j)
        {
            int index = n * (j - 1) - ((j - 1) * (j - 2)) / 2 + i - j;
            return a[index];
        }
        else
        {
            return 0;
        }
    }

    void display(bool row)
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i >= j)
                {
                    if (row)
                        cout << rm_get(i, j) << " ";
                    else
                        cout << cm_get(i, j) << " ";
                }
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }
    ~LowerTriangle()
    {
        delete[] a;
    }
};

class Symmetric
{
    int n, *a;

public:
    Symmetric()
    {
        n = 2;
        a = new int[3];
    }
    Symmetric(int n)
    {
        this->n = n;
        a = new int[n * (n + 1) / 2];
    }

    void sym_rm_set(int i, int j, int x)
    {
        if (i >= j)
        {
            int index = ((i * (i - 1)) / 2) + j - 1;
            a[index] = x;
        }
    }

    int sym_rm_get(int i, int j)
    {
        if (i >= j)
        {
            int index = ((i * (i - 1)) / 2) + j - 1;
            return a[index];
        }
        else
        {
            int index = ((j * (j - 1)) / 2) + i - 1; //swapped i and j for j>i*
            return a[index];
        }
    }

    void display()
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cout << sym_rm_get(i, j) << " "; //removed if condition
            }
            cout << endl;
        }
    }
    ~Symmetric()
    {
        delete[] a;
    }
};

class TriDiagonal
{
    int n, *a;

public:
    TriDiagonal()
    {
        n = 2;
        a = new int[4];
    }
    TriDiagonal(int n)
    {
        this->n = n;
        a = new int[3 * n - 2];
    }

    void tri_set(int i, int j, int x)
    {
        if (i - j == -1) //lower band
        {
            int index = i - 2;
            a[index] = x;
        }
        else if (i - j == 0) //main diagonal
        {
            int index = n - 1 + i - 1;
            a[index] = x;
        }
        else if (i - j == 1) //upper band
        {
            int index = 2 * n - 1 + i - 1;
            a[index] = x;
        }
    }

    int tri_get(int i, int j)
    {
        if (i - j == -1) //lower band
        {
            int index = i - 2;
            return a[index];
        }
        else if (i - j == 0) //main diagonal
        {
            int index = n - 1 + i - 1;
            return a[index];
        }
        else if (i - j == 1) //upper band
        {
            int index = 2 * n - 1 + i - 1;
            return a[index];
        }
        // else
        //     return 0;
    }

    void display()
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (abs(i - j) <= 1)
                    cout << tri_get(i, j) << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }
    ~TriDiagonal()
    {
        delete[] a;
    }
};

class Toeplitz //all slant elements are same
{
    int n, *a;

public:
    Toeplitz()
    {
        n = 2;
        a = new int[3];
    }
    Toeplitz(int n)
    {
        this->n = n;
        a = new int[2 * n - 1];
    }

    void toe_set(int i, int j, int x)
    {
        if (j >= i)
        {
            int index = j - i; //first upper triangular(row elements) are stored
            a[index] = x;
        }
        else
        {
            int index = n + i - j - 1; //then after index n lower triangular(column elements) are stored
            a[index] = x;
        }
    }

    int toe_get(int i, int j)
    {
        if (j >= i)
        {
            int index = j - i;
            return a[index];
        }
        else
        {
            int index = n + i - j - 1;
            return a[index];
        }
    }

    void display()
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cout << toe_get(i, j) << " ";
            }
            cout << endl;
        }
    }
    ~Toeplitz()
    {
        delete[] a;
    }
};

int main()
{
while(true)
{
    int d;
    cout << "Enter Dimension ";
    cin >> d;
    cout << "Which matrix do you want to be displayed?\n";
    cout << "1. Diagonal Matrix\n";
    cout << "2. Lower Tiangular Matrix\n";
    cout << "3. Symmetric Matrix\n";
    cout << "4. Tridiagonal Matrix\n";
    cout << "5. Toeplitz Matrix\n";
    cout << "6. Exit\n>>>>";
    int ch;
    cin >> ch;

    if (ch == 1)
    {
        Diagonal dm(d);
        int x;
        cout << "Enter all elements of matrix\n";
        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                cin >> x;
                dm.set(i, j, x);
            }
        }
        cout << '\n';
        dm.display();
    }

    else if (ch == 2)
    {
        LowerTriangle lt(d);
        int x;
        bool choice;
        cout << "Press 1 for row major mapping 0 for column major mapping>>>";
        cin >> choice;

        cout << "Enter all elements of matrix\n";
        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                cin >> x;
                if (choice)
                    lt.rm_set(i, j, x);
                else
                    lt.cm_set(i, j, x);
            }
        }
        cout << '\n';
        lt.display(choice);
    }

    /*
                        // ***IMPORTANT NOTE***
    formulas for upper triangular(condition i<=j) matrix are similar to lower triangular
    two differences: 1. i and j are swapped  
    2. row major and column major formulae are swapped
    */

    else if (ch == 3)
    {
        Symmetric sym(d);
        int x;
        cout << "Enter all elements of matrix\n";
        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                cin >> x;
                sym.sym_rm_set(i, j, x);
            }
        }
        cout << '\n';
        sym.display();
    }

    else if (ch == 4)
    {
        TriDiagonal tri(d);
        int x;
        cout << "Enter all elements of matrix\n";
        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                cin >> x;
                tri.tri_set(i, j, x);
            }
        }
        cout << '\n';
        tri.display();
    }

    else if (ch == 5)
    {
        Toeplitz toe(d);
        int x;
        cout << "Enter all elements of matrix\n";
        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                cin >> x;
                toe.toe_set(i, j, x);
            }
        }
        cout << '\n';
        toe.display();
    }

    else
        break;
}

    return 0;
}