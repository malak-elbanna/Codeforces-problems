#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool IsLoggedIn() 
{
    string username, password, un, pw;
    cout << "Enter username: " <<endl;
    cin >> username;

    cout << "Enter password: " <<endl;
    cin >> password;

    ifstream read("c:\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;

    cout << "Choose 1) Sign up 2) Sign in" << endl;
    cin >> choice;
    if (choice == 1)
    {
        string username, password;
        cout << "Enter username "<<endl;
        cin >> username;

        cout << "Enter password "<<endl;
        cin >> password;

        ofstream file;

        file.open("c:\\"+username+".txt");
        file << username<<"\n"<<password<<endl;
        file.close();

        main(); 
    }
    else if (choice == 2)
    {
        bool user_status = IsLoggedIn();
        if (user_status)
        {
            cout << "Login successful" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout << "Login failed\n Register first" << endl;
            system("PAUSE");
            return 0;
        }
    }
}