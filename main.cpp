#include<iostream>
using namespace std;

int space[3][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int row;
int column;
char token= 'x';

void functionone{

    string n1 ;
    string n2 ;
    cout<<"first player \n";
    getline(cin, n1);
    cout<<"second player : \n";
    getline(cin, n2);
    cout<<n1<<" play first \n";

    cout<<"     |     |    \n";
    cout<<" "<<space[0][0]<<"   | "<<space[0][1]<<"   | "<<space[0][2]<<"\n";
    cout<<"_____|_____|_____\n";
    cout<<"     |     |    \n";
    cout<<" "<<space[1][0]<<"   | "<<space[1][1]<<"   | "<<space[1][2]<<"\n";
    cout<<"_____|_____|______\n";
    cout<<"     |     |    \n";
    cout<<" "<<space[2][0]<<"   | "<<space[2][1]<<"   | "<<space[2][2]<<"\n";
    cout<<"     |     |    \n";

}
void functionTwo{
    int digit;
    if (token=='x'){
        cout<<n1<<"please enter";
        cin>>digit;
    }
    if (token=='0'){
        cout<<n2<<"please enter";
        cin>>digit;
    }
    if (digit==1){
        row=0;
        column=0;
    }
    if (digit==2){
        row=0;
        column=1;
    }
    if (digit==3){
        row=0;
        column=2;
    }if (digit==4){
        row=1;
        column=0;
    }if (digit==5){
        row=1;
        column=1;
    }if (digit==6){
        row=1;
        column=2;
    }if (digit==7){
        row=2;
        column=0;
    }if (digit==8){
        row=2;
        column=1;
    }if (digit==9){
        row=2;
        column=2;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    if (token=='x' && space[row][column] !='x' && space[row][column] !='0'){
        space[row][column]='x';
        token='0';
    }
    else if (token=='0' && space[row][column] && space[row][column] !='0'){
        space[row][column]='0';
        token='x';
    }
    else {
        cout<<"these is no empty space!"<<endl;
        functionTwo();
    }

    bool functionThree(){
        for (int i=0;i<3;i++){
            
        }
    }

    


}