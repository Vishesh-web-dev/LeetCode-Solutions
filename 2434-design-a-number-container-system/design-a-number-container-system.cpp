class NumberContainers {
public:
    unordered_map<int,int> container;
    unordered_map<int,set<int>> smallestIdxs;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(container.find(index) != container.end()){
            int value = container[index];
            smallestIdxs[value].erase(index);
            if(smallestIdxs[value].size() == 0){
                smallestIdxs.erase(value);
            }
        }
        container[index] = number;
        smallestIdxs[number].insert(index);
    }
    
    int find(int number) {
        return smallestIdxs.find(number) != smallestIdxs.end() ? *smallestIdxs[number].begin() : -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */