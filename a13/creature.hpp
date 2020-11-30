/*
 Trang Hoang
 CS110B
 Dave Harden
 11/27/20
 creature.hpp
 
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

#ifndef creature_hpp
#define creature_hpp

#include <iostream>
using namespace std;

namespace cs_creature {

/*
 
 The Creature class can be used to create objects that store a Creature, including its
 strength and hitpoints. The following functions are available:
 
 Creature();
  post: The calling object has been created and initialized with default of 10 for strength
        and hitpoint.

 Creature(int newStrength, int newHitpoints);
  pre: newStrength and newHitpoints are greater than 0
  post: The calling object has been created and initialized so that strength is the
        newStrength parameter, and the hitpoint is the newHitpoints parameter.
 
 void setStrength(int newStrength);
  pre: newStrength is greater than 0
  post: The calling object has been created and initialized so that strength is the
        newStrength parameter.

 int getStrength() const;
  post: Returns value of strength data member.
 
 void setHitpoints(int newHitpoints);
  pre: newHitpoint is greater than 0
  post: The calling object has been created and initialized so that hitpoint is the
        newHitpoint parameter.
 
 int getHitpoints() const;
  post: Returns value of hitpoint data member.
 
 virtual string getSpecies() const = 0;
  post: Pure virtual function that other derived classes must implement.
 
 virtual int getDamage() const;
  post: Returns value of damage that Creature inflicts in round of combat
 
 */

    class Creature {
        public:
            Creature();                         // initialize to 10 strength, 10 hitpoints
            Creature(int newStrength, int newHitpoints);
            void setStrength(int newStrength);
            int getStrength() const;
            void setHitpoints(int newHitpoints);
            int getHitpoints() const;
            virtual string getSpecies() const = 0;  // returns the type of the species
            virtual int getDamage() const;      // returns the amount of damage this
                                                // Creature inflicts in one round of combat

        private:
            int strength;   // how much damage this Creature inflicts
            int hitpoints;  // how much damage this Creature can sustain
    };
}

#endif /* creature_hpp */
