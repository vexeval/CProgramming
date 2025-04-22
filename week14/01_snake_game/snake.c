#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // usleep

#define MAX_SNAKE_SIZE 50

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point body[MAX_SNAKE_SIZE];
    int length;
    int direction;
} Snake;

// Function prototypes
void initGame(Snake *snake, Point *fruit);
void Draw(const Snake *snake, const Point *fruit);
void moveSnake(Snake *snake, Point *fruit);

int main(void) {
    srand(time(0));
    // Create a snake
    Snake paul;
    Point fruit;

    // It's Showtime
    initGame(&paul, &fruit);
    while (1) {
        // Scan for direction input
        int ch = getch();
        if (ch == KEY_UP || ch == KEY_DOWN || ch == KEY_RIGHT || ch == KEY_LEFT) {
            paul.direction = ch;
        }

        Draw(&paul, &fruit);
        moveSnake(&paul, &fruit);
        usleep(5000);
    }

    return 0;
}

void initGame(Snake *snake, Point *fruit) {
    // Init terminal
    initscr();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    timeout(100);

    // Init Paul
    snake->length = 5;
    snake->direction = KEY_RIGHT;

    for (int i = 0; i < (snake->length); i++) {
        snake->body[i].x = 10 - i;
        snake->body[i].y = 10;
    }

    // Init the fruit
    fruit->x = rand() % COLS;
    fruit->y = rand() % LINES;
}

void Draw(const Snake *snake, const Point *fruit) {
    clear();
    // Print the fruit
    mvprintw(fruit->y, fruit->x, "0");

    // Rise and shine, Paul
    for (int i = 0; i < (snake->length); i++) {
        if (i != 0) {
            mvprintw(snake->body[i].y, snake->body[i].x, "#");
        } else {
            mvprintw(snake->body[i].y, snake->body[i].x, "@");
        }
        
    }
    refresh();
}

void moveSnake(Snake *snake, Point *fruit) {
    Point new_head = snake->body[0];
    
    if (snake->direction == KEY_RIGHT) {
        new_head.x++;
    }
    else if (snake->direction == KEY_LEFT) {
        new_head.x--;
    } 
    else if (snake->direction == KEY_UP) {
        new_head.y--;
    }
    else if (snake->direction == KEY_DOWN) {
        new_head.y++;
    }

    // Check for collision
    if (new_head.x < 0 || new_head.x >= COLS || new_head.y < 0 || new_head.y < 0 || new_head.y >= LINES) {
        endwin();
        exit(0);
    }

    // Move Paul
    for (int i = snake->length; i > 0; i--) {
        snake->body[i] = snake->body[i - 1];
    }

    snake->body[0] = new_head;

    // Found the fruit
    if (new_head.x == fruit->x && new_head.y == fruit->y) {
        snake->length++;
        fruit->x = rand() % COLS;
        fruit->y = rand() % LINES;
    }

}