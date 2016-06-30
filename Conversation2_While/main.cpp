/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on August 20, 2014, 2:45 PM
 //Purpose: First Program
 */

//System Libraries
#include <iostream>
#include <istream> //Imput/Output Stream Library
using namespace std; //Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables Here, NO DOUBLES
    char choice;//If you have a variety
    char A,a,B,b,C,c;
    //Input Data
    cout<<"Hi";
    cout<<" "<<endl;
    cout<<"A - *shyly* h...hi..."<<endl;
    cout<<"B - *enthusiastically* Hi! Who are you?"<<endl;
    cout<<"C - *sneers* Who the hell are you?"<<endl;
    cout<<"Enter A, B, or C to reply."<<endl;
    cin>>choice;
    
    //Process Data
    while (choice==A||a)
        {
        cout<<"Don't be shy! I don't bite!"<<endl;
        cout<<" "<<endl;
        cout<<"A - S...sorry...I'm just not too familiar with you..."<<endl;
        cout<<"B - I didn't think so, I'm just a bit shy, is all."<<endl;
        cout<<"C - Well no shit Sherlock, you're a computer program!"<<endl;
        cin>>choice;
        }
    while (choice!=A||a||B||b||C||c)
       {
        cout<<"Um...what? I don't understand..."<<endl;
        cout<<"Enter A, B, or C to reply."<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<"Hi";
        cout<<" "<<endl;
        cout<<"A - *shyly* h...hi..."<<endl;
        cout<<"B - *enthusiastically* Hi! Who are you?"<<endl;
        cout<<"C - *sneers* Who the hell are you?"<<endl;
        cin>>choice;
       }
    //Output Data
    
    
    //Exit Stage Right!
    return 0;
}



