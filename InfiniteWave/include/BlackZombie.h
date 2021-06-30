#pragma once
#include "Zombie.h"

class BlackZombie final: public Zombie
{
public:
	BlackZombie(const sf::Vector2f& pos, sf::Texture& zombie_tex, sf::Texture& blood_tex, PathRequestManager& path_request, sf::SoundBuffer& sound_buffer);
};

