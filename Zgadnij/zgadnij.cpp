#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include <conio.h>

using namespace std;

void gra(string odp)
{
    if(odp=="1")
        {
        system("cls");
        cout<<"GRA JEDNOOSOBOWA:"<<endl<<endl;
        string hasla[]={"programowanie", "bedzie", "niesamowicie", "latwe", "jesli", "tylko", "sie", "przylozysz"};
        srand((unsigned)time(NULL));
        int proba=1;
        int ustalproba;
        int x = rand()%7;
        int dlugosc = hasla[x].length();
        string zagadka;
        zagadka = hasla[x];
        string propozycja;
        char postep[dlugosc];
        int ilepomoc=0;
        int ustalilepomoc;

        if(dlugosc<5) {ustalproba=10; ustalilepomoc=0;}
        if(dlugosc>=5 && dlugosc<10) {ustalproba=15; ustalilepomoc=2;}
        if(dlugosc>=10) {ustalproba=20; ustalilepomoc=3;}

        cout<<"No to zaczynamy."<<endl<<"Masz "<<ustalproba<<" "<<"prob na odgadniecie hasla oraz "<<ustalilepomoc<<" podpowiedzi do wykorzystania."<<endl;
        for(int s=0;s<dlugosc;s++)
        {
            postep[s]='*';
            }
            cout<<"Liczba znakow hasla wynosi "<<dlugosc<<"."<<endl<<endl<<"Proba numer 1."<<endl<<"Postep:"<<endl;
            for(int t=0;t<dlugosc;t++)
                {
                    cout<<postep[t];
                    };
                cout<<endl<<"Podaj propozycje: ";

                int licznik=0;
                int licznik2=0;

                while(propozycja!=zagadka)
                {
                    cin>>propozycja;
                    proba++;

                    if(propozycja==zagadka)
                        {
                            cout<<endl<<"Brawo! Zgadles! Haslo to '"<<zagadka<<"'. "<<endl<<"Twoja liczba punktow to: "<<(ustalproba-proba)+1<<"."<<endl<<endl;
                            break;
                        }else;

                    if(propozycja=="dosc" || proba>ustalproba)
                        {
                            cout<<endl<<"Tym razem ci sie nie powiodlo. Haslo brzmialo '"<<zagadka<<"'."<<endl<<endl;
                            break;
                        }else;

                    if(propozycja=="pomocy" && ilepomoc<ustalilepomoc)
                        {
                            int numerlit;
                            cout<<endl<<"Podaj numer litery, ktora chesz odkryc: ";
                            cin>>numerlit;
                            postep[numerlit-1] = zagadka[numerlit-1];
                            ilepomoc++;
                            proba++;
                            cout<<endl<<"Litera odkryta. Tracisz 2 proby. Pozostalo ci "<<2-ilepomoc<<" podpowiedzi."<<endl<<endl;
                        }else;

                    if(propozycja=="pomocy" && ilepomoc>ustalilepomoc)
                        {
                            cout<<endl<<"Wykorzystales juz wszystkie podpowiedzi."<<endl<<endl;
                            proba--;
                            }else;

                    if(ilepomoc==ustalilepomoc)
                        {
                            ilepomoc++;
                        }

                    if(propozycja!=zagadka && propozycja!="dosc" && propozycja!="pomocy")

                        {

                            for(int p=0;p<dlugosc;p++)
                                {
                                    if(propozycja[p]==zagadka[p])
                                        {
                                            postep[p]=propozycja[p];
                                            licznik++;
                                        }else;
                                    if(propozycja[p]!=zagadka[p])
                                        {

										}
										}
                                     if(licznik>licznik2)
                                        {
                                            cout<<endl<<"Odkryles cos!"<<endl<<endl;
                                        }else;
                                    if(licznik<=licznik2)
                                         {
                                            cout<<endl<<"Moze nastepnym razem ci sie uda."<<endl<<endl;
										 };
										 };

                                        cout<<"Proba numer "<<proba<<". "<<endl<<"Postep:"<<endl;
                                        for(int t=0;t<dlugosc;t++)
                                            {
                                                cout<<postep[t];
                                            };
                                            licznik2=licznik;
                                             licznik=0;

                                            cout<<endl<<"Nastepna propozycja: ";
                                            }
                                            system("PAUSE");
											}else;

    if(odp=="2")
        {
        system("cls");
        cout<<"GRA DWUOSOBOWA:"<<endl<<endl;
        cout<<"Wpisz haslo dla przeciwnika: ";
        string haslo;
        cin>>haslo;
        cout<<"Ustal liczbe prob dla przeciwnika: ";
        int proba = 1;
        int ustalproba;
        cin>>ustalproba;
        cout<<"Ustal liczbe podpowiedzi dla przeciwnika: ";
        int ilepomoc=0;
        int ustalilepomoc;
        cin>>ustalilepomoc;
        system("cls");
        int dlugosc=haslo.length();
        string zagadka;
        zagadka=haslo;
        string propozycja;
        char postep[dlugosc];
        for(int s=0;s<dlugosc;s++)
        {
            postep[s]='*';
            }
            cout<<"GRA DWUOSOBOWA:"<<endl<<endl;
            cout<<"No to zaczynamy."<<endl<<"Masz "<<ustalproba<<" "<<"prob na odgadniecie hasla oraz "<<ustalilepomoc<<" podpowiedzi do wykorzystania."<<endl<<"Liczba znakow hasla wynosi "<<dlugosc<<"."<<endl<<endl<<"Proba numer 1."<<endl<<"Postep:"<<endl;
            for(int t=0;t<dlugosc;t++)
            {
                cout<<postep[t];
                };
            cout<<endl<<"Podaj propozycje: ";

            int licznik=0;
            int licznik2=0;

            while(propozycja!=zagadka)
            {
                cin>>propozycja;
                proba++;

                if(propozycja==zagadka)
                {
                    cout<<endl<<"Brawo! Zgadles! Haslo to '"<<zagadka<<"'. "<<endl<<"Twoja liczba punktow to: "<<(ustalproba-proba)+1<<"."<<endl<<endl;
                    break;
                    }else;

                 if(propozycja=="dosc" || proba>ustalproba)
                    {
                        cout<<endl<<"Tym razem ci sie nie powiodlo. Haslo brzmialo '"<<zagadka<<"'."<<endl<<endl;
                        break;
                    }else;

                if(propozycja=="pomocy" && ilepomoc<ustalilepomoc)

					{
						int numerlit;
						cout<<endl<<"Podaj numer litery, ktora chesz odkryc: ";
						cin>>numerlit;
						postep[numerlit-1]=zagadka[numerlit-1];
						ilepomoc++;
						proba++;
						cout<<endl<<"Litera odkryta. Tracisz 2 proby. Pozostalo ci "<<ustalilepomoc-ilepomoc<<" podpowiedzi."<<endl<<endl;
					}else;

                if(propozycja=="pomocy" && ilepomoc>ustalilepomoc)
                  {
                        cout<<endl<<"Wykorzystales juz wszystkie podpowiedzi..."<<endl<<endl;
                        proba--;
                        }else;

                if(ilepomoc==ustalilepomoc)
                    {
                        ilepomoc++;
                    }

                if(propozycja!=zagadka && propozycja!="dosc" && propozycja!="pomocy")

                    {
						for(int p=0;p<dlugosc;p++)                     //wlasciwy kod
                                      {
                                              if(propozycja[p]==zagadka[p])
                                              {
                                                                           postep[p]=propozycja[p];
                                                                           licznik++;
                                                                           }else;
                                                                           if(propozycja[p]!=zagadka[p])
                                                                           {continue;}
                                                                           }
                                                                                   if(licznik>licznik2)
                                                                                   {
                                                                                                       cout<<endl<<"Odkryles cos!"<<endl<<endl;
                                                                                                       }else;
                                                                                                       if(licznik<=licznik2)
                                                                                                       {
                                                                                                                            cout<<endl<<"Moze innym razem."<<endl<<endl;
                                                                                                                            };
                                                                                                                            };

                                                                                                                            cout<<"Proba numer "<<proba<<". "<<endl<<"Postep:"<<endl;
                                                                                                                            for(int t=0;t<dlugosc;t++)
                                                                                                                            {
                                                                                                                                    cout<<postep[t];
                                                                                                                                    };
                                                                                                                                    licznik2=licznik;
                                                                                                                                    licznik=0;

                                                                                   cout<<endl<<"Nastepna propozycja: ";
                                                                           }system("PAUSE");
                                                                           }else

    if(odp=="3")
        {
        system("cls");
        string wejscie;
        cout<<"POMOC:"<<endl;
        cout<<"1) Twoim zadaniem jest odgadnac tajne haslo."<<endl<<"2) Masz do wykorzystania, w zaleznosci od dlugosci hasla, od 10 do 20 prob oraz od 0 do 3 podpowiedzi."<<endl<<"3) Aby wykorzystac podpowiedz, wpisz 'pomocy' w propozycji. Mozesz wowczas "<<endl<<"odkryc wybrana litere, tracisz jednak 2 proby (tj. biezaca i nastepna)."<<endl<<"5) Aby zrezygnowac z odgadywania hasla, wpisz w propozycji 'dosc'."<<endl<<endl<<"Wpisz 'wstecz', aby wrocic do menu lub 'wyjdz', aby wyjsc: ";
        cin>>wejscie;

        if(wejscie=="wstecz")
            {
                system("cls");
                string a;
                cout<<"Witaj w grze 'ZGADNIJ'."<<endl<<endl<<"Menu: "<<endl<<"1 - Gra jednoosobowa"<<endl<<"2 - Gra dwuosobowa"<<endl<<"3 - Pomoc"<<endl<<"4 - Wyjscie"<<endl<<endl;
                cout<<"Co chcesz zrobic? (wpisz 1, 2, 3, 4 lub 5): ";
                cin>>a;

                while(a!="1" && a!="2" && a!="3" && a!="4" && a!="5")
                    {
                        cout<<"Wpisz 1, 2, 3, 4 lub 5."<<endl<<"Co chcesz zrobic?: ";
                        cin>>a;
                    }

                    gra(a);
                    }else

                    if(wejscie=="wyjdz")
                        {
                            exit(1);
                            }else

                    while(wejscie!="wstecz" && wejscie!="wyjdz")
                        {
                            cout<<"Wpisz 'wstecz' lub 'wyjdz': ";
                            cin>>wejscie;
                            }

                            }else;


    if(odp=="4")
    {
        system("cls");
        cout<<"Do widzenia!"<<endl;
        exit(1);
    }
}

int main(int argc, char *argv[])
{
    string a;
    cout<<"Witaj w grze 'ZGADNIJ'."<<endl<<endl<<"Menu: "<<endl<<"1 - Gra jednoosobowa"<<endl<<"2 - Gra dwuosobowa"<<endl<<"3 - Pomoc"<<endl<<"4 - Wyjscie"<<endl<<endl;
    cout<<"Co chcesz zrobic? (wpisz 1, 2, 3, 4 lub 5): ";
    cin>>a;

         while(a!="1" && a!="2" && a!="3" && a!="4" && a!="5")
    {
                      cout<<"Wpisz 1, 2, 3, 4 lub 5."<<endl<<"Co chcesz zrobic?: ";
                      cin>>a;
                      }
                      gra(a);
                      }
