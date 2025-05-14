string countAndSay(int n) {
    string t="1";
    for(int i=0;i<n-1;i++){
    string l="";
    int m=t.length();
    int count=1;
    for(int j=0;j<m;j++){
    while(t[j]==t[j+1]){
    count++;
    j++;
    }
    
    l=l+to_string(count)+t[j];
    count=1;
    }
    t=l;
    }
    return t;
}
/* So this is an iterative approach 
where the outer loop will run for 
(n-2+1)=(n-1)times and 1st iteration 
would give result as "1".

Now we would do iteration on the above
t string and create the count and say 
string on every iteration.

in the inner loop while will take iteration 
and then in that we will create the string
in every step and after creation we would 
assign it to the t string and process will
repeat*/
