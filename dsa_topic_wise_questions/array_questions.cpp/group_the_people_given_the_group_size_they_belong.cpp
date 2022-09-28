vector<vector<int>> groupThePeople(vector<int>& gz) {

  vector<vector<int>> ans, groups(gz.size() + 1);

  for (auto i = 0; i < gz.size(); ++i) {

    groups[gz[i]].push_back(i);

    if (groups[gz[i]].size() == gz[i]) {

      ans.push_back({});
      
      swap(ans.back(), groups[gz[i]]);
    }
  }
  return ans;
}