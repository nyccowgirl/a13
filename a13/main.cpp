/*
 Trang Hoang
 CS110B
 Dave Harden
 11/27/20
 main.cpp
 
 Assignment 13
 
 Create fantasy role-playing game with four different types of Creatures: Humans,
 Cyberdemons, Balrogs and elves.
 
 The getDamage() function outputs and returns the damage this Creature can inflict in one
 round of combat. The rules for determining the damage are as follows:
    - Every Creature inflicts damage that is a random number r, where 0 < r <= strength.
    - Demons have a 25% chance of inflicting a demonic attack which is an additional 50
      damage points. Balrogs and Cyberdemons are Demons.
    - With a 50% chance elves inflict a magical attack that doubles the normal amount of
      damage.
    - Balrogs are very fast, so they get to attack twice
 
 Created by nyccowgirl on 11/27/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
*/

#include "human.hpp"
#include "elf.hpp"
#include "cyberdemon.hpp"
#include "balrog.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace cs_creature;

void battleArena(Creature &creature1, Creature &creature2);

int main(int argc, const char * argv[]) {
    srand(static_cast<unsigned>(time(nullptr)));
    
    Elf e1(50, 50);
    Balrog b1(50, 50);
    
    battleArena(e1, b1);
    
    Cyberdemon c1(100, 100);
    Human h1(120, 120);
    
    battleArena(c1, h1);
    
    Balrog b2(20, 20);
    Human h2(20, 20);
    
    battleArena(b2, h2);
    
    Elf e2(88, 88);
    Cyberdemon c2(88, 88);
    
    battleArena(e2, c2);
}






/*
 Definition of battleArena. Function passes in two Creature objects (creature1 and
 creature2). It displays the initial hitpoints of each Creature. It calls getDamage()
 function for each creature and updates the hitpoints for each via setHitpoints() function.
 It continues until either or both creatures has less than 0 hitpoints and displays the
 winner or tie.
 */

void battleArena(Creature &creature1, Creature &creature2) {
    cout << "LET THE BATTLE BEGIN:" << endl;
    cout << creature1.getSpecies() + " has " << creature1.getHitpoints() << " to start.\n";
    cout << creature2.getSpecies() + " has " << creature2.getHitpoints() << " to start.\n";
    cout << endl;
    
    do {
        creature2.setHitpoints(creature2.getHitpoints() - creature1.getDamage());
        creature1.setHitpoints(creature1.getHitpoints() - creature2.getDamage());
        
        if ((creature1.getHitpoints() <= 0) && (creature2.getHitpoints() <= 0)) {
            cout << "Both creatures have died and the battle is tied!\n" << endl;
        } else if ((creature1.getHitpoints() <= 0) && (creature2.getHitpoints() > 0)) {
            cout << creature2.getSpecies() + " has won the battle!\n" << endl;
        } else if ((creature1.getHitpoints() > 0) && (creature2.getHitpoints() <= 0)) {
            cout << creature1.getSpecies() + " has won the battle!\n" << endl;
        } else {
            cout << creature1.getSpecies() + " has ";
            cout << creature1.getHitpoints() << " remaining." << endl;
            cout << creature2.getSpecies() + " has ";
            cout << creature2.getHitpoints() << " remaining.\n" << endl;
        }
    } while ((creature1.getHitpoints() > 0) && (creature2.getHitpoints() > 0));
}

/*
 LET THE BATTLE BEGIN:
 Elf has 50 to start.
 Balrog has 50 to start.

 Elf attacks for 26 points!
 Balrog attacks for 39 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 47 additional damage points!
 Balrog has won the battle!

 LET THE BATTLE BEGIN:
 Cyberdemon has 100 to start.
 Human has 120 to start.

 Cyberdemon attacks for 42 points!
 Human attacks for 21 points!
 Cyberdemon has 79 remaining.
 Human has 78 remaining.

 Cyberdemon attacks for 69 points!
 Human attacks for 89 points!
 Human has won the battle!

 LET THE BATTLE BEGIN:
 Balrog has 20 to start.
 Human has 20 to start.

 Balrog attacks for 1 points!
 Balrog speed attack inflicts 11 additional damage points!
 Human attacks for 8 points!
 Balrog has 12 remaining.
 Human has 8 remaining.

 Balrog attacks for 14 points!
 Balrog speed attack inflicts 3 additional damage points!
 Human attacks for 11 points!
 Balrog has won the battle!

 LET THE BATTLE BEGIN:
 Elf has 88 to start.
 Cyberdemon has 88 to start.

 Elf attacks for 80 points!
 Cyberdemon attacks for 3 points!
 Elf has 85 remaining.
 Cyberdemon has 8 remaining.

 Elf attacks for 86 points!
 Magical attack inflicts 86 additional damage points!
 Cyberdemon attacks for 64 points!
 Elf has won the battle!

 Program ended with exit code: 0
 */
