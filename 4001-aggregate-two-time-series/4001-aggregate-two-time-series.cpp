class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1,
                                            vector<vector<int>>& series2) {

        vector<vector<int>> a;
        int n = series1.size(), m = series2.size();
        int i = 0, j = 0;

        while (i < n || j < m) {

            int t;

            if (i == n)
                t = series2[j][0];
            else if (j == m)
                t = series1[i][0];
            else
                t = min(series1[i][0], series2[j][0]);

            int v1 = (i < n) ? series1[i][1] : 0;
            int v2 = (j < m) ? series2[j][1] : 0;

            a.push_back({t, v1 + v2});

            if (i < n && series1[i][0] == t)
                i++;
            if (j < m && series2[j][0] == t)
                j++;
        }

        return a;
    }
};