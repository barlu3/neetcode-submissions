class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            ans=max(ans,min(heights[i],heights[j])*(j-i));
            if(heights[i]<heights[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};


// class Solution {
// public:
//     int maxArea(vector<int>& heights) {
        
//         int l = 0; int r = heights.size() - 1;
//         int max = (r-l) * min(heights[l], heights[r]);

//         while (l < r) {
//             int area = (r-l) * min(heights[l], heights[r]);
//             if (heights[l] <= heights[r]) l++;
//             else if (heights[r] < heights[l]) r--;
//             max = (area > max) ? area : max;
//         } 

//         return max;
//     }
// };
