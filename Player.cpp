#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <stdexcept>

using namespace pandemic;
using namespace std;


Player::Player(Board &gameBoard, City city) {
    location = city;
    gboard = gameBoard;
}

Player& Player::treat(City city) {
    if (location == city) {
        gboard[city]--;
    }
    return *this;
}

Player& Player::drive(City city) {
    Board b;
    return *this;
}

Player& Player::fly_direct(City city) {
    if (cards.find(city) != cards.end()) {
        cards.erase(city);
        location = city;
        return *this;
    }
    throw invalid_argument("Cant fly_direct without location city card");
}

Player& Player::fly_charter(City city) {
    Board b;
    return *this;
}

Player& Player::fly_shuttle(City city) {
    Board b;
    return *this;
}

Player& Player::discover_cure(Color color) {

    return *this;
}

Player& Player::take_card(City city) {
    cards.insert(city);
    return *this;
}

Player& Player::build() {
    return *this;
}

string Player::role() {
    return "Player";
}