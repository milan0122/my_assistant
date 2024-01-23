#include<iostream>
#include<string.h>
#include<windows.h>
#include<bits/stdc++.h>
#include<ctime>
#include<stdlib.h>
#include<iomanip>
using namespace std;
void datetime();

void greetings();
void music();
void talking();
int main()
{
    system("cls");
    string password;
    cout<<"***********************************************************************************************"<<endl;
    cout<<"***********************************************************************************************"<<endl;
    cout<<"============================== Welcome to Milan's Browser======================================="<<endl;
    cout<<"\n\n\t\tEnter your password to enter Browser"<<endl;
    string phrase = "Enter your password to enter Browser";
    string command="espeak  \""+ phrase +"\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    getline(cin,password);

    STARTUPINFO si = {0};
    PROCESS_INFORMATION pi = {0};
    if (password=="milan")
    {
        cout<<"\n******************************************************************************************"<<endl;
        greetings();
            cout<<endl<<"\t\tHow can I help you sir?"<<endl;
            string phrase = "How can I help you sir?";
            string command="espeak  \""+ phrase +"\"";
            const char *charCommand = command.c_str();
            system(charCommand);

       while (1){
           cout<<"\n******************************************************************************************"<<endl;


            cout<<"\t\tEnter your Question ====>"<<endl;
            string ph = "Enter your Question";
            string com="espeak  \""+ ph+"\"";
            const char *charCom = com.c_str();
            system(charCom);

            string command1;
            getline(cin,command1);


            if(command1=="hello")
            {
                cout<<"Hello sir!!!"<<endl;
                string phrase ="Hello Sir";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);

            }

            else if(command1 == "who are you")
            {
                cout<<"\t\t I am personal assistant developed by Milan Dangi in 2022 A.D  and i am able to convert text to speech in English";
                string phrase = "\t\t I am personal assistant developed by Milan Dangi in 2022 A.D  and I am able to convert text to speech in English ";
                 string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
            }
            else if (command1=="open notepad")
            {
                cout<<"opening notepad"<<endl;
                string phrase ="opening notepad";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Windows\\System32\\notepad.exe"),NULL, NULL, NULL,FALSE,NULL,NULL,NULL,&si, &pi );
            }
              else if (command1=="open msword")
            {
                cout<<"opening Microsoft Word "<<endl;
                string phrase ="opening Microsoft Word";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\Office16\\WINWORD.exe"),NULL, NULL, NULL,FALSE,NULL,NULL,NULL,&si, &pi );
            }
              else if (command1=="open msexcel")
            {
                cout<<"opening Excel"<<endl;
                string phrase ="opening excel";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\Office16\\EXCEL.exe"),NULL, NULL, NULL,FALSE,NULL,NULL,NULL,&si, &pi );
            }
              else if (command1=="open powerpoint")
            {
                cout<<"opening powerpoint"<<endl;
                string phrase ="opening powerpoint";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\Office16\\POWERPOINT.exe"),NULL, NULL, NULL,FALSE,NULL,NULL,NULL,&si, &pi );
            }
             else if (command1=="open mspaint")
            {
                cout<<"opening ms paint"<<endl;
                string phrase ="opening ms paint";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"),NULL, NULL, NULL,FALSE,NULL,NULL,NULL,&si, &pi );
            }
             else if (command1=="open google")
            {
                cout<<"opening google search engine"<<endl;
                string phrase ="opening google search engine";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                system("start https://www.google.com/");
            }
             else if (command1=="open youtube")
            {
                cout<<"opening Youtube"<<endl;
                string phrase ="opening youtube";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                system("start https://www.youtube.com/");

            }
             else if (command1=="open photos")
            {
                cout<<"opening photos"<<endl;
                string phrase ="opening AI generate photo";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                ShellExecute(NULL,"open","C:\\Users\\samir\\Downloads\\AI-image-generator.JPG",NULL,NULL,SW_NORMAL);
            }
             else if (command1=="open nmnotes")
            {
                cout<<"opening Numerical method Notes"<<endl;
                string phrase ="opening Numerical method Notes";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                ShellExecute(NULL,"open","C:\\Users\\samir\\Downloads\\nm-up-2.pdf",NULL,NULL,SW_NORMAL);
            }
              else if (command1=="open vedio")
            {
                cout<<"opening vedio"<<endl;
                string phrase ="opening vedio";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                ShellExecute(NULL,"open","C:\\Users\\samir\\Downloads\\hanuman.mp4",NULL,NULL,SW_NORMAL);
            }
            else if(command1=="play music")
            {

                music();
            }
            else if(command1=="can you talk to me ")
            {

                talking();
            }
            else if(command1 =="what is time now")
            {
                datetime();

            }
            else if(command1=="close browser")
            {
                cout<<"closing Browser"<<endl;
                string phrase = "Closing Browser";
                string command="espeak  \""+ phrase +"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                system("TASKKIL/1M chrome.exe /F");
            }
               else if(command1=="bye")
                {
                    cout<<"Bye Bye Sir, Thank you so much sir for contacting me see you soon"<<endl;\
                    string phrase = "Bye Bye Sir, Thank you so much sir for contacting me see you soon";
                    string command="espeak  \""+ phrase +"\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if(command=="shutdown")
                {
                    cout<<"Going to shutdown your computer"<<endl;
                    string phrase = "Going to shutdown your computer";
                    string command="espeak  \""+ phrase +"\"";
                   const char *charCommand = command.c_str();
                   system(charCommand);
                   system("C:\\Windows\\System32\\shutdown /s");
                }
            else{
                    cout<<"Your command is incorrect, please give defined command"<<endl;
                    string phrase = "Your command is incorrect, please give defined command";
                    string command="espeak  \""+ phrase +"\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
            }
        }
    }
    return 0;
}
void music()
{
 int choice;
 cout<<"enter the type of language of music::\n 1English\n 2 Hindi\n 3 Nepali\n 4 exit\n";
 string phrase ="enter the type of language of music 1 English 2 Hindi 3 Nepali 4 exit";
 string command="espeak  \""+ phrase +"\"";
 const char *charCommand = command.c_str();
 system(charCommand);
 do {
    cin>>choice;
    if(choice==1)
    {
        cout<<"Searching English Songs"<<endl;
        string phrase1 ="searching English songs";
        string command1="espeak  \""+ phrase1 +"\"";
        const char *charCommand1 = command1.c_str();
        system(charCommand1);

    }
     else if (choice==2){
        cout<<"Searching Hindi songs"<<endl;
        string phrase2 ="Searching Hindi Songs";
        string command2="espeak  \""+ phrase2 +"\"";
        const char *charCommand2 = command2.c_str();
        system(charCommand2);
        ShellExecute(NULL,"open","English_songs.m4a",NULL,NULL,SW_NORMAL);
        }
    else if(choice==3)
    {
        cout<<"Searching Nepali songs";
        string phrase3 ="Searching Nepali Songs";
        string command3="espeak  \""+ phrase3 +"\"";
        const char *charCommand3 = command3.c_str();
        system(charCommand3);
    }

    else if(choice ==4){
        exit(0);
        string phrase ="Playing Song is Stop if you want to listen give command ";
        string command="espeak  \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else{
        cout<<"Please select appropriate song"<<endl;

    }

 } while(choice!=4);
}
void datetime()
{

    time_t now = time(0);
    char *dt
    = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}
void greetings()
{
 time_t now = time(0);
 //current date  and time base on your system timezone
 tm *time  = localtime(&now);
 if(time-> tm_hour<12){
        cout<<"Good Morning Sir!!!";
        string phrase = "Good Morning Sir!!!";
        string command="espeak  \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
 }
 else if(time->tm_hour>=12&&time->tm_hour<=16)
 {
        cout<<"Good Afternoon Sir!!!";
        string phrase = "Good Afternoon Sir";
        string command="espeak  \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
 }
 else if(time->tm_hour>=16&&time->tm_hour<24)
 {
        cout<<"Good Evening Sir!!!";
        string phrase = "Good Evening Sir";
        string command="espeak  \""+ phrase +"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
 }

}
void talking()
{

    string command;
    while (1){
            cout<<"Start your conversation"<<endl;
            string phrase ="Start your conversation ";
            string command="espeak  \""+ phrase +"\"";
            const char *charCommand = command.c_str();
            system(charCommand);

            getline(cin,command);
            cin.ignore();


            if(command=="can i call you baby")
           {
            cout<<"yes sure you can call me anything";
            string phrase ="yes sure you can call me anything ";
            string command="espeak  \""+ phrase +"\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
        else if (command=="can you talk in  romantic ")
        {
            cout<<"yes sure"<<endl;
        }
        else if(command=="Do you love me")
        {

            cout<<"yes baby i love you from my feeling of heart"<<endl;
        }

            else{     cout<<"Your command is incorrect, please give defined command"<<endl;
                    string phrase = "Bye Bye Sir, Thank you so much sir for contacting me see you soon";
                    string command="espeak  \""+ phrase +"\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
            }
}
}
