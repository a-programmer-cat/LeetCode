class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.find('a')!=string::npos&&
           sentence.find('b')!=string::npos&&
           sentence.find('c')!=string::npos&&
           sentence.find('d')!=string::npos&&
           sentence.find('e')!=string::npos&&
           sentence.find('f')!=string::npos&&
           sentence.find('g')!=string::npos&&
           sentence.find('h')!=string::npos&&
           sentence.find('i')!=string::npos&&
           sentence.find('j')!=string::npos&&
           sentence.find('k')!=string::npos&&
           sentence.find('l')!=string::npos&&
           sentence.find('m')!=string::npos&&
           sentence.find('n')!=string::npos&&
           sentence.find('o')!=string::npos&&
           sentence.find('p')!=string::npos&&
           sentence.find('q')!=string::npos&&
           sentence.find('r')!=string::npos&&
           sentence.find('s')!=string::npos&&
           sentence.find('t')!=string::npos&&
           sentence.find('u')!=string::npos&&
           sentence.find('v')!=string::npos&&
           sentence.find('w')!=string::npos&&
           sentence.find('x')!=string::npos&&
           sentence.find('y')!=string::npos&&
           sentence.find('z')!=string::npos){
            return true;
        }
        return false;
    }
};
