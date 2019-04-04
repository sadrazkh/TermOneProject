
//Sadra Zadeh Khameneh - Mohammad Taherifard\n Project  972164019-972164004

#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<windows.h>
#include<cstdlib>
#include<time.h>
#include "type(mls).h" 

using namespace std;

bool Harekat = true;
bool NextLevel = false;
bool CamputerPlayer = true;


string GameBoard[17]=
{
                        "#1############_#_##########\n",
                        "#2######_#_#_#_#_#_#_#_####|",
                        "#3####_#_#_#_#_#_#_#_#_#_##|",
                        "#4##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#5##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#6##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#7##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#8##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#9##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "10##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "11##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "12##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "13##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "14####_#_#_#_#_#_#_#_#_#_##|",
                        "15######_#_#_#_#_#_#_#_####|",
                        "16############_#_#########||",
                        "####a#b#c#d#e#f#g#h#i#j#k#l|",
};

string GameBoard2[17]=
{
                        "#1############_#_##########\n",
                        "#2######_#_#_#_#_#_#_#_####|",
                        "#3####_#_#_#_#_#_#_#_#_#_##|",
                        "#4##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#5##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#6##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#7##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#8##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#9##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "10##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "11##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "12##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "13##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "14####_#_#_#_#_#_#_#_#_#_##|",
                        "15######_#_#_#_#_#_#_#_####|",
                        "16############_#_#########||",
                        "####a#b#c#d#e#f#g#h#i#j#k#l|",
};


string PlayerOne[17]=
{
                        "#1############_#_##########|",
                        "#2######_#_#_#_#_#_#_#_####|",
                        "#3####_#_#_#_#_#_#_#_#_#_##|",
                        "#4##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#5##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#6##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#7##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#8##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#9##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "10##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "11##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "12##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "13##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "14####_#_#_#_#_#_#_#_#_#_##|",
                        "15######_#_#_#_#_#_#_#_####|",
                        "16############_#_#########||",
                        "####a#b#c#d#e#f#g#h#i#j#k#l|",
};

string PlayerTwo[17]=
{
                        "#1############_#_##########|",
                        "#2######_#_#_#_#_#_#_#_####|",
                        "#3####_#_#_#_#_#_#_#_#_#_##|",
                        "#4##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#5##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#6##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#7##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#8##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "#9##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "10##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "11##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "12##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "13##_#_#_#_#_#_#_#_#_#_#_#_|",
                        "14####_#_#_#_#_#_#_#_#_#_##|",
                        "15######_#_#_#_#_#_#_#_####|",
                        "16############_#_#########||",
                        "####a#b#c#d#e#f#g#h#i#j#k#l|",
};

void setTextColor(int textColor, int backColor=0)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int colorAttribute = backColor << 4 | textColor;
    SetConsoleTextAttribute(consoleHandle, colorAttribute);
}  

//###################################################
//###################################################

class Camputer 
{
   private :

   int Type,X1,Y1,X2,Y2;
   
   public :

   void PcSoldiers(int x,int y,int &dx,int &dy)
    {      
        if(PlayerTwo[x+1][y]=='_')
        {
            dx=x+1;
            dy=y;
        }
        else if(PlayerTwo[x][y+2]=='_')
        {
            dx=x;
            dy=y+2;
        }
        else if(PlayerTwo[x][y-2]=='_')
        {
            dx=x;
            dy=y-2;
        }
        else if(PlayerTwo[x-1][y]=='_')
        {
            dx=x-1;
            dy=y;
        }
    }

   void PcCavalry(int x,int y,int &dx,int &dy)
    {      
        if(PlayerTwo[x+1][y]=='_')
        {
            dx=x+1;
            dy=y;
        }
        else if(PlayerTwo[x+2][y]=='_')
        {
            dx=x+2;
            dy=y;
        }
        else if(PlayerTwo[x][y+2]=='_')
        {
            dx=x;
            dy=y+2;
        }
        else if(PlayerTwo[x][y+4]=='_')
        {
            dx=x;
            dy=y+4;
        }
        else if(PlayerTwo[x][y-2]=='_')
        {
            dx=x;
            dy=y-2;
        }
        else if(PlayerTwo[x][y-4]=='_')
        {
            dx=x;
            dy=y-4;
        }        
        else if(PlayerTwo[x-1][y]=='_')
        {
            dx=x-1;
            dy=y;
        }
        else if(PlayerTwo[x-2][y]=='_')
        {
            dx=x-2;
            dy=y;
        }        
    }

