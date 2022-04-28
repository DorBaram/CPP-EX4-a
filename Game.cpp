#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

#include "Game.hpp"

namespace coup{
    Game::Game(){
    }
    Game::~Game(){
    }
    string Game::turn(){
        return "doritos";
    }    
    string Game::winner(){
        return "doritos";
    }
    vector<string> Game::players(){
        vector<string> v={};
        return v;
    }
}