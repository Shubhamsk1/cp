#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
void print(vector<vector<int>> matrix)
{
     for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
// Complete the matrixRotation function below.
void matrixRotation(vector<vector<int>> matrix, int r) {

    while(r--)
    {
        int row=0;
        int col=0;
        int maxrow=matrix.size();
        int maxcol=matrix[0].size();
        while(row<maxrow&&col<maxcol)
        {
            int t=matrix[row][col];
            for(int i=col;i<maxcol-1;i++)
            {
                matrix[row][i]=matrix[row][i+1];
            }
            print(matrix);
            for(int i=row;i<maxrow-1;i++)
            {
                matrix[i][maxcol-1]=matrix[i+1][maxcol-1];
            }
            print(matrix);
            for(int i=maxcol-1;i>col;i--)
            {
                matrix[maxrow-1][i]=matrix[maxrow-1][i-1];
            }
            print(matrix);
            for(int i=maxrow-1;i>row+1;i--)
            {
                matrix[i][col]=matrix[i-1][col];
            }
            
            matrix[row+1][col]=t;
            print(matrix);
            row++;
            col++;
            maxrow--;
            maxcol--;
        }
    }
   
}

int main()
{
    string mnr_temp;
    getline(cin, mnr_temp);

    vector<string> mnr = split(rtrim(mnr_temp));

    int m = stoi(mnr[0]);

    int n = stoi(mnr[1]);

    int r = stoi(mnr[2]);

    vector<vector<int>> matrix(m);

    for (int i = 0; i < m; i++) {
        matrix[i].resize(n);

        string matrix_row_temp_temp;
        getline(cin, matrix_row_temp_temp);

        vector<string> matrix_row_temp = split(rtrim(matrix_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int matrix_row_item = stoi(matrix_row_temp[j]);

            matrix[i][j] = matrix_row_item;
        }
    }
    cout<<"\n";
    matrixRotation(matrix, r);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
