class FoodRatings {
public:
    
    unordered_map<string,string>foodcusine;
    
    unordered_map<string,set<pair<int,string>>>food_cuisine_rating;
    
    unordered_map<string,int>rating_map;
    
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        
        for(int i=0;i<foods.size();i++)
        {
            string food=foods[i];
            
            int  rating=ratings[i];
            
            string cusinerate=cuisines[i];
            
           foodcusine[food]=cusinerate;
            
           rating_map[food]=rating; 
            
             food_cuisine_rating[cusinerate].insert({-rating,food});
            
            
        
            
        }
        
    }
    
    void changeRating(string food, int newRating) {
        
        string cusine=foodcusine[food];
        
        int  old=rating_map[food];
        
        rating_map[food]=newRating;
        
        food_cuisine_rating[cusine].erase({-old,food});
        
        
        food_cuisine_rating[cusine].insert({-newRating,food});
        
        
        
        
        
    }
    
    
    string highestRated(string cuisine) {
        
        return begin(food_cuisine_rating[cuisine])->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */