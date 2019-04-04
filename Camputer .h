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

