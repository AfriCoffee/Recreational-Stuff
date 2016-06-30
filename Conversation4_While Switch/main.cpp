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
    char choice;         //For general answer
    char A,a,B,b,C,c;    //Answers expected to be given
    bool loopback = true;//for if invalid/wrong answer is given
    do{                  //Entire code in Do-While Loop (for wrong answers)
    
    //Input Data
    cout<<"Hi";
    cout<<" "<<endl;
    cout<<"A - *shyly* h...hi..."<<endl;
    cout<<"B - *enthusiastically* Hi! Who are you?"<<endl;
    cout<<"C - *sneers* Who the hell are you?"<<endl;
    cout<<"Enter A, B, or C to reply."<<endl;
    cin>>choice;
    
    //Process Data
//First Set of Choices
    switch (choice)
        {
        case 'a' :
        case 'A' : {cout<<"Don't be shy! I don't bite!"<<endl;
                            cout<<" "<<endl;
                            cout<<"A - S...sorry...I'm just not too familiar with you..."<<endl;
                            cout<<"B - I didn't think so, I'm just a bit shy, is all."<<endl;
                            cout<<"C - Well no shit Sherlock, you're a computer program!"<<endl;
                            cin>>choice;
                            loopback = false;
                                    
//Second Set of Choices (A)              
                                    switch (choice)
                                    {
                                        
                                        case 'a' :
                                        case 'A' : cout<<"It's okay, I'd like to know more about",
                                                   cout<<"you too!"<<endl;
                                                   loopback=false;        
                                                   break;
                                        case 'b' :
                                        case 'B' : cout<<"Aww, that's alright! You can open up",
                                                   cout<<"to me! Like I said, I don't bite!"<<endl;
                                                   loopback=false;
                                                   break;
                                        case 'c' :
                                        case 'C' : cout<<"You know I've had enough of your",
                                                   cout<<"bullshit jackass..."<<endl;
                                                   loopback=false;          
                                                   break;
                                        default  : "Um...what?? I don't understand...";
                                                   loopback=true;//loops back to very begining (grr...) however useful for when in a text based rpg and user dies...
                                                   break;
                                    }}
                                                   break;
            case 'b' :
            case 'B' : cout<<"I'm just a test program to try out switch functions.",
                            cout<<"Seems like it works!"<<endl;
                            cout<<" "<<endl;
                            cout<<"A - Oh...that's nice..."<<endl;
                            cout<<"B - Really? That's so cool!"<<endl;
                            cout<<"C - Useless pile of junk..."<<endl;
                            cin>>choice;
                            loopback = false;
                            break;
            
            case 'c' :
            case 'C' : cout<<"well the hell with you too, jerk!"<<endl;
                            cout<<" "<<endl;
                            cout<<"A - *flustered* I-I'm sorry! That came out wrong!"<<endl;
                            cout<<"B - *laughs* I'm just messing with you!"<<endl;
                            cout<<"C - *crosses arms and rolls eyes* It was an honest question!"<<endl;
                            cin>>choice;
                            loopback = false;
                            break;
       
                default : cout<<"Um...what? I don't understand..."<<endl;
                loopback=true;
        break;}
    }
    while (loopback);
    //Output Data
    
    
    //Exit Stage Right!
    return 0;
}



