#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <ctime>
#include <windows.h> 

using namespace std;

char tab[20][60];
char wyglad='*';
clock_t start;

void StartGry()
{
     srand(time(NULL));
     
     int x2;
     int y2;
     int p=0;
                      
     
     for(int x=0;x<20;x++)
    {
             for(int y=0;y<60;y++)
             {
                     tab[x][y]=' ';
                     }
                     }
                      
                     while(p<10)                         //rozstawianie 'O'
                     {
                                      x2=rand()%16+2;
                                      y2=rand()%56+2;
                                      if(tab[x2][y2]==' ')
                                      {
                                                          tab[x2][y2]='O';
                                                          p++;
                                                          }
                                      }
    tab[1][1]=wyglad;                                           //postawienie gracza
    
    for(int x=0;x<20;x++)
                     {
                                 
                                 for(int y=0;y<60;y++)
                                 {
                                         if(x==0 || x==19)
                                         {
                                                 tab[x][y]='-';
                                                 }
                                                 
                                                 if(y==0 || y==59)
                                                 {
                                                         tab[x][y]='|';
                                                         }
                                                         
                                                         cout<<tab[x][y];
                                                         }
                                                         cout<<endl;
                                                         }
                                                         }    
     
void Wyswietl()
{
     for(int x=0;x<20;x++)
                     {
                             for(int y=0;y<60;y++)
                             {
                                     cout<<tab[x][y];
                                     }
                                     cout<<endl;
                                     }
                                     }
     

int main(int argc, char *argv[])
{
    int x=1;
    int y=1;
    int licznik=0;
    
    StartGry();
           
    unsigned char znak;
    
    clock_t start;
    double koniec;
    
    start=clock();
    while(1)
    {
            cout<<"                     "<<"Czas do konca: "<<30-(clock()-start)/1000;
            znak=getch();
            if(znak=='w' && x>=2 && tab[x-1][y]=='O')
            {
                         licznik=licznik+1;
                         tab[x][y]=' ';
                         x--;
            }else
            if(znak=='w' && x>=2)
            {
                         tab[x][y]=' ';
                         x--;
            }else
            if(znak=='s' && x<=17 && tab[x+1][y]=='O')
            {
                         licznik=licznik+1;
                         tab[x][y]=' ';
                         x++;

            }else
            if(znak=='s' && x<=17)
            {
                         tab[x][y]=' ';
                         x++;

            }else
            if(znak=='a' && y>=2 && tab[x][y-1]=='O')
            {
                         licznik=licznik+1;
                         tab[x][y]=' ';
                         y--;
            }else
            if(znak=='a' && y>=2)
            {
                         tab[x][y]=' ';
                         y--;
            }else
            if(znak=='d' && y<=57 && tab[x][y+1]=='O')
            {
                         licznik=licznik+1;
                         tab[x][y]=' ';
                         y++;
            }
            if(znak=='d' && y<=57)
            {
                         tab[x][y]=' ';
                         y++;
            }
            
            if((clock()-start)/1000>=30)
            {
                           break;
                           }
            if(licznik==10)
            {
                           break;
                           }
                           
            tab[x][y]=wyglad;
            system("cls");
            Wyswietl();
            
            }
            
            if(licznik==10)
            {
            system("cls");
            cout<<"Wygrales! Zajelo ci to "<<(clock()-start)/1000<<" sekund."<<endl;
            Sleep(200000);
            }else
            
            if(licznik<10)
            {
            system("cls");
            cout<<"Przegrales. Zebrales tylko "<<licznik<<" kul."<<endl;
            Sleep(200000);
            }
}

