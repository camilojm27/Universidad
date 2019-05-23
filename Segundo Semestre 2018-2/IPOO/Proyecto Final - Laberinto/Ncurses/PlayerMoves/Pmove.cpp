#include <ncurses.h>
#include<string>
#include<cstdlib>
#include<ctime>
#include "player.h"
#include "../../Laberinto.h"
using namespace std;

void start_ncurses(bool useRaw, bool useNoecho);
void printMenu(WINDOW * menu, string choices[], int size, int highlight);

int main(int argc,char ** argv)
{
    initscr();
    noecho();
    cbreak();
    
    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);
    
    WINDOW * playwin = newwin(20,80,0,0);
    
    int left, right, top, bottom, tlc, trc, blc, brc;
    left = right = top = bottom = tlc = trc = blc = brc = 88;
    wborder(playwin, left, right, top, bottom, tlc, trc, blc, brc);
    
    
    //box(playwin, 88, 88);
    refresh();
    wrefresh(playwin);
    
    mvwprintw(playwin, 3, 3, "X");
    

    for(int fila = 1; fila < 19; fila++)
    {
        for(int columna = 1; columna < 79; columna++)
        {
            mvwprintw(playwin,fila,columna, "Z");
        }
    }
    wrefresh(playwin);
    
    Player * p = new Player(playwin, 1 ,1, '@');
    do  {
            p->display();
            wrefresh(playwin);
        } while(p->getmv()!='x');
    
    endwin();
    
    return 0;
}