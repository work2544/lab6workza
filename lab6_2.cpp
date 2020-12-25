#include <iostream>
#include <string>
using namespace std;

void MYchat(string name){
    cout << name << ": ";
}

int main(){
    string username,movie,dapp,ans;
    int id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?";
    cout << "\n?????: ";
    getline(cin,username);
    cout << "Fahsai: Wow!!! "<< username <<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    MYchat(username);
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<< (id/10000000)-12  <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    MYchat(username);
    getline(cin,movie);

    cout << "Fahsai: So....which day are you free to go with me?\n";
    MYchat(username);
    getline(cin,dapp);

    cout << "Fahsai: "<< dapp <<"....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n";
    MYchat(username);
    getline(cin,ans);

    cout << "Fahsai: 555+ see you "<< dapp <<". Bye Bye \\(^ ^)/";
    return 0;
}
/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Prayuth-chan
Fahsai: Wow!!! Prayuth-chan is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Prayuth-chan: 550610789
Fahsai: I think you may be GEAR 43. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Prayuth-chan: Demon slayer
Fahsai: So....which day are you free to go with me?
Prayuth-chan: Friday the 13th
Fahsai: Friday the 13th....that is OK!!! I'm looking forward to watching Demon slayer with you.
Prayuth-chan: We will do as we promised, it’ll take not too long...
Fahsai: 555+ see you Friday the 13th. Bye Bye \(^ ^)/
*/