#include "main.h"
#include "Node.h"

int main()
{
    RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML projet");

    Node nodes [MAP_SIZE][MAP_SIZE];
    for (size_t x = 0; x < MAP_SIZE; x++)
    {
        for (size_t y = 0; y < MAP_SIZE; y++)
        {
            nodes[x][y] = Node(Vector2f(x*100+2, y*100+2));
        }
    }

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        for (size_t x = 0; x < MAP_SIZE; x++)
        {
            for (size_t y = 0; y < MAP_SIZE; y++)
            {
                window.draw(nodes[x][y].GetRectangle());
            }
        }
        window.display();
    }

    return 0;
}