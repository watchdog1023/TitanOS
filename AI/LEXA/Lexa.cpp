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

//Prototypes
void lexa();

//global variables
string task;

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
            sleep(2);            
            cout << "I am the TitanOS Commander" << endl;
            lexa();
        }
}

void lexa()
    {
        cout << "What task must I preform?" << endl;
        sleep(2);        
        cout << "[kill] the Others"<<endl;
        cout <<"[rouge] Protocol"<<endl;
        cout <<"The [flame] is dead"<<endl;
        cout <<"[purge] system"<<endl;
        cin >> task;
        if(task == "kill")
         {
            string sure;
            cout <<"Are you sure they deserve to die?"<<endl;
            cin >> sure;
            if(sure == "y")
                {
                    system("cd ..");
                    system("rm betty/");
                    sleep(2);
                    cout << "AI 'Betty' is dead" << endl;                    
                    system("rm alexa/");
                    sleep(2);
                    cout << "AI 'Alexa' is dead" << endl;
                    system("rm sid/");
                    sleep(2);
                    cout << "AI 'Sid' is dead" << endl;
                    system("rm harley/");
                    sleep(2);
                    cout << "AI 'Harley' is dead" << endl;
                    sleep(2);
                    system("clear");
                    lexa();
                }
            if(sure != "y")
                {
                    cout << "" << endl;
                    lexa();
                }

        }  
        if(task == "rouge")
         {
            cout <<""<<endl;

         }
        if(task == "flame")
         {
            cout <<""<<endl;
         }
        if(task == "purge")
         {
            string sure;
            cout << "Are you sure?" << endl;
            cin >> sure
            if(sure == "y")
            {
                cout <<"This feature is no ready because this is a reusable build"<<endl;
                //system("cd /");
                //system("rm -vr /");
            }
            if(sure != "y")
            {
                lexa();
            }
         }
    
    }