/*
 Trang Hoang
 CS110B
 Dave Harden
 11/27/20
 cyberdemon.hpp
 
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

#ifndef cyberdemon_hpp
#define cyberdemon_hpp

#include "demon.hpp"
#include <iostream>
using namespace std;

namespace cs_creature {

/*
 
 The Cyberdemon class is derived from the Demon class that is derived from the Creature
 class and can be used to create objects that store a Creature, including its strength and
 hitpoints. The following functions are available:
 
 Cyberdemon();
  post: The calling object has been created and initialized with default from the Demon
        class which is derived from Creature class of 10 for strength and hitpoint.

 Demon(int newStrength, int newHitpoints);
  pre: newStrength and newHitpoints are greater than 0
  post: The calling object has been created and initialized with Demon class which is
        derived from base class default constructor from Creature class so that strength is
        the newStrength parameter, and the hitpoint is the newHitpoints parameter.
 
 string getSpecies() const;
  post: Returns the type of Demon as Cyberdemon.
 
 */

class Cyberdemon: public Demon {
    public:
        Cyberdemon();
        Cyberdemon(int newStrength, int newHitpoints);
        string getSpecies() const;          // returns the type of the species
    };
}

#endif /* cyberdemon_hpp */
