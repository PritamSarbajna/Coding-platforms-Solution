string merge(string word1, string word2) {
        string ans;

        // Adding characters alternately 
        int i=0; // i required for future so declared outside of loop
        for(; i<word1.size() && i<word2.size(); i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }

        // Appending the last part of greater length string
        if(i == word1.size()){
            for(int j=i; j<word2.size(); j++){
                ans.push_back(word2[j]);
            }
        }
        else if(i == word2.size()){
            for(int j=i; j<word1.size(); j++){
                ans.push_back(word1[j]);
            }
        }

        return ans;
    }
