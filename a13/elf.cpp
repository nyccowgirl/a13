/*
 Trang Hoang
 CS110B
 Dave Harden
 11/27/20
 elf.cpp
 
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

#include "elf.hpp"
#include "creature.hpp"
#include <iostream>

using namespace std;

namespace cs_creature {

/*
 Documentation to be completed
 */

Elf::Elf()
: Creature()
{
}

Elf::Elf(int newStrength, int newHitpoints)
: Creature(newStrength, newHitpoints)
{
}

string Elf::getSpecies() const {
    return "Elf";
}

int Elf::getDamage() const {
    int damage;
    
    // All Creatures inflict damage which is a random number up to their strength
    damage = Creature::getDamage();
//    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    
    // Elves inflict double magical damage with a 50% chance
    if ((rand() % 2) == 0) {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= 2;
    }
    
    return damage;
}
}
