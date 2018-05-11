int Solution::romanToInt(string A) {

    int len=A.size();
    int ans=0;
    for(int i=0;i<len;i++){
        if(i<len-1&&A[i]=='I'&&A[i+1]=='V'){
            ans=ans+4;
            i++;
        }else if(i<len-1&&A[i]=='I'&&A[i+1]=='X'){
            ans=ans+9;
            i++;
        }else if(i<len-1&&A[i]=='X'&&A[i+1]=='L'){
            ans=ans+40;
            i++;
        }else if(i<len-1&&A[i]=='X'&&A[i+1]=='C'){
            ans=ans+90;
            i++;
        }else if(i<len-1&&A[i]=='C'&&A[i+1]=='D'){
            ans=ans+400;
            i++;
        }else if(i<len-1&&A[i]=='C'&&A[i+1]=='M'){
            ans=ans+900;
            i++;
        }else if(A[i]=='I'){
            ans+=1;
        }else if(A[i]=='V'){
            ans+=5;
        }else if(A[i]=='X'){
            ans+=10;
        }else if(A[i]=='L'){
            ans+=50;
        }else if(A[i]=='C'){
            ans+=100;
        }else if(A[i]=='D'){
            ans+=500;
        }else if(A[i]=='M'){
            ans+=1000;
        }
    }
    return ans;
}
