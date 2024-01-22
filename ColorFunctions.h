/* CSCI 200: Final Project: Microsoft Paint But Better (Because I Made It)
 *
 * Author: Jordan King
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // SFML documentation 
 *
 * function prototypes for drawing 
 */

#include <SFML/Graphics.hpp>

/**
* @brief evaluates x and y coordinates of where left mouse was clicked, returns
* the color corresponding to that location
* @param x x coord of left mouse click position
* @param y y coord of left mouse click position
* @param brush shape object used to draw to window
* @return color based on where left mouse was clicked
*/
sf::Color changeColor(int x, int y, sf::CircleShape brush);

