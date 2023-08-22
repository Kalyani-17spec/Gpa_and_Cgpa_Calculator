#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;


int gpa(int s);
void cgpa();


int main()
{
    system("cls");
    int k;
    sub:
    cout << "Information" << endl;
    cout << "Enter 1 to calculate gpa." << endl;
    cout << "Enter 2 to calcualte cgpa" << endl;
    cin >> k;
    //cout << "\n";
    switch (k){
    case 1:
        gpa(0);
        break;
    
    case 2:
        cgpa();
        break;

    case 3:
        exit(EXIT_SUCCESS);

    default:
        cout << "you entered wrong number!";
        goto sub;
        break;
    }
    
    return 1;
}

int gpa(int q){
    int a;
    cout << "How many subjects you want?"<<endl;
    cin >> a;
    cout << "\n";
    vector<int> credit;
    vector<int> points;
    cout << "Now enter the credits and points.";
    cout << "\n";
    for(int i = 0;i<a;i++){
        int k,m;
        cout << "Enter credits for, subject" << i+1 << ":" << endl;
        cin >> k;
        credit.push_back(k);
        cout << "Enter points for, subject" << i+1 << ":" << endl;
        cin >> m;
        points.push_back(m);
        
        cout << "\n";
    }

    int total_cre = 0;
    int sum = 0;

    for(int i = 0;i<a;i++){
        int q = credit[i] * points[i];
        sum += q;
        total_cre += credit[i];
    }

    cout << "Total Credits: " << total_cre << endl;
    cout << "Total Score: " << sum << endl;
    cout << "Your GPA of semester" << "("<< q+1 << ")" << "is: " << sum/total_cre << endl;
    cout << "\n";
    return sum/total_cre;

}

void cgpa(){
    int a;
    cout << "How many semesters you want?"<<endl;
    cin >> a;
    int sum = 0;

    for(int i = 0;i<a;i++){
        sum += gpa(i);
    }

    cout<<"******** Your CGPA is "<<sum/a<<" **********"<<endl;
    cout << "\n";

    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                cgpa();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              cout <<"\n";
              goto sub;
    }

}


