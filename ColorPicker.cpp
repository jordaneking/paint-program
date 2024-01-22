/* CSCI 200: Final Project: Microsoft Paint But Better (Because I Made It)
 *
 * Author: Jordan King
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // SFML documentation 
 *
 * functions defitions from ColorPicker class
 */

#include <SFML/Graphics.hpp>
#include <vector>

#include "ColorPicker.h"

ColorPicker::ColorPicker(int windowWidth){

    mColors = {sf::Color(255, 0, 0), sf::Color(255, 165, 0), sf::Color(255, 255, 0), sf::Color(0, 255, 0), sf::Color(0 , 0, 255),
    sf::Color(75, 0, 130), sf::Color(150, 13, 255), sf::Color(138, 90, 66), sf::Color(255, 255, 255), sf::Color(252, 116, 241)};

    mColorWidth = (windowWidth - 200) / mColors.size();

    mColorHeight = 90;
}

void ColorPicker::drawMenu(sf::RenderWindow &window){
        for (int i = 0; i < mColors.size(); i++){
            sf::RectangleShape colorRectangle;
            colorRectangle.setSize(sf::Vector2f(mColorWidth, mColorHeight));
            colorRectangle.setFillColor(mColors.at(i));
            colorRectangle.setPosition(sf::Vector2f(mColorWidth * i, 0));

            window.draw(colorRectangle);
        }
    }  





