#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int space=n-1;
    int star=1;
    for(int i=1;i<=n;i++,star+=2,space--){
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        for(int j=0;j<star;j++)cout<<"*";
        cout<<endl;
    }

    cout<<endl<<endl;




    int middle_gap = -1;
    int primary_gap = n-1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < primary_gap; j++){
            cout << " ";
        }
        cout << "*";

        for(int j = 0; j < middle_gap; j++){
            cout << " ";
        }
        if(i != 1)  cout << "*";
        middle_gap += 2;
        cout << endl;
        primary_gap--;
    }

    primary_gap =1;
    middle_gap -= 4;
    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j < primary_gap; j++){
            cout << " ";
        }
        cout << "*";
        for(int j = 0; j < middle_gap; j++){
            cout << " ";
        }

        if(i != n-1)    printf("*");
        middle_gap -=2;
        primary_gap += 1;
        cout << endl;
    }


        cout<<endl<<endl;

        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < n/2; j++){
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }

        for(int i = 0; i < n; i++){
            cout << "*";
        }
        cout << endl;
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < n/2; j++){
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }


        cout<<endl<<endl;

            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    if(j == i)  printf("*");
                    else if(n - j + 1 == i) printf("*");
                    else    printf(" ");
                }
                cout << endl;
            }

}
