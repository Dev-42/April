class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> startingMap;
    unordered_map<string,pair<double,int>> endingMap;
    UndergroundSystem() 
    {
        
    }
    
    void checkIn(int id, string stationName, int t)
    {
        startingMap[id] = {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) 
    {
        auto checkIn = startingMap[id];
        startingMap.erase(id);
        string route = checkIn.first + "_" + stationName;
        endingMap[route].first += t - checkIn.second;
        endingMap[route].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) 
    {
        string route = startStation + "_" + endStation;
        auto &rout = endingMap[route];
        return rout.first/rout.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */