#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main() {
    
    
    string alphabets {" 'abc1de@fg3hi=jkl2>;m{n9o!+p|8\"q%r<[s6t*u-vw&x]yz,5A}_:B4#C.D(E7FGH$I)JK/LMN^OP0QRSTUVWXYZ"};
    string encrypted_alphabets {"qwe+r0t\"y3ui{]^op8a}@s=d2*fgh(j7,&5k[#9:lz!x_c4v.bn|;/m$LKJH'GFDSA%1POI6U-Y<TRE>WQMNBVCXZ) "};
    string final_encryption {};
        
    cout << "Enter your secret message" << endl;
    string user_typo;
    getline(cin , user_typo);
    
    cout << "Encrypting message................." << endl;
    
    for (auto i: user_typo) {
        size_t position = alphabets.find(i);
        
        if ( position == string::npos ){
            final_encryption += i;
        }
        else {
           char a { encrypted_alphabets.at(position)};
           final_encryption += a;
        }
    }
    cout << final_encryption << endl;
    return 0;
}