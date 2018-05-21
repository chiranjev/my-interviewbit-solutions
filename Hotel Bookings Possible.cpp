// https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

    int lena=arrive.size();
    int lend=depart.size();

    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());

    int i=0,j=0,maxroomsneeded=0;
    int roomsneeded=0;
    while(i<lena&&j<lend){
        if(arrive[i]<depart[j]){
            roomsneeded++;
            i++;
            if(roomsneeded>maxroomsneeded){
                maxroomsneeded=roomsneeded;
            }
        }else{
            roomsneeded--;
            j++;
        }
    }
    if(maxroomsneeded>K){
        return 0;
    }else{
        return 1;
    }
}
