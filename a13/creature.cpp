/*
 Trang Hoang
 CS110B
 Dave Harden
 11/27/20
 creature.cpp
 
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

#include "creature.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace cs_creature {

/*
  
 Class Invariant: a Creature object has two data members - strength, which stores the
 damage the Creature inflicts; and hitpoints, which stores the damage the Creature can
 sustain.
    
*/

Creature::Creature() {
    strength = 10;
    hitpoints = 10;
}

Creature::Creature(int newStrength, int newHitpoints) {
    strength = newStrength;
    hitpoints = newHitpoints;
}

void Creature::setStrength(int newStrength) {
    strength = newStrength;
}

int Creature::getStrength() const {
    return strength;
}

void Creature::setHitpoints(int newHitpoints) {
    hitpoints = newHitpoints;
}

int Creature::getHitpoints() const {
    return hitpoints;
}

string Creature::getSpecies() const {
    return "Creature";
}

int Creature::getDamage() const {
    int damage;
    
    // All Creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;
    return damage;
}

}
