// vytvor tabulku z hviezdiciek
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int stlpce, riadky,prazdnota, c=1,k;
    cout<<"Zadaj pocet riadkov"<<endl;
    cin>>riadky;
    cout<<"Zadaj pocet stlpcov"<<endl;
    cin>>stlpce;
    prazdnota=stlpce-2;

    for (int j=1; j<=riadky; j++)
    {
        cout<<"\n";


        if((c>1)||(c<stlpce)){

            cout<<"*";
        }

        if((c==1)||(c==stlpce)){
        for(int i=1;i<=stlpce;i++)
        {
            cout<<"*";
        }
        }
        /*if((c>1)||(c<stlpce)){

            cout<<" ";
        }*/
        c++; //neuveritelne wow
    }

    return 0;
}
