#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>
#include <utility>
#include "Inventory.h"
#include "../resources/Fonts.h"
#include "../Constants.h"
#include "../resources/Resources.h"

void Inventory::draw(sf::RenderTarget &target, Resources &resources) {
    target.clear();
    //Draw name
    sf::Text nameText;
    nameText.setFont(resources.getFont(0));
    nameText.setString(name);
    nameText.setCharacterSize(30);
    nameText.setPosition(0, 0);
    nameText.setFillColor(sf::Color::White);
    target.draw(nameText);
}

Inventory::Inventory(std::string name) : name(std::move(name)) {}
