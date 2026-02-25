#include "engine.hpp"

#include <iostream>
#include "config.h"

namespace VeRend {
    Engine::Engine() {

    }

    Engine::~Engine() {

    }

    void Engine::Init() {
        std::cout << "VeRend\n" << "Version: " << ENGINE_VERSION_MAJOR << "." << ENGINE_VERSION_MINOR << "." << ENGINE_VERSION_PATCH << std::endl;
    }
}
