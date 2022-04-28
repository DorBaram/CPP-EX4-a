
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

#pragma once

namespace coup{
        class Game{
        private:
            int numOfPlayers;
            vector<string> playerList;
        public:
            Game();
            ~Game();
            string turn();          
            string winner();
            vector<string> players();
    };
}