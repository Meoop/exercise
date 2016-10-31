#include <iostream>

using std::cin; 
using std::cout; 
using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech = '\0';
    while (cin >> std::noskipws >> ch)
    {
        switch (ch)
        {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
                if (prech == 'f') ++fiCnt;
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newLineCnt;
                break;
            case 'f':
                if (prech == 'f') ++ffCnt;
                break;
            case 'l':
                if (prech == 'f') ++flCnt;
                break;
        }
        prech = ch;
    }
    
    cout << "Number of vowel a(A): " << aCnt << '\n'
         << "Number of vowel e(E): " << eCnt << '\n'
         << "Number of vowel i(I): " << iCnt << '\n'
         << "Number of vowel o(O): " << oCnt << '\n'
         << "Number of vowel u(U): " << uCnt << '\n'
         << "Number of space: " << spaceCnt << '\n'
         << "Number of tab char: " << tabCnt << '\n'
         << "Number of new line: " << newLineCnt << '\n'
         << "Number of ff: " << ffCnt << '\n'
         << "Number of fl: " << flCnt << '\n'
         << "Number of fi: " << fiCnt << endl;
    
    return 0;
}
