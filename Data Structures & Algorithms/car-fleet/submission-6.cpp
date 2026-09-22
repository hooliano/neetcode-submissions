class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleets = 0;
        unordered_map<int, float> time_left;

        for (int i = 0; i < position.size(); ++i) {
            float remain = static_cast<float>(target - position[i]) / speed[i];
            time_left[position[i]] = remain;
        }
        std::sort(position.begin(), position.end());

        stack<int> pos(position.begin(), position.end());
        int fleet_leader = pos.top();
        pos.pop();

        while (!pos.empty()) {
            if (time_left[pos.top()] <= time_left[fleet_leader]) {
                pos.pop();
            }
            else {
                ++fleets;
                fleet_leader = pos.top();
                pos.pop();
            }
        }

        return ++fleets;
    }
};
