
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

#include "Game.hpp"
#pragma once
namespace coup{
        class Player{
        private:
            string name;
        public:
            Player(Game game, string name);     //constructor
            ~Player();                          //deconstructor
            void income();                      //coin++
            void foreign_aid();                 //coins+=2
            void coup(Player other);            //killing other player
            string role();                      //whoami
            int coins();                        //$$$
    };
}