#include <iostream>
#include<set>
#include <unordered_map>

using namespace std;

int main() {
    int x=10;
    int y=25;
    int z=x+y;
    std::set<int> intsets={1,2,3};
    std::unordered_map<int, std::set<int>> epoch_got_key_req_map_;
    epoch_got_key_req_map_[100]=intsets;

    cout<<"Sum of intsets = " << intsets.size()<<endl;
    cout<<"Sum of epoch_got_key_req_map_ = " << epoch_got_key_req_map_.size()<<endl;
    
     for (std::unordered_map<int, std::set<int>>::iterator itr = epoch_got_key_req_map_.begin(); itr !=epoch_got_key_req_map_.end(); itr++)
		{
			int epoch = itr->first;
			cout <<"epoch: "<< epoch << ",size: "<<itr->second.size()<< endl;
			std::set<int> intsets22 = itr->second;
			cout<< "intsets22: " << intsets22.size();
		}
   epoch_got_key_req_map_.clear();
}
