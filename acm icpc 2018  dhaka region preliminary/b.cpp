#include<iostream>
using namespace std;

int main (){
    int r, c, movement = 0;
    int t, n;

    cin>>n;
    for (t=1; t<=n; t++){
        movement = 0;

        cin>>r>>c;

        if (r+2 <= 8){
            if (c+1 <= 8){
                movement++;
            }

            if (c-1 >= 1){
                movement++;
            }
        }

        if (r+1 <= 8){
            if (c+2 <= 8){
                movement++;
            }
            if (c-2 >= 1){
                movement++;
            }
        }

        if (r-1 >= 1){
            if (c+2 <= 8){
                movement++;
            }
            if (c-2 >= 1){
                movement++;
            }
        }

        if (r-2 >= 1){
            if (c+1 <= 8){
                movement++;
            }
            if (c-1 >= 1){
                movement++;
            }
        }

        cout<<"Case "<<t<<": "<<movement<<endl;
    }
    return 0;
}
