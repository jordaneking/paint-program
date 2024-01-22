/* CSCI 200: Final Project: Microsoft Paint But Better (Because I Made It)
 *
 * Author: Jordan King
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // SFML documentation 
 *
 * ColorPicker class, poorly named (sorry); used to create a draw window with various colors to choose from 
 */

#ifndef COLOR_PICKER_HPP
#define COLOR_PICKER_HPP

#include <SFML/Graphics.hpp>
#include <vector>

class ColorPicker {

private:
    std::vector<sf::Color> mColors;
    float mColorWidth;
    float mColorHeight;

public:

    // parameterized constructor
    ColorPicker(int windowWidth);

    /**
    * @brief creates a window to draw to that has various colors to choose
    * @param window window to draw to 
    */
    void drawMenu(sf::RenderWindow &window); 

};

#endif