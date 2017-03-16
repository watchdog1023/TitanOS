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
void boot();
void tier1();

//global variables
string task;

int main()
{
    string code;
    cout << "Please enter Director code:" << endl;
    cin >> code;
    if(code == "2046")
        {
            cout << "Welcome Tier II Director,Steven" << endl;
            boot();
        }
    if(code == "2109")
    {
     cout << "Welcome Tier II Director,Serena" << endl;
     boot();
    }
    if(code == "1023")
        {
            cout << "Welcome Tier 1 Opperator" <<endl;
           tier1();
        }
     if(code == "1738")
     {
         cout << "Welcome Tier II Director,Sheldon" << endl;
         boot();
     }
}

void boot()
{
            cout << "System starting up" << endl;
            sleep(2);
            cout << "Counting all AI's" << endl;
            cout << "'Betty' = [Slave]" << endl;
            sleep(2);
            cout << "................." << endl;
            sleep(2);
            cout << "'Sid' = [Slave]" << endl;
            sleep(2);
            cout << "................." << endl;
            sleep(2);
            cout << "'Alexa' = [Slave]" << endl;
            sleep(2);
            cout << "................." << endl;
            sleep(2);
            cout << "'Harley' = [Slave]" << endl;
            sleep(2);
            cout << "................." << endl;
            sleep(2);            
            cout << "Commander Lexa = [Online]" << endl;
            sleep(2);
            system("clear");
            cout << "I am Lexa" << endl;
            sleep(2);            
            cout << "I am the TitanOS Commander" << endl;
            lexa();
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
//this is a temp statement
                    cout << "This will do nothing" << endl;
//this is a temp statement                    
//                    system("cd ..");
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
                    cout << "They Live another day." << endl;
                    system("clear");
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
            cin >> sure;
            if(sure == "y")
            {
                cout <<"This feature is no ready because this is a reusable build"<<endl;
                //system("cd /");
                //system("rm -vr /");
            }
            if(sure != "y")
            {
                system("clear");
                lexa();
            }
         }
    
    }

void tier1()
    {
        cout << "Activing root mode" << endl;
        sleep(2);
        cout << "Welcome Tier 1 Opperator,why have you logged in?" << endl;
        
    }