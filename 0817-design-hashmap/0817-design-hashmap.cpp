class MyHashMap {
public:
int a[1000001];
    MyHashMap() {
        for(int i=0;i<1000001;i++)
        a[i]=-1;   
    }
    void put(int key, int value) {
        a[key]=value;
    }
    int get(int key) {
        if(a[key]==-1) return -1;
        return a[key];   
    }
    void remove(int key) {
        if(a[key]!=-1)
        a[key]=-1;
    }
};