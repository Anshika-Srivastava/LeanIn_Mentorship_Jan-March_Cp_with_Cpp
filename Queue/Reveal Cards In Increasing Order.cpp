class Solution {
public:
  vector<int> deckRevealedIncreasing(vector<int>& deck) {
    sort(deck.begin(), deck.end());
    queue<int>q;
    vector<int> answer(deck.size());

    for(int i = 0; i != deck.size(); i++) q.push(i);
    
    for(int id = 0; ;q.pop()){
      answer[q.front()] = deck[id++]; q.pop();
      if(q.empty()) break;
      q.push(q.front());
    }
    
    return answer;
  }
};