   void PcGeneral(int x,int y,int &dx,int &dy)
    {      
        if(PlayerTwo[x+2][y+1]=='_')
        {
            dx=x+1;
            dy=y+2;
        }
        else if(PlayerTwo[x+2][y+4]=='_')
        {
            dx=x+2;
            dy=y+4;
        }
        else if(PlayerTwo[x+3][y+6]=='_')
        {
            dx=x+3;
            dy=y+6;
        }
        else if(PlayerTwo[x-1][y+2]=='_')
        {
            dx=x-1;
            dy=y+2;
        }
        else if(PlayerTwo[x-2][y+4]=='_')
        {
            dx=x-2;
            dy=y+4;
        }
        else if(PlayerTwo[x-3][y+6]=='_')
        {
            dx=x-3;
            dy=y+6;
        }        
        else if(PlayerTwo[x+1][y-2]=='_')
        {
            dx=x+1;
            dy=y-2;
        }
        else if(PlayerTwo[x+2][y-4]=='_')
        {
            dx=x+2;
            dy=y-4;
        }
        else if(PlayerTwo[x+3][y-6]=='_')
        {
            dx=x+3;
            dy=y-6;
        }		        
        else if(PlayerTwo[x-1][y-2]=='_')
        {
            dx=x-1;
            dy=y-2;
        }
        else if(PlayerTwo[x-2][y-4]=='_')
        {
            dx=x-2;
            dy=y-4;
        }
        else if(PlayerTwo[x-3][y-6]=='_')
        {
            dx=x-3;
            dy=y-6;
        }		        
    }    

   void TranportComputerPlayerInformation(char type,int dx,int di,int y,int j)
   {
       type = Type;
       dx = X1;
       di = X2;
       y = Y1;
       j = Y2;
   }

};

//###################################################
//###################################################

class General
{
private: 
    int X,Y,Color;
    short Type;
    char Charecter = 'G';
public:
    General(int x,int y,int color,short type,char charector)
    {
        Charecter = charector; 
        Type = type;
        X = x;
        Y = y;
        Color = color;
        if(type == 1)
            PlayerOne[X][Y] = Charecter;
        if(type ==2)
            PlayerTwo[X][Y] = Charecter;
        GameBoard[X][Y] = Charecter;    
    }
    void Move(int x,int y)
    {
        if(PlayerOne[x][y]=='_' && (((X+1==x || X-1==x)&&(Y+2==y || Y-2==y))||((X+2==x || X-2==x) && (Y+4==y || Y-4==y))||((X+3==x || X-3==x)&&(Y-6==y || Y+6==y))))
        {
            if(Type==1)
            {
                PlayerOne[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerTwo[X][Y] = '_';
                GameBoard[X][Y] = '_';
                if(((X+2==x || X-2==x) && (Y+4==y || Y-4==y)))
                {
                    if(PlayerTwo[X+((x-X)/2)][Y+((y-Y)/2)]!='_')   
                    {
                        PlayerTwo[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
                        GameBoard[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
                    }
                }
                if(((X+3==x || X-3==x)&&(Y-6==y || Y+6==y)))
                {
                    if(PlayerTwo[X+((x-X)/3)][Y+((y-Y)/3)]!='_')   
                    {
                        PlayerTwo[X+((x-X)/3)][Y+((y-Y)/3)] = '_';
                        GameBoard[X+((x-X)/3)][Y+((y-Y)/3)] = '_';
                    }
                    if(PlayerTwo[X+2*((x-X)/3)][Y+2*((y-Y)/3)]!='_')   
                    {
                        PlayerTwo[X+2*((x-X)/3)][Y+2*((y-Y)/3)] = '_';
                        GameBoard[X+2*((x-X)/3)][Y+2*((y-Y)/3)] = '_';
                    }
                }
//                NextLevel = false;
                X = x;
                Y = y;
                PlayerTwo[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerOne[X][Y] = Charecter;
                GameBoard[X][Y] = Charecter;  
            }
            
        }
        if(PlayerTwo[x][y]=='_' && (((X+1==x || X-1==x)&&(Y+2==y || Y-2==y))||((X+2==x || X-2==x) && (Y+4==y || Y-4==y))||((X+3==x || X-3==x)&&(Y-6==y || Y+6==y))))
        {
            if(Type==2)
            {
                PlayerTwo[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerOne[X][Y] = '_';
                GameBoard[X][Y] = '_';
                if(((X+2==x || X-2==x) && (Y+4==y || Y-4==y)))
                {
                    if(PlayerOne[X+((x-X)/2)][Y+((y-Y)/2)]!='_')   
                    {
                        PlayerOne[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
                        GameBoard[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
                    }
                }
                if(((X+3==x || X-3==x)&&(Y-6==y || Y+6==y)))
                {
                    if(PlayerOne[X+((x-X)/3)][Y+((y-Y)/3)]!='_')   
                    {
                        PlayerOne[X+((x-X)/3)][Y+((y-Y)/3)] = '_';
                        GameBoard[X+((x-X)/3)][Y+((y-Y)/3)] = '_';
                    }
                    if(PlayerOne[X+2*((x-X)/3)][Y+2*((y-Y)/3)]!='_')   
                    {
                        PlayerOne[X+2*((x-X)/3)][Y+2*((y-Y)/3)] = '_';
                        GameBoard[X+2*((x-X)/3)][Y+2*((y-Y)/3)] = '_';
                    }
                }
//                NextLevel = false;
                X = x;
                Y = y;
                PlayerOne[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerTwo[X][Y] = Charecter;
                GameBoard[X][Y] = Charecter;  
            }
        }
        else
        {
//            NextLevel = true;
        }
    }

    bool Select(int x,int y)
    {
        if(X==x && Y==y)
            return true;
        else
        {
            return false;    
    	}
	}

    void Save(int &x,int &y)
    {
        x=X;
        y=Y;
    }

};

//###################################################
//###################################################

class Cavalry
{
private: 
    int X,Y,Color;
    char Charecter = 'H';
    short Type;
public:
    Cavalry(int x,int y,int color,short type,char charector)
    {
        Charecter = charector; 
        Type = type;
        X = x;
        Y = y;
        Color = color;
        if(type == 1)
            PlayerOne[X][Y] = Charecter;
        if(type ==2)
            PlayerTwo[X][Y] = Charecter; 
        GameBoard[X][Y] = Charecter;               
    }
    void Move(int x,int y)
    {
        if(Type == 1)
        {
            if(GameBoard[x][y]=='_' && (((X+1==x || X-1==x)&&(Y==y))||((Y+2==y || Y-2==y) && X==x)))
            {
                PlayerOne[X][Y] = '_';
                GameBoard[X][Y] = '_';
//                NextLevel = false;
                X = x;
                Y = y;
                PlayerOne[X][Y] = Charecter;
                GameBoard[X][Y] = Charecter;
            }
            else if(GameBoard[X+((x-X)/2)][Y+((y-Y)/2)]!='_' && GameBoard[x][y]!='#'  && (((X+2==x || X-2==x)&&(Y==y))||((Y+4==y || Y-4==y) && X==x)))
            {
            
                PlayerOne[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerTwo[X][Y] = '_';
                if(PlayerOne[X+((x-X)/2)][Y+((y-Y)/2)] = '_')
                {
                    GameBoard[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
                    PlayerTwo[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
                }
                PlayerTwo[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
//                NextLevel = false;
                X = x;
                Y = y;
                PlayerTwo[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerOne[X][Y] = Charecter;
                GameBoard[X][Y] = Charecter;
            }
            
        }
        else if (Type == 2)
        {
            if(GameBoard[x][y]=='_' && (((X+1==x || X-1==x)&&(Y==y))||((Y+2==y || Y-2==y) && X==x)))
            {
                PlayerTwo[X][Y] = '_';
                GameBoard[X][Y] = '_';
//                NextLevel = false;
                X = x;
                Y = y;
                PlayerTwo[X][Y] = Charecter;
                GameBoard[X][Y] = Charecter;
            }
            else if(GameBoard[X+((x-X)/2)][Y+((y-Y)/2)]!='_' && GameBoard[x][y]!='#' && (((X+2==x || X-2==y)&&(Y==y))||((Y+4==y || Y-4==y) && X==x)))
            {
                PlayerTwo[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerOne[X][Y] = '_';
                if(PlayerTwo[X+((x-X)/2)][Y+((y-Y)/2)] = '_')
                {
                    GameBoard[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
                    PlayerOne[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
                }   
                PlayerOne[X+((x-X)/2)][Y+((y-Y)/2)] = '_';
//                NextLevel = false;
                X = x;
                Y = y;
                PlayerOne[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerTwo[X][Y] = Charecter;
                GameBoard[X][Y] = Charecter;
            }
        }
        else
        {
//            NextLevel = true;
        }
	}
    bool Select(int x,int y)
    {
        if(X==x && Y==y)
            return true;
        else
        {
            return false;    
    	}
	}
        
    void Save(int &x,int &y)
    {
        x=X;
        y=Y;
    }        
    
};

//###################################################
//###################################################

class Soldiers
{
private:
    int X,Y,Color;
    char Charecter = 'S' ;
    short Type;
public:
    Soldiers(int x,int y,int color,short type,char charector)
    {
        Charecter = charector;     
        Type = type;
        X = x;
        Y = y;
        Color = color;
        //setTextColor(Color);
        if(type == 1)
            PlayerOne[X][Y] = Charecter;
        if(type == 2)
            PlayerTwo[X][Y] = Charecter; 
		GameBoard[X][Y] = Charecter;   	   
        //setTextColor('F');
    }
    void Move(int x,int y)
    {
        if(Type == 1)
        {
            if((PlayerOne[x][y]=='_') && (((X+1==x || X-1==x)&&(Y==y))||((Y+2==y || Y-2==y) && X==x)))
            {
                PlayerOne[X][Y] = '_';
                GameBoard[X][Y] = '_';
//                NextLevel = false;
                X = x;
                Y = y;
                PlayerTwo[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerOne[X][Y] = Charecter;
                GameBoard[X][Y] = Charecter;
            }
        }
        else if(Type == 2)
        {
            if((PlayerTwo[x][y]=='_') && (((X+1==x || X-1==x)&&(Y==y))||((Y+2==y || Y-2==y) && X==x)))
            {
                PlayerTwo[X][Y] = '_';
                GameBoard[X][Y] = '_';
//                NextLevel = false;
                X = x;
                Y = y;
                PlayerOne[X][Y] = '_';
                GameBoard[X][Y] = '_';
                PlayerTwo[X][Y] = Charecter;
                GameBoard[X][Y] = Charecter;
            }   
        }
        else
        {
//            NextLevel = true;
        }
        
    }

    bool Select(int x,int y)
    {
        if(X==x && Y==y)
            return true;
        else
        {
            return false;    
    	}
	}

    void Save(int &x,int &y)
    {
        x=X;
        y=Y;
    }    
	
};
//###################################################
//###################################################
int ChangeY(int x)
{
    return x-1;
}

void ChangeX(char ch,int &x)
{
    switch(ch)
    {
        case 'a':x = 4;break; 
        case 'b':x= 6;break;
        case 'c':x= 8;break;
        case 'd':x= 10;break;
        case 'e':x= 12;break;
        case 'f':x= 14;break;
        case 'g':x= 16;break;
        case 'h':x= 18;break;
        case 'i':x= 20;break;
        case 'j':x= 22;break;
        case 'k':x= 24;break;
        case 'l':x= 26;break;
    }
}

void PrintMapGameBoard()
{
    char ch;
    for(int i=0;i<17;i++)
    {
        for(int j=0;j<28;j++)
        {
            if(GameBoard[i][j] == '#')
            {
                cout<<' ';
            }
            else if(GameBoard[i][j] == '|')
            {
            	cout<<'\n';
			}
            else
            {
            	if(GameBoard[i][j]=='S' || GameBoard[i][j]=='H' || GameBoard[i][j]=='G')
            	{
            		setTextColor(9);
            		cout<<GameBoard[i][j];
            		setTextColor(7);
            		
				}else if(GameBoard[i][j]=='s' || GameBoard[i][j]=='h' || GameBoard[i][j]=='g')
				{
                    ch=GameBoard[i][j]-32;
					setTextColor(6);
					cout<<ch;
					setTextColor(7);
				}else
				{
					setTextColor(7);
					cout<<GameBoard[i][j];
					setTextColor(7);
				}
				setTextColor(7);
				
                
            }
        }   
    }
}
//###################################################
//###################################################

void LoadMap(string name)
{
	string  mapname=name;
	ifstream loadmap(mapname);
	if (!loadmap)
        cerr<<"Erorr !!!";
    for(int i=0;i<17;i++)
    {
        loadmap>>GameBoard[i];
    } 
    loadmap.close();
    for(int i=0;i<17;i++)
    {
		GameBoard2[i]=GameBoard[i];
    }
    for(int i=0;i<17;i++)
    {
		PlayerOne[i]=GameBoard[i];
    }    
    for(int i=0;i<17;i++)
    {
		PlayerTwo[i]=GameBoard[i];
    }
	system("cls");    
}


//###################################################
//###################################################

int main()
{
    int y,j;
    int ix,iy;
    char dx,di,type;
	int x=0,i=0;
	int selectmentype=0;
	Camputer PC;
	int wa=0;
    int load[28][2];



    ifstream save("newgame");
	if (!save)
        cerr<<"Erorr !!!";
    for(int i=0;i<28;i++)
    {
        save>>load[i][0];
        save>>load[i][1];
    } 
    save.close();
        

    string username;
    int m;
	bool sav = false;
    do{
        typem m0("Sadra Zadeh Khameneh - Mohammad Taherifard\n Project  972164019-972164004 \n\n|");
        typem m1("1.Single Player\n|");
        typem m2("2.Multi Player\n|");
        typem m5("3.Change Map\n|");
        typem m3("4.LOAD Game\n|");
        typem m4("0.EXIT\n|");
        m0.printmls(25);
        m1.printmls(25);
        m2.printmls(25);
        m5.printmls(25);
        m3.printmls(25);
        m4.printmls(25);
        cin>>m;
        switch(m)
        {
            case 0:exit(0);
            case 1:
                system("cls");
                CamputerPlayer = true;
                cout<<"  Enter your username : ";
                cin>>username;        
                break;
            case 2:
                system("cls");
                CamputerPlayer = false;
                cout<<"  Enter your username : ";
                cin>>username;        
                break;

            case 3:
                cout<<"1-map1\n";
                cout<<"2-map2\n";
                cout<<"3-map3\n";
                cout<<"4-map4\n";
                cin>>wa;
                switch(wa)
                {
                    case 2:LoadMap("Map_02.txt");
                    case 3:LoadMap("Map_03.txt");
                    case 4:LoadMap("Map_04.txt");
                }
                break;			
                    
            case 4:
                do
                {
                sav=false;
                cout<<"Enter username: ";
                cin>>username;
                ifstream save(username);
                if (!save)
                    sav = true;
                    system("cls");
                }while(sav);
                ifstream save(username);
                save>>CamputerPlayer;
                save>>wa;
                for(int i=0;i<28;i++)
                {
                    save>>load[i][0];
                    save>>load[i][1];
                } 
                save.close();
                switch(wa)
                {
                    case 1:LoadMap("Map_01.txt");
                    case 2:LoadMap("Map_02.txt");
                    case 3:LoadMap("Map_03.txt");
                    case 4:LoadMap("Map_04.txt");
                }
                break;
            
    //       default:cout<<"is wrong!";exit(0);
        }
    }while(m==3);
            Soldiers SoldiersPlayerOne[8]=
        {
            {load[0][0],load[0][1],6,1,'S'},
            {load[1][0],load[1][1],6,1,'S'},
            {load[2][0],load[2][1],6,1,'S'},
            {load[3][0],load[3][1],6,1,'S'},
            {load[4][0],load[4][1],6,1,'S'},
            {load[5][0],load[5][1],6,1,'S'},
            {load[6][0],load[6][1],6,1,'S'},
            {load[7][0],load[7][1],6,1,'S'},
        };

        Soldiers SoldiersPlayerTwo[8]=
        {
            {load[8][0],load[8][1],9,2,'s'},
            {load[9][0],load[9][1],9,2,'s'},
            {load[10][0],load[10][1],9,2,'s'},
            {load[11][0],load[11][1],9,2,'s'},
            {load[12][0],load[12][1],9,2,'s'},
            {load[13][0],load[13][1],9,2,'s'},
            {load[14][0],load[14][1],9,2,'s'},
            {load[15][0],load[15][1],9,2,'s'},
        };

        Cavalry CavalryPlayerOne[4]=
        {
            {load[16][0],load[16][1],6,1,'H'},
            {load[17][0],load[17][1],6,1,'H'},
            {load[18][0],load[18][1],6,1,'H'},
            {load[19][0],load[19][1],6,1,'H'},

        };

        Cavalry CavalryPlayerTwo[4]=
        {
            {load[20][0],load[20][1],9,2,'h'},
            {load[21][0],load[21][1],9,2,'h'},
            {load[22][0],load[22][1],9,2,'h'},
            {load[23][0],load[23][1],9,2,'h'},

        };

        General GeneralsPlayerOne[2]=
        {
            {load[24][0],load[24][1],6,1,'G'},
            {load[25][0],load[25][1],6,1,'G'},
        };

        General GeneralsPlayerTwo[2]=
        {
            {load[26][0],load[26][1],9,2,'g'},
            {load[27][0],load[27][1],9,2,'g'},
        };
	
	///////////////////////////////
	
	GameBoard[0][0]='#';
	GameBoard2[0][0]='#';
	PlayerOne[0][0]='#';
	PlayerTwo[0][0]='#';
	
	//////////////////////////////
    PrintMapGameBoard();
    Sleep(1000);
        do
        {

            do
            {
                cout<<"\n\nPlayer One ! \n please select your mantype : (Soldiers->s,Cavalry->c,General->g) : ";
                try
                {
                    cin>>type;
                }catch(exception)
                {
                    cout<< "erorr";
                    exit(0);
                }
                cout<<" please select your Y : (1-16) : ";
                try
                {
                cin>>y;
                }catch(exception)
                {
                    cout<<"erorr";
                    exit(0);
                }
                cout<<" please select your X : (a-l) : ";
                cin>>dx;
                cout<<" please select Y of target  : (1-16) : ";  
                cin>>j;
                cout<<" please select X of target  : (a-l) : ";
                cin>>di;
                ChangeX(dx,x);
                y=ChangeY(y);
                ChangeX(di,i);
                j=ChangeY(j);
                switch(type)
                {
                    case 's':
                        for(int t=0;t<8;t++)
                        {
                            if(SoldiersPlayerOne[t].Select(y,x))
                                if(GameBoard[y][x]=='S')
                                    SoldiersPlayerOne[t].Move(j,i);
//                                else 
//                                    NextLevel = true;				
                        }
                        break;
                    case 'c':
                        for(int t=0;t<4;t++)
                        {
                            if(CavalryPlayerOne[t].Select(y,x))
                                if(GameBoard[y][x]=='H')
                                    CavalryPlayerOne[t].Move(j,i);
//                                else 
//                                    NextLevel = true;				
                        }
                        break;            		
                    
                    case 'g':
                        for(int t=0;t<2;t++)
                        {
                            if(GeneralsPlayerOne[t].Select(y,x))
                                if(GameBoard[y][x]=='G')
                                    GeneralsPlayerOne[t].Move(j,i);
//                                else 
//                                    NextLevel = true;	
                        }
                        break;					
                    
                    default : NextLevel = true;break;	
                        
                }
                
                
                system("cls");             
                PrintMapGameBoard();

                if(GameBoard2!=GameBoard)
                    break; 

            }while(NextLevel);
        for(int i=0;i<17;i++)
            	GameBoard2[i] = GameBoard[i];    
        do
        {
            if(!CamputerPlayer)
            {
            cout<<"\n\nPlayer Two ! \n please select your mantype : (Soldiers->s,Cavalry->c,General->g) : ";
            cin>>type;
            cout<<" please select your Y : (1-16) : ";
            cin>>y;
            cout<<" please select your X : (a-l) : ";
            cin>>dx;
            cout<<" please select Y of target  : (1-16) : ";  
            cin>>j;
            cout<<" please select X of target  : (a-l) : ";
            cin>>di;
            ChangeX(dx,x);
            y=ChangeY(y);
            ChangeX(di,i);
            j=ChangeY(j);
            }
           if(CamputerPlayer)
           {
           		srand(time(0));
				selectmentype=rand()%3;
               if(selectmentype==0)
               {
                    type='s';
                    do
                    {
						srand(time(0));
                        SoldiersPlayerTwo[rand()%8].Save(ix,iy);
                        if(PlayerTwo[ix][iy]!='_')
                            {
                               x=iy;
                               y=ix; 
                               break;
                            }   
                    }while(true);

                PC.PcSoldiers(y,x,j,i);    
               }
               
               else if(selectmentype==1)
               {
                    type='c';
                    do
                    {
						srand(time(0));
                        CavalryPlayerTwo[rand()%4].Save(ix,iy);
                        if(PlayerTwo[ix][iy]!='_')
                            {
                               x=iy;
                               y=ix; 
                               break;
                            }   
                    }while(true);

                PC.PcCavalry(y,x,j,i);

//				PC.PcSoldiers(y,x,j,i);    
               }
               else if(selectmentype==2)
               {
                    type='g';
                    do
                    {
						srand(time(0));
                        GeneralsPlayerTwo[rand()%2].Save(ix,iy);
                        if(PlayerTwo[ix][iy]!='_')
                            {
                               x=iy;
                               y=ix; 
                               break;
                            }   
                    }while(true);

                PC.PcGeneral(y,x,j,i);
;    
               }                               
               
           }
            switch(type)
            {
                case 's':
                    for(int t=0;t<8;t++)
                    {
                            if(SoldiersPlayerTwo[t].Select(y,x))
                                if(GameBoard[y][x]=='s')
                                    SoldiersPlayerTwo[t].Move(j,i);
//                            else 
//                                NextLevel = true;				
                    }
                case 'c':
                    for(int t=0;t<4;t++)
                    {
                            if(CavalryPlayerTwo[t].Select(y,x))
                                if(GameBoard[y][x]=='h')
                                    CavalryPlayerTwo[t].Move(j,i);
//                            else 
//                                NextLevel = true;				
                    }            		
                    
                    case 'g':
                    for(int t=0;t<2;t++)
                    {
                            if(GeneralsPlayerTwo[t].Select(y,x))
                                if(GameBoard[y][x]=='g')
                                    GeneralsPlayerTwo[t].Move(j,i);
//                            else 
//                                NextLevel = true;				
                    }					
                    
//                    default : NextLevel = true;
                    
                }
            
            
            system("cls");             
                PrintMapGameBoard();

            if(GameBoard2!=GameBoard)
                break;    

            }while(true);
            
            
            system("cls");             
        PrintMapGameBoard();

        if(GameBoard[15][14]=='s' && GameBoard[15][16]=='s')
        {
            cout<<"Player 2 is WIN !";
            exit(0);
        }

        if(GameBoard[0][14]=='S' && GameBoard[0][16]=='S')
        {
            cout<<"Player 1 is WIN !";
            exit(0);
        }

        ofstream save(username);
        {
        	save<<CamputerPlayer<<'\n';
        	save<<wa<<'\n';
            int x,y;
            for(int i=0;i<8;i++)
            {
                SoldiersPlayerOne[i].Save(x,y);
                if(PlayerOne[x][y]!='_')
                	save<<x<<'\n'<<y<<'\n';
                else
					save<<'0'<<'\n'<<'0'<<'\n';	
            }
            for(int i=0;i<8;i++)
            {
                SoldiersPlayerTwo[i].Save(x,y);
                if(PlayerTwo[x][y]=='s')
                	save<<x<<'\n'<<y<<'\n';
                else
					save<<'0'<<'\n'<<'0'<<'\n';
            }
            for(int i=0;i<4;i++)
            {
                CavalryPlayerOne[i].Save(x,y);
                if(PlayerOne[x][y]=='H')
                	save<<x<<'\n'<<y<<'\n';
                else
					save<<'0'<<'\n'<<'0'<<'\n';
            }
            for(int i=0;i<4;i++)
            {
                CavalryPlayerTwo[i].Save(x,y);
                if(PlayerTwo[x][y]=='h')
                	save<<x<<'\n'<<y<<'\n';
                else
					save<<'0'<<'\n'<<'0'<<'\n';
            }
            for(int i=0;i<2;i++)
            {
                GeneralsPlayerOne[i].Save(x,y);
                if(PlayerOne[x][y]=='G')
                	save<<x<<'\n'<<y<<'\n';
                else
					save<<'0'<<'\n'<<'0'<<'\n';
            }
            for(int i=0;i<2;i++)
            {
                GeneralsPlayerTwo[i].Save(x,y);
                if(PlayerTwo[x][y]=='g')
                	save<<x<<'\n'<<y<<'\n';
                else
					save<<'0'<<'\n'<<'0'<<'\n';
            }
        }
        save.close();

    }while(true);

        
    return 0;
}
