class Twitter {

private:

        unordered_map<int,vector<pair<int,int>>> t;

        unordered_map<int,set<int>> fol;

        long long time;
public:

    Twitter() {

        time = 0;
    }
    
    void postTweet(int userId, int tweetId) {

        t[userId].push_back({time++, tweetId});
    }
    

    vector<int> getNewsFeed(int userId) {

        priority_queue<pair<int,int>> maxheap;

        for(auto it=t[userId].begin(); it != t[userId].end(); it++){

            maxheap.push(*it);
        }

        for(auto it1 = fol[userId].begin(); it1 != fol[userId].end(); it1++){

            int usr = *it1;

            for(auto it2 = t[usr].begin(); it2 != t[usr].end(); it2++){

                maxheap.push(*it2);
            }
        }
        vector<int> res;

        while(maxheap.size() > 0){

            res.push_back(maxheap.top().second);

            if(res.size() == 10) break;

            maxheap.pop();
        }
        return res;
    }
    
    
    void follow(int followerId, int followeeId) {

        if(followerId != followeeId){

            fol[followerId].insert(followeeId);
        }
    }
    
    void unfollow(int followerId, int followeeId) {

        fol[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */