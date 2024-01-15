#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

//Global Variables
string fname,lname,phone_num;



//Functions 
void addContact();
void searchContact();
void help();
void self_exit();
bool checkDigits(string);
bool checkNumbers(string);

int main (){
    short int choice ;
    system("cls");
    system("color 0A");
    cout<<"\n\n\n\t\t\tContact Management.";
    cout<<"\n\n\t 1. Add Contact\t 2. Search Contact\t 3. Help\t 4. Exit\n\t > ";
    cin>>choice;

    switch(choice){
        case 1:
            addContact();
            break;
        case 2: 
            searchContact();
            break;
        case 3:
            help();
            break;
        case 4:
            self_exit();
            break;
        default :
        cout<<"\n\n\t Invalid Input !";
        cout<<"\n\n\tPress Any Key To Continue..";
        getch();
        main();
    }
    return 0;
}

void addContact() {
    ofstream phone("number.txt", ios::app);
    system("cls");
    cout<<"\n\n\n\t\t Enter First Name";
    cin>>fname;
    cout<<"\n\n\n\t\t Enter Last Name";
    cin>>lname;
    cout<<"\n\n\n\t\t Enter 10 Digit Phone Number";
    cin>>phone_num;
    
    if(checkDigits(phone_num)){
        if(checkNumbers(phone_num)){
            if(phone.is_open()){
                phone<<fname<<" "<<lname<<" "<<phone_num<<endl;
                cout<<"\n\tContact Info Saved Successfully !";
            }
            else {
                cout<<"/n/t Error Opening File !";
            }
        }
        else {
            cout<<"\n\n\n\t\t Enter a valid phone number";
        }
    }
    else {
        cout<<"\n\n\n\t\t Phone number must contain 10 digits";
    }
    phone.close();
}

void searchContact(){
    bool found = false;
    ifstream myfile("number.txt");
    string keyword;
    cout<<"\n\tEnter name to search";
    cin>>keyword;


    while(myfile >> fname >> lname >> phone_num){
        if(keyword == fname|| keyword == lname){
            system("cls");
            cout<<"\n\n\n\tContact details... ";
            cout<<"\n\n\n\tFirst Name: "<<fname;
            cout<<"\n\n\n\tLast Name: "<<lname;
            cout<<"\n\n\n\tPhone Number: "<<phone_num;
            found = true;
            break;
        }
    }
    if(found == false){
        cout<<"\n\tContact not found ";
    }

}

void help(){
    cout<<"\n\n\n\t\t This displays help";
}

void self_exit(){
    system("cls");
    cout<<"\n\n\n\t\t Thanks For Using !";
    exit(1);
}

bool checkDigits(string x){
    if(x.length()==10){
        return true;
    }
    else {
        return false;
    }
}

bool checkNumbers(string x){
    bool check = true;


    for(int i = 0; i<x.length() ; i++){
        if(!(int(x[i])<=57 && int(x[i])>=48)){
            check = false;
            break;
        }   
    }


    if(check){
        return true;
    }
    else {
        return false;
    }
}