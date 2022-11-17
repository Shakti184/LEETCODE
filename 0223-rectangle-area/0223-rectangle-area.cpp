class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        long long A1=abs(ay1-ay2)*abs(ax2-ax1);
        long long A2=abs(by1-by2)*abs(bx2-bx1);
        int c1=max(ax1,bx1),c2=min(ax2,bx2);
        int d1=max(ay1,by1),d2=min(ay2,by2);
        long long inter=0;
        if(c1<c2&&d1<d2){
            inter=(c2-c1)*(d2-d1);
        }
        return A1+A2-inter;
    }
};