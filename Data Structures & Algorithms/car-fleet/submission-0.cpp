class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for(int i = 0 ; i < position.size() ; i++)
        {
            cars.push_back({position[i] , speed[i]});
        }
        sort(cars.rbegin() , cars.rend());
        int fleet = 0 ; 
        double currentfleettime = 0 ; 
        for(auto c : cars)
        {
            int pos = c.first;
            int spd = c.second;
            double time = (double)(target - pos) / spd ;
            if(time > currentfleettime)
            {
                fleet++;
                currentfleettime = time ; 
            }
        }
        return fleet; 
    }
};
