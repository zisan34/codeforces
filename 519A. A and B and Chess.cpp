#include<iostream>
using namespace std;
int main()
{
    char c;
    int white=0,black=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>c;
            switch(c)
            {
                case 'Q':white+=9; break;
                case 'R':white+=5; break;
                case 'B':white+=3; break;
                case 'N':white+=3; break;
                case 'P':white+=1; break;
                case 'q':black+=9; break;
                case 'r':black+=5; break;
                case 'b':black+=3; break;
                case 'n':black+=3; break;
                case 'p':black+=1; break;
                default: break;
            }
        }
    }
    if(white>black)
        cout<<"White"<<endl;
    else if(white<black)
        cout<<"Black"<<endl;
    else
        cout<<"Draw"<<endl;
    return 0;
}
