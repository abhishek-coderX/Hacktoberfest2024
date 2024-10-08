// jude wo hota hai jispe sab trust karte hai but wo kispe bhi trust nahi karta 
// indegree and outdegree ka array bana lo and  jiska indegree will be n-1 and outdegree 0 wahi judge hai

// there is 2nd approch ek hi arry lo lets say count and sabko 0 se initilize kar do and jiska bhi out degre hai usko -1 
// assign karo and indegree to plus 1 karo and last mein array mil jayega jisme 


// 1st approach 
vector<int> in_degree(n+1);
        vector<int> out_degree(n+1);

        for(vector<int> &vec : trust)
        {   in_degree[vec[1]]++;
            out_degree[vec[0]]++;
        
        }

        for(int i=1; i<n+1;i++)
        {
            if(in_degree[i]==n-1 && out_degree[i]==0)
            return i;
            
        }

            return -1;
            

// 2nd approach

