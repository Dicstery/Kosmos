#include <emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    int getStarCount() {
        return 0;
    }
}
