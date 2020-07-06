#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void TOH (int d, char tower1, char tower2, char tower3 )
{
    if(d==1)
    {
        cout << "\nShift top disk from tower " << tower1 << " to tower" << tower2;
        return;
    }

    TOH (d-1, tower1, tower3, tower2); //recursive function call
    cout << "\nShift top disk from tower " << tower1 << " to tower" << tower2;

    TOH(d-1, tower3, tower2, tower1); //recursive function call
}

int main()
{
    int disk;
    char name[20];



    cout<<"\n\n";
    cout<< "Hello To Tower of Honai Problem demo ! "<< endl;
    cout<<"\n\n";

   

    cout << "Enter your name : ";
    cin >> name;

    cout << "\nHello "<< name <<" how many disks do you have ?"<< endl;
    cin >> disk;
    cout << "\n";

    if (disk < 1)
    {
        cout << name << "! I think there are no disks to shift";
    }
    else
    {
        cout << "\nThere are " << disk << " disks in tower 1\n";
    }

    TOH(disk, '1', '2', '3');
    cout << "\n\n" << disk << " disks in tower 1 are shifted to tower 2";


    cout << "\n\n\n"<< name << " try out these steps to complete your game !";

    

    cout <<"\n\n";
    cout <<"\nThankyou " << name << " for using this software!"; 
    cout <<"\n\n";

    getch();
    return 0;
    
}
