#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

#include "Player.hpp"

namespace coup{
    Player::Player(Game game, string name){
    }//constructor
    Player::~Player(){       
    }//deconstructor
    void Player::income(){       
    }//coin++
    void Player::foreign_aid(){       
    }//coins+=2
    void Player::coup(Player other){     
    }//killing other player
    string Player::role(){
        return "player's role";
    } //whoami
    int Player::coins(){
        return -1;
    }//$$$
}