// array of sorted integers diya hai and hamlog ko ranges nikalna hai 
// agar numbers consecutive hai 1,2,3,4 matlab ye 1->4 ek range ho gaya and agar 2 ka difference hai ya jyda matlab
// wo singe hi range banega like 4,7,9 ye sab single range hai "4, "7" , "9"

// i=0 start karenge and i+1 and i ka diff if ===1 matlab range mein hai and agar nahi hai loop break and next range dhundho



 int n=nums.size();
        vector<string> result;

        for(int i=0; i<n;i++)
        {
           int start=nums[i];

            // while(i+1<n&&nums[i+1]-nums[i]==1) //integer overflow ho raha thaa

            while(i+1<n&&nums[i]+1==nums[i+1])    //overflow ko tackle kiya 
            {
                i++;

            }
            if(start!=nums[i])
            {
                result.push_back(to_string(start)+"->"+to_string(nums[i])); //
            }
            else
            {
                result.push_back(to_string(start));
            }
        }
        return result;