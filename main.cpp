#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
   srand(time(0));
   int guess,num ;
   bool guess_flag = false ;
   num = rand() %100 ;
   char c;
    cout<<endl;
    cout<<"                    **** Welcome in guess challenge game ****"<<endl<<endl;
    cout<<"Write i if needed Instructions "<<endl;
    cout<<"Write s to start play "<<endl<<endl;
    cin >> c ;

    if (c == 'i' )
    {

    cout <<"Instructions of game : you guess number between 0:100 "<<endl<<endl;
cout<<"if you get :"<<endl;
    cout <<"Too far : you far at least 20 number "<<endl;
    cout <<"Higher : you need guess higher number "<<endl;
    cout <<"Lower : you need guess lower number "<<endl<<endl;
    Sleep(2000);
    cout << "NOTICE !!!!"<<endl;
    cout << "You have 8 Attempts be careful !!"<<endl<<endl;
    cout<<"           *******************             "<<endl;
     Sleep(3000);
    }
    else{
    }

    cout <<"   Readyyyy  " <<endl;
    Sleep(1500);
    cout <<"Enter your name : ";
    char arr[20];
    cin>> arr ;
    cout<<endl<<endl;

    cout<<"OK dear "<<arr<<" the game starting in ...."<<endl;
    Sleep(2000);
    std ::cout<<"3"<<endl;
    Sleep(1000);
     std ::cout<<"2"<<endl;
    Sleep(1000);
     std ::cout<<"1"<<endl;
    Sleep(1000);

    cout<<"GO!!!"<<endl;

  for(int i =0 ; i< 8 ; i++){
    cin >> guess;

    if( abs(guess - num ) > 20 ){
        cout<<"too far"<<endl<<endl;
    }
    else if (guess< num){
        cout<<"higher"<<endl<<endl;
    }
     else if (guess > num){
        cout<<"lower"<<endl<<endl;
    }
    else if (guess == num){
        cout<<"Congratulations !! "<<arr<<endl;
        cout<<"you get the number after "<<i<<"guess."<<endl;
        guess_flag = true ;
        break;
    }
   }
   if(guess_flag == false){
    cout<<"Try again later"<<endl;

    cout<<"the number is "<<num;
   }

}\
