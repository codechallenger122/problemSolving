## 방법 1. nCr = n-1Cr-1 + n-1Cr 이용하는 방법.

// chars 에서 outArr 로 element 를 뽑아서 넘겨줘야함.
// 이때 뽑을수도, 넘어갈 수도 있기에 outArr 쪽 index 와 chars 쪽 index(=depth) 를 따로 가져감.
void combination(vector<char>& chars, vector<char> outArr, int r, int index, int depth) {
    if(r==0) {
        for(int i=0;i<outArr.size();i++) cout << outArr[i] << " ";
        cout << endl;
        return;
    }
    if(depth == chars.size()) return;
    outArr[index] = chars[depth];
    combination(chars, outArr, r-1, index+1, depth+1); // n-1 C r-1   <-- depth 가 1 증가한다는 것은 1개를 건너뛴 것임.
    combination(chars, outArr, r, index, depth+1);     // n-1 C r
}  // r 은 r-1, r   & index 는 index, index+1,  & depth 는 depth+1 만 가능
   // 따라서 depth의 변화량이 가장 클 것임.
   // depth 가 size 와 같아진다면 return 해야함.

int main()
{
    vector<char> chars =  {'a', 'b', 'c', 'd', 'e'};
    vector<char> outArr(3);
    int r = outArr.size();
    combination(chars, outArr, r, 0, 0);

    return 0;
}

int combination(int n, int r)
{
    if(n == r || r == 0) 
        return 1; 
    else 
        return combination(n - 1, r - 1) + combination(n - 1, r);
}

======================================================================================================
    
