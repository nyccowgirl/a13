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
 Documentation to be completed
 */

    class Creature {
        public:
            Creature();             // initialize to Human, 10 strength, 10 hitpoints
            Creature(int newStrength, int newHitpoints);
            void setStrength(int newStrength);
            int getStrength() const;
            void setHitpoints(int newHitpoints);
            int getHitpoints() const;
            virtual string getSpecies() const = 0;  // returns the type of the species
            virtual int getDamage() const;  // returns the amount of damage this Creature inflicts                      // in one round of combat


        private:
            int strength;   // how much damage this Creature inflicts
            int hitpoints;  // how much damage this Creature can sustain
    };
}

#endif /* creature_hpp */
