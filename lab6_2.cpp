#include<iostream>
#include<cstring>
#include<sstream> 
using namespace std;
int main()
{
string yourname,ID,year,movie,day,word;
int num,sizeS;
cout<<"Fahsai: Sawadee ka...Can you tell me your name?";
cout<<"\n?????: ";
getline(cin,yourname);
cout<<"Fahsai: Wow!!! "<< yourname<< " is a really cool name.\n";
cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
cout<<yourname<<": ";
getline(cin,ID);
sizeS=ID.size()-7;
for(int i=0;i<sizeS;i++)
{
    year+=ID[i];
}
 stringstream geek(year); 
geek>>num;
num=num+2500;
cout<<"Fahsai: I think you may be GEAR "<<num-2512 <<". I have a free movie ticket for you.\n";
cout<<"Fahsai: Let's go to the cinema together!!!\n";
cout<<"Fahsai: What movie do you want to watch?\n";
cout<<yourname<<": ";
getline(cin,movie);
cout<<"Fahsai: So....which day are you free to go with me?\n";
cout<<yourname<<": ";
getline(cin,day);
cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<< " with you.\n";
cout<<yourname<<": ";
getline(cin,word);
cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
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