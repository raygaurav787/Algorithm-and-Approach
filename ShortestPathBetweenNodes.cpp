int count=0;
    while(x!=y){
    if(x>y) x/=2;
    else  y/=2;
    count++;
    }
    return count;
    }
/* greedy implementation to 
shortest path between the nodes as
we were given the numbers*/
