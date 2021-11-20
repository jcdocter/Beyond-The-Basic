#include "npc.h"
#include "elf.h"
#include "orc.h"
#include "inventory.h"

using namespace std;

int main(){
   NPC* npc = new NPC();
   Elf* elf = new Elf();
   Orc* orc = new Orc();

   npc->addToInventory("pokeball");
    npc->addToInventory("bonkers");


    cout <<"Elf name is: " << elf->GetName() << " and it's strength is: " << elf->GetStrength() << " And it's spacialtie is healing : " << elf->GetHealth() << " LP" << endl;
   cout <<"Orc name is: " << orc->GetName() << " and it's strength is: " << orc->GetStrength() << " And it's spacialtie is defence : " << orc->GetDefence() << endl;
   system("pause");

   cout << "elf dropped: " << npc->requestItem(3) << endl;
   cout << "orc dropped: " << npc->requestItem(4) << endl;

   cout << "Player has now: ";
   for (int i=0; i < npc->inventory.items.size(); i++){
      cout << npc->inventory.items[i] << ",";
   }
   cout << " in his inventory" <<endl;

   delete npc;
   delete elf;
   delete orc;

   /*vector<vector<string>> students;
   vector<string> s1 = {"John"};
    vector<string> s2 = {"Piet"};
    vector<string> s3 = {"Hans"};
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);

    for(vector<string> s : students){
        for(int i =0; i< s.size(); i++){
            cout << s[i] << endl;
        }
    }*/

}



