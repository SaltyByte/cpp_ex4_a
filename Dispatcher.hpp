#pragma once
#include "Player.hpp"

namespace pandemic {
    class Dispatcher : public Player{

    public:
        Dispatcher(Board&, City);
        std::string role() override;
    };
}