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

int main(int argc, const char * argv[]) {
    srand(static_cast<unsigned>(time(nullptr)));
    
    Human h1;
    Elf e1;
    Cyberdemon c1;
    Balrog b1;
    
    Human h(20, 30);
    Elf e(40, 50);
    Cyberdemon c(60, 70);
    Balrog b(80, 90);

    
    cout << "default Human strength/hitpoints: " << h1.getStrength() << "/" << h1.getHitpoints() << endl;
    cout << "default Elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;
    cout << "default Cyberdemon strength/hitpoints: " << c1.getStrength() << "/" << c1.getHitpoints() << endl;
    cout << "default Balrog strength/hitpoints: " << b1.getStrength() << "/" << b1.getHitpoints() << endl;
    cout << "non-default Human strength/hitpoints: " << h.getStrength() << "/" << h.getHitpoints() << endl;
    cout << "non-default Elf strength/hitpoints: " << e.getStrength() << "/" << e.getHitpoints() << endl;
    cout << "non-default Cyberdemon strength/hitpoints: " << c.getStrength() << "/" << c.getHitpoints() << endl;
    cout << "non-default Balrog strength/hitpoints: " << b.getStrength() << "/" << b.getHitpoints() << endl;
    cout << endl << endl;

    cout << "Examples of " << h.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = h.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << e.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = e.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << c.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = c.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    
    
    
    cout << "Examples of " << b.getSpecies() << " damage: " << endl;
    for (int i = 0; i < 10; i++){
        int damage = b.getDamage();
        cout << " Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;

}

/*
 default Human strength/hitpoints: 10/10
 default Elf strength/hitpoints: 10/10
 default Cyberdemon strength/hitpoints: 10/10
 default Balrog strength/hitpoints: 10/10
 non-default Human strength/hitpoints: 20/30
 non-default Elf strength/hitpoints: 40/50
 non-default Cyberdemon strength/hitpoints: 60/70
 non-default Balrog strength/hitpoints: 80/90


 Examples of Human damage:
 Human attacks for 15 points!
  Total damage = 15

 Human attacks for 5 points!
  Total damage = 5

 Human attacks for 3 points!
  Total damage = 3

 Human attacks for 19 points!
  Total damage = 19

 Human attacks for 13 points!
  Total damage = 13

 Human attacks for 13 points!
  Total damage = 13

 Human attacks for 16 points!
  Total damage = 16

 Human attacks for 11 points!
  Total damage = 11

 Human attacks for 5 points!
  Total damage = 5

 Human attacks for 3 points!
  Total damage = 3


 Examples of Elf damage:
 Elf attacks for 20 points!
 Magical attack inflicts 20 additional damage points!
  Total damage = 40

 Elf attacks for 5 points!
 Magical attack inflicts 5 additional damage points!
  Total damage = 10

 Elf attacks for 29 points!
 Magical attack inflicts 29 additional damage points!
  Total damage = 58

 Elf attacks for 13 points!
  Total damage = 13

 Elf attacks for 29 points!
 Magical attack inflicts 29 additional damage points!
  Total damage = 58

 Elf attacks for 21 points!
  Total damage = 21

 Elf attacks for 19 points!
  Total damage = 19

 Elf attacks for 8 points!
  Total damage = 8

 Elf attacks for 18 points!
 Magical attack inflicts 18 additional damage points!
  Total damage = 36

 Elf attacks for 30 points!
  Total damage = 30


 Examples of Cyberdemon damage:
 The Cyberdemon attacks for 10 points!
  Total damage = 10

 The Cyberdemon attacks for 19 points!
  Total damage = 19

 The Cyberdemon attacks for 44 points!
  Total damage = 44

 The Cyberdemon attacks for 26 points!
  Total damage = 26

 The Cyberdemon attacks for 55 points!
  Total damage = 55

 The Cyberdemon attacks for 18 points!
  Total damage = 18

 The Cyberdemon attacks for 17 points!
  Total damage = 17

 The Cyberdemon attacks for 1 points!
  Total damage = 1

 The Cyberdemon attacks for 34 points!
  Total damage = 34

 The Cyberdemon attacks for 52 points!
  Total damage = 52


 Examples of Balrog damage:
 The Balrog attacks for 11 points!
 Balrog speed attack inflicts 31 additional damage points!
  Total damage = 42

 The Balrog attacks for 5 points!
 Balrog speed attack inflicts 62 additional damage points!
  Total damage = 67

 The Balrog attacks for 51 points!
 Balrog speed attack inflicts 4 additional damage points!
  Total damage = 55

 The Balrog attacks for 51 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 48 additional damage points!
  Total damage = 149

 The Balrog attacks for 58 points!
 Balrog speed attack inflicts 63 additional damage points!
  Total damage = 121

 The Balrog attacks for 53 points!
 Balrog speed attack inflicts 34 additional damage points!
  Total damage = 87

 The Balrog attacks for 45 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 78 additional damage points!
  Total damage = 173

 The Balrog attacks for 30 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 29 additional damage points!
  Total damage = 109

 The Balrog attacks for 78 points!
 Balrog speed attack inflicts 3 additional damage points!
  Total damage = 81

 The Balrog attacks for 74 points!
 Balrog speed attack inflicts 75 additional damage points!
  Total damage = 149


 Program ended with exit code: 0
 */
