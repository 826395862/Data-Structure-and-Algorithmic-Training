#include "example6_2.h"
#include <algorithm>

int ComputeLengthOfBTChar(BTNodeChar *bt_char) {
    if(nullptr != bt_char) {
        return 1 + std::max(ComputeLengthOfBTChar(bt_char->lchild), ComputeLengthOfBTChar(bt_char->rchild));
    } else {
        return 0;
    }
}