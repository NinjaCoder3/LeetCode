class Solution {
public:
int jump(vector<int> &ar)
{
    int ans = 0;
    int l  = 0, r = 0;
    while (r < ar.size() - 1)
    {
        int farthest = 0;
        for (int i = l; i < r + 1; i++)
        {
            farthest = max(farthest, ar[i] + i);
        }
        l = r + 1;
        r = farthest;
        ans++;
    }
    return ans;
}
};