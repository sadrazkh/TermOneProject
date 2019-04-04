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

