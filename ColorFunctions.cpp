/* CSCI 200: Final Project: Microsoft Paint But Better (Because I Made It)
 *
 * Author: Jordan King
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // SFML documentation 
 *
 * function definitions for drawing 
 */

#include <SFML/Graphics.hpp>

#include "ColorFunctions.h"

sf::Color changeColor(int x, int y, sf::CircleShape brush){
    sf::Color color;
    if (x >= 0 && x < 180){
            color = sf::Color(255, 0, 0);
            return color;
        }
        else if (x >= 180 && x < 360){
            color = sf::Color(255, 165, 0);
            return color;
        }
        else if (x >= 360 && x < 540){
            color = sf::Color(255, 255, 0);
            return color;
        }
        else if (x >= 540 && x < 720){
            color = sf::Color(0, 255, 0);
            return color;
        }
        else if (x >= 720 && x < 900){
            color = sf::Color(0 , 0, 255);
            return color;
        }
        else if (x >= 900 && x < 1080){
            color = sf::Color(75, 0, 130);
            return color;
        }
        else if (x >= 1080 && x < 1260){
            color = sf::Color(150, 13, 255);
            return color;
        }
        else if (x >= 1260 && x < 1440){
            color = sf::Color(138, 90, 66);
            return color;
        }
        else if (x >= 1440 && x < 1620){
            color = sf::Color(255, 255, 255);
            return color;
        }
        else if (x >= 1620 && x < 1800){
            color = sf::Color(252, 116, 241);
            return color;
        }
}