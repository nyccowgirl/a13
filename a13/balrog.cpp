/*
 Trang Hoang
 CS110B
 Dave Harden
 11/27/20
 balrog.cpp
 
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

#include "balrog.hpp"
#include "demon.hpp"
#include <iostream>

using namespace std;

namespace cs_creature {

/*
 Documentation to be completed
 */

Balrog::Balrog()
: Demon()
{
}

Balrog::Balrog(int newStrength, int newHitpoints)
: Demon(newStrength, newHitpoints)
{
}

string Balrog::getSpecies() const {
    return "Balrog";
}

int Balrog::getDamage() const {
    int damage;
    
    cout << "The Balrog";
    
    // All Creatures inflict damage which is a random number up to their strength
    // Demons can inflict damage of 50 with a 25% chance
    damage = Demon::getDamage();
    
    // Balrogs are so fast they get to attack twice

    int damage2 = (rand() % getStrength()) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    damage += damage2;
    
    return damage;
}
}
