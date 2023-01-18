//problem link:- https://leetcode.com/problems/course-schedule/description/
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        int indeg[n];
        int sz=prerequisites.size();
        memset(indeg,0,n*sizeof(int));
        vector<int> adj[n];
        for(int i=0;i<sz;i++)
        {
           indeg[prerequisites[i][0]]++;
           adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if (indeg[i]==0)
            {
                q.push(i);
            }
        }
        int count=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            count++;
            for(auto it:adj[node])
            {
                indeg[it]--;
                if(indeg[it]==0)
                {
                    q.push(it);
                }
            }

        }
        if (count==n)
        {
            return true;
        }
        return false;

    }
};