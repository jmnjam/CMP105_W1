#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects

	rect1.setSize(sf::Vector2f(50, 50));
	rect1.setPosition(175, 175);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(100, 100));
	rect2.setPosition(150, 150);
	rect2.setFillColor(sf::Color::Yellow);

	rect3.setSize(sf::Vector2f(150, 150));
	rect3.setPosition(125, 125);
	rect3.setFillColor(sf::Color::Blue);

	circle.setRadius(50);
	circle.setPosition(300, 300);
	circle.setFillColor(sf::Color::Green);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);

	//Text

	if (!font.loadFromFile("D:/UNI/Sem 2/Games Development/CMP105_W1/Week1/CMP105App/font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	mousePosText.setFont(font);
	mousePosText.setString("Hello World");
	mousePosText.setCharacterSize(24);
	mousePosText.setFillColor(sf::Color::Red);

}

Level::~Level()
{

}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect3);
	window->draw(rect2);
	window->draw(rect1);
	window->draw(circle);
	window->draw(text);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}