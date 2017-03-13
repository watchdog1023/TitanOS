//TitanOS Kernel AI(AI commander)
//build lexa_come_treekru
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
//#include <dos.h>
//for sleep fuction
#include <conio.h> 
//C libs to use system function
#include<stdio.h>
#include<stdlib.h>
//mp3 libs
//#include<Mmsystem.h>
//#include<mciapi.h>
//#include<Windows.h>
//#pragma comment(lib, "Winmm.lib")

using namespace std;

int main()
{
    string code;
    cout << "Please enter Director code:" << endl;
    cin >> code;
    if(code != "1023")
        {
            cout << "You are a outsider" << endl;
            cout << "Use one of the base AI's" << endl;
            sleep(3);
            system("exit");
        }
    
    if(code == "1023")
        {
            cout << "'Betty' = [Slave]" << endl;
            cout << "................." << endl;
            sleep(2);
            cout << "'Sid' = [Slave]" << endl;
            cout << "................." << endl;
            sleep(2);
            cout << "'Alexa' = [Slave]" << endl;
            cout << "................." << endl;
            sleep(2);
            cout << "'Harley' = [Slave]" << endl;
            cout << "................." << endl;
            sleep(2);            
            cout << "Commander Lexa = [Online]" << endl;
            sleep(2);
            cout << "I am Lexa" << endl;
            cout << "I am the TitanOS Commander" << endl;
            cout << "What task must I preform?" << endl;
            
        }
}