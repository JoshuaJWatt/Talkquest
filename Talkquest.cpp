#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;

class cha_cla
{
    public:
    string nam;
    int exp;
    int lvl = 0;
    vector<int> points = {0, 10, 20, 50, 100, 150, 200, 500, 1000, 1500, 2000, 3000, 10000};
    vector<string> canned = {"Elf Stranger: Nice to hear it.\n", "Elf Stranger: Really?\n", "Elf Stranger: Tell me more.\n", "Elf Stranger: You go girlfriend\n", "Elf Stranger: Totes emosh\n", "Elf Stranger: The important thing is you tried\n", "Elf Stranger: Wow, that's so insightful :^)\n"};

    string choose_string (vector<string> pickvec)
    {
            int random_index = rand() % pickvec.size();
            string result_str;
            result_str = pickvec[random_index];
            return result_str;
    }
    string incr ()
    {
        int rm = rand() % 9 + 1;
        exp += rm;
        string upd8;
        upd8 = "You have gained " + std::to_string(rm) + " experience point(s) and now have " + std::to_string(exp) +". ";
        return upd8;
    }
    string intera ()
    {
        string vo;
        cout << nam << ": ";
        cin >> vo;
        cout << choose_string(canned) << endl;
        cout << incr() << endl;
        if (points[lvl]<exp )
        {
            lvl++;
            cout << nam << " gained a level and is now level " << lvl << "!";
        }
        cout << endl << endl;
        // intera();
    //    cout << "You have gained" << incr() << " experience points" << endl;
    return(vo);
    };
}cha;


int main ()
{
    cout << "Talkquest 0.1.1 - Josh Edition \n'I want a game that fufills my fantasy of rewarding all social interaction with no upkeep required.' - Conal\n\nEnter your name:"  << std::endl;
    cin >> cha.nam;
    cout << "\nElf Stranger: Hello " << cha.nam << ". How are you today?\n";

    while(true){
    cout << cha.intera() << endl;
    }

    return 1;
}
