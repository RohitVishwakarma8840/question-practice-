class Solution {
public:
    string defangIPaddr(string address) {
        
string ans;
int index=0;

while(index<address.size()){

if(address[index]=='.'){

ans=ans+"[.]";
}
else{
    ans=ans+address[index];
}

index++;

}

return ans;

    }
};