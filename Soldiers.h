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
