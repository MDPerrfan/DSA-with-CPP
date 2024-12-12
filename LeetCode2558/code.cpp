  long long pickGifts(vector<int>& gifts, int k) {
       priority_queue<int>maxHeap(gifts.begin(),gifts.end());
       for(int i=0;i<k;i++){
        int maxPile=maxHeap.top();
        maxHeap.pop();
        maxHeap.push(floor(sqrt(maxPile)));
       }
       long long total=0;
       while(!maxHeap.empty()){
        total+=maxHeap.top();
        maxHeap.pop();
       }
       return total;
    }