// iss question mein simple pattern hai har box mein ek number haii1 ya to -1 and yahi hint hai
// 1 matlab towards right and 1 hai agar last box mein to ball trap hojayega
//-1 matlab towards left and -1 hoga start mein to ball trap hoga 
// 1 and -1 baju baju mein hoga to bhi ball trap ho jayega

  int m=grid.size();  //
        int n=grid[0].size();

        vector<int>result;

        for(int ball=0; ball<n; ball++)
        {
            int row=0;
            int col=ball;
            int block=false;  //This flag will be set to true if the ball gets stuck

            while(row < m && col<n)
            {

                //If the ball moves right
                if(grid[row][col]==1)
                {    // Check if the ball hits a wall (right edge) or a 
                    //V-shaped block (right neighbor is -1)   


                    if(col==n-1 || grid[row][col+1]==-1 ){
                       block =true;  // Ball is blocked and cannot move further
                       break;
                    }
                     col++;
                }
               //if the ball move left
                else if(grid[row][col]==-1)
                {            // Check if the ball hits a wall (left edge) or a                            V-shaped block (left neighbor is 1)

                    if(col==0 || grid[row][col-1]==1)
                    {
                        block=true;  // Ball is blocked and cannot move further
                        break;
                    }
                     col--;
                }

             row++;  // Move the ball one row down
            }
            if(block)
            result.push_back(-1);   // If the ball is blocked, store -1 in the result
            else
            result.push_back(col);
        }
        return result;