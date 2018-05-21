// https://www.youtube.com/watch?v=ixnSfyXhOfE
// https://www.youtube.com/watch?v=AaJlOgUWBJQ
int Solution::isPower(int A) {

    if(A==1){
        return true;
    }
    for(int i=2;i<=sqrt(A);i++){
        double p=log(A)/log(i);
        // cout << p << " " << floor(p) << " " << ceil(p) << endl;
        if((p - (int)p)<0.000000001){
            return true;
        }
    }
    return false;



}
