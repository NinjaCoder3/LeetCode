class Solution {
public:
   int findKthLargest(vector<int> &ar, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;// min pq
    for (int i = 0; i < k; i++)
    {
        // assuming my 1st k elements are largerst
        pq.push(ar[i]);
    }
    for (int i = k; i < ar.size(); i++)
    {
        if (ar[i] > pq.top())
        {
            pq.pop();
            pq.push(ar[i]);
        }
    }
    return pq.top();
}
};