#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv)
{
    initscr();
    
    int height, width,start_y,start_x;
    height = 20;
    width = 80;
    start_y = start_x = 0;
    
    WINDOW * win = newwin(height, width, start_y, start_x);
    refresh();
    
    char c = 'w';
    //box(win,88,88);
    int left, right, top, bottom, tlc, trc, blc, brc;
    left = right = top = bottom = tlc = trc = blc = brc = 88;
    wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
    mvwprintw(win, 1, 1, "8");
    wrefresh(win);
    
    getch();
    getch();
    
    endwin();
    
    return 0;
}