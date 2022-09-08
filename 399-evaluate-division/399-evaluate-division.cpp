class Solution {
public:
    
    double dfs( unordered_map<string,vector<pair<string,double>>> &graph,unordered_set<string> &vis,string start, string end){
      
          if(graph.find(start)==graph.end()) return -1;
          if(start==end) { return 1;}
        
         for(auto a: graph[start]){
             if(vis.count(a.first)) continue;
             vis.insert(a.first);
             double temp= dfs(graph,vis,a.first,end);
             if(temp!=-1) return temp*a.second; 
         }
        return -1;
    }
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
       
        unordered_map<string,vector<pair<string,double>>> graph;
        vector<double> res;
        int n=equations.size();
        for(int i=0;i<n;i++){
            string a=equations[i][0];
            string b=equations[i][1];
            
            graph[a].push_back({b,values[i]});
            graph[b].push_back({a,1/values[i]});
        }
                               
            for(int i=0;i<queries.size();i++){
                if(queries[i][0]==queries[i][1]&& graph.find(queries[i][1])!=graph.end()) { res.push_back(1); continue;}
                if(queries[i][0]==queries[i][1]&& graph.find(queries[i][1])==graph.end()) { res.push_back(-1); continue;}
               
                unordered_set<string> vis;
                res.push_back(dfs(graph,vis,queries[i][0],queries[i][1]));
            }
        return res;
        
    }
};