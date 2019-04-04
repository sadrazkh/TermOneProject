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

