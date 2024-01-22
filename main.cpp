/* CSCI 200: Final Project: Microsoft Paint But Better (Because I Made It)
 *
 * Author: Jordan King
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     // SFML documentation 
 *
 * creates a window for user to draw to, allows them to click on different colors within the draw window and 
 * change the color they are drawing with
 */
#include <SFML/Graphics.hpp>
using namespace sf;

#include <iostream>
using namespace std;

#include "ColorPicker.h"
#include "ColorFunctions.h"

int main() {
    // create a window
    RenderWindow window( VideoMode(2000, 1500), "Drawing" );

    // create window with color options
    ColorPicker colorMenu(window.getSize().x);

    Event event;

    // create brush
    CircleShape brush;
    brush.setRadius (20);

    // vector to collect every instance of the brush being used
    vector<CircleShape> stroke;
    
    // while the window is open
    while( window.isOpen() ) {
        // clear any existing contents
        window.clear();

        if (event.type == sf::Event::MouseWheelScrolled){
            cout << event.mouseWheelScroll.delta << endl; 

        }
        // draw when left mouse button pressed 
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            int x = sf::Mouse::getPosition(window).x;  
            int y = sf::Mouse::getPosition(window).y;   

            // if different color is selected, change color of brush
            if (y <= 90 && x <= 1800){
               brush.setFillColor(changeColor(x, y, brush));
            } 

            brush.setPosition( x - brush.getRadius(), y - brush.getRadius() );
            stroke.push_back(brush);

        }
        // draw
        for (int i = 0; i < stroke.size(); i++){
            window.draw(stroke[i]);
        }

        colorMenu.drawMenu(window);

        // display the current contents of the window
        window.display();

        // check if any events happened since the last time checked
        while( window.pollEvent(event) ) {
            // if event type corresponds to pressing window X
            if(event.type == Event::Closed) {
                // tell the window to close
                window.close();
            }
        }
    }
    // save drawing as a png
    /*
    Vector2u windowSize = window.getSize();
    Texture texture;
    texture.create(windowSize.x, windowSize.y);
    texture.update(window);
    Image screenshot = texture.copyToImage();
    screenshot.saveToFile("your_drawing.png");
    */
}
