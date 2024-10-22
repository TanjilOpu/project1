#include<bits/stdc++.h>
using namespace std;
void login();
void   registration();
void  forgot();
void play();
int main()
{
    cout<<"\n\n\n";
  cout<< " \t\t\t******HOME PAGE***** \n\n";
  cout<< "\t\tPress 7 to start the programme \n\t\tPress 3 to exit the programme\n\n";
    string p; cin>>p;
   system("cls");
  if(p =="7")
  {
      cout<< "Make a choice form the choice list.\n\n";
    cout<< "\t\t\t || Welcome to the login page ||\n\n";
    cout<< "\t\t\t Choice list : \n\n";
    cout<< "\t\t\t *Press 1 to LOGIN\n";
    cout<< "\t\t\t *Press 2 to REGISTRATION \n";
    cout<< "\t\t\t *Press 3 to FORGOT PASSWORD\n";
    cout<< "\t\t\t *Press 4 to EXIT \n\n";
    int choice ;
    cin>>choice;
    cout<<endl;
    switch (choice)
    {
        case 1 :
            login();
            break;
         case 2 :
            registration();
            break;
         case 3 :
            forgot();
            break;
         case 4 :
             {
                 system("cls");
                   cout<< "\n\n\t\tThank You\n\t\t Now you are out from the login page\n\n";
                   main();
            break;
             }
        default :
         system ("cls");
        cout<< "You make the wrong choice\n\n";
        main();
    }
  }
  else if(p=="3")
  {
      system("cls");
      cout<< "\n\n\t\tYou quite the game\n";
      cout<<"\n\n\n";
      return 0;
      return 0;
  }
  else
  {
      cout<<"You make the wrong choice\n";
      main();
  }
}
void login()
{
    int flag;
    string userId,password,id ,pass;
    system("cls");
       cout<< "\t\t\t *****Login Page****\n\n";
    cout<< "Enter the username and password \n\n";
    cout<< "Username   : ";
    cin>> userId;
    cout<<"Password   : ";
    cin>>password;
     ifstream input("record.txt");
     while(input>>id>>pass)
     {
        if(id == userId && pass == password )
        {
            flag = 1;
            system("cls");
        }
     }
        input.close();
        if(flag == 1)
        {
            cout<<userId<< " . Your login is successful \n\nThanks for loging in \n\n";
            cout<< "Do you want to play number guessing game \n\n";
            cout<<"press 1 to yes \npress 2 to no\n\n";
            int  pros ; cin>>pros;
            if(pros==1)
            {
                system("cls");
                play();
            }
            else if(pros == 2)
            {
                system("cls");
                main();
            }
        }
        else
        {
            cout<<"Loging error \n Please check your loging id and login password \n\n";
            main();
        }
     }
void registration()
{
    string ruserId,rpassword,rid,rpass;
    system("cls");
      cout<< "\t\t\t  *****Registration Page******* \n\n";
    cout<<"\t\t Enter the username  : ";
    cin>>ruserId;
    cout<<endl;
    cout<<"\t\t Enter the password : ";
    cin>>rpassword;
    ofstream reg("record.txt", ios::app);
    reg<<ruserId<<" "<<rpassword<<endl;
    system("cls");
    cout<<"\n\n\n";
    system("cls");
    cout<< "Registration is successful  \n\n";
    main();
}
void forgot()
{
    cout<<"\t\t\t *****Password Recover Page******\n\n";
      int press;
       system("cls");
        cout<< "Do you forgot the password ?\n";
    cout<< "Don't worry \n\n press 1 to recover the passwor through userid\n\n";
    cout<< " Press 2 for go to the main menu\n\n";

  cout<< "Enter your choice : ";
    cin>>press;
    cout<<endl;
    switch (press)
    {
          case 1:
    {
        int flag= 0;
        string userId,sId ,spass;
        system("cls");
        cout<<" \n\t\t\t Enter the username  : ";
        cin>>userId;
        ifstream forgt("record.txt");
        while(forgt>>sId>>spass)
        {
            if(sId == userId)
            {
                flag = 1;
            }
        }
        forgt.close();
        if(flag == 1)
        {
            system("cls");
            cout<<"\n\n Your account is found\n";
            cout<<"\n Your password is : "<<spass<<endl;
            main( );
        }
        else
        {
            cout<< "\n\t Sorry ! Your account is not found\n\n";
            main( );
        }
        break;
    }
     case 2:
    {
        system("cls");
        main();
        break;
    }
   default :
    cout<< "wrong choice\nn";
    forgot();
    }
}
void play()
{
     int exit_taka;
    cout<<endl;
    cout<< "                             *** WELCOME TO NUMBER GUESSING GAME  ***            \n"<<endl;
    cout<<endl;
    cout<< "Enter your age : ";
    int age;
    cin>>age;
    cout<<endl;
    if(age<18)
    {
        system("cls");
        cout<< "\n\n \t\tYou can't play casino . \n\t\tYou are under 18 so according to govt. rules you can't play this game. \n\n";
        main();
    }
    cout<<"Are you male or female \n  If you are a male press 1 \n Or if you are a female press any number.\n";
    int gender;
    cin>>gender;
    system("cls");
    string address;
    if(gender==1)
    {
        address = "Sir ";
    }
    else
    {
        address = "Mam ";
    }
    cout<<endl;
    cout<<address<< "Here are the rules for playing the number guessing game........        \n"<<endl;
    cout<< "\n\n\n";
    cout<< "                                    ***/ RULES /***                                                \n\n\n";
    cout<<"\t\t\t1. At first you will be provided 100 chips.       \n\n";
    cout<<"\t\t\t2. You have to set the amount of chips for bet.     \n\n";
    cout<<"\t\t\t3. Then you have to guess a number from 1 to  2.   \n \n";
    cout<<"\t\t\t4. If You guessing number is correct , you will gate 10x chips of you bet chips.\n\n";
    cout<<"\t\t\t5. If you guess the wrong number you will lose your beting chips.    \n\n";
    cout<<"\t\t\t6. You are allowed to play this game if you have minimum 1 chips.   \n\n";
    cout<<endl;
    cout<< "If you want to play you have to accept all the rule \n\n If you are not accepting any of the rule press 0 \n\n Or press 1 to accept the rules     ";
    int permission;

    cin>>permission;
     system("cls");
    cout<<endl;
    if(permission==0)
    {
        cout<<address<< "you cofirmed that you are quiting the game. \n";
        main();
    }
    if(permission == 1)
    {
        cout<<address<< "thanks for accepting the rules. You are in to the game.\n\n";
    int chips =100 ;
    system("cls");
    cout<< address<< " your total balance is     =  "<<chips<< " chips\n\n";
    cout<< "\n\n";
      if(chips == 0)
    {
        cout<< "As you have 0 chips you are now out of this game\n\n";
        main( );
    }
    while(chips>0)
    {
        cout<< " Make a decision : If you don't want to play this game write no \n\n If you want to play this game write  yes  to continue     :  \n\n";

        string decision;
        cin>>decision;
        cout<<"You said  : "<<decision<<endl<<endl;
        cout<< "\n\n";
        if(decision=="no")
        {
            cout<<address<< " you are out of this game        \n\n";
            cout<< address<< " your total balance is     =  "<<chips<< " chips\n\n";
            chips = 0;
            main();
        }
        else if(decision == "yes")
        {
        cout<< "Enter your amount of chips for  betting    ";
        int bet_chips ;
        cin>>bet_chips;
        cout<< "\n\n";
        if(bet_chips>chips)
        {
            cout<< "You are not able to bet this amount of chips because you have only "<<chips<<" chips available right now \n\n";
        }
        if (bet_chips<=chips)
        {
            chips =chips - bet_chips ;

            int casino_number=rand()%2+1;

            cout<< "Enter your guessing number    ";
            int guess_number;
            cin>>guess_number;
            cout<< "\n\n";
            system("cls");
            if(casino_number == guess_number)
            {
                cout<< "Congratulations!!"<<address<<" You make the correct guess.            \n";

                chips = chips+bet_chips*10;
            }
            else
            {
                cout<< "Sorry!! "<<address<<" You make the wrong guess.  \n\n";
            }
            cout<<address<< "Your current chips amount is =  "<<chips<< " chips.\n\n";
            if(chips == 0)
            {
                main();
            }
        }
        }
    }
    }
}