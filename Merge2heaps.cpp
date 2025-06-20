
class Solution{
    public:
    void heapify(vector<int> &a,int i,int n){
        int left = 2*i+1;
        int right = 2*i+2;
        int largest = i;
        if(left<n && a[left]>a[largest]){
            largest = left;
        }
        if(right<n && a[right]>a[largest]){
            largest = right;
        }
        if(largest != i){
            swap(a[i],a[largest]);
            heapify(a,largest,n);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        for(auto i:b){
            a.push_back(i);
        }
        n = n+m;
        for(int i=(n/2)-1;i>=0;i--){
            heapify(a,i,n);
        }
        return a;
    }
};
