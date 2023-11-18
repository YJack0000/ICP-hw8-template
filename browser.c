#include <stdio.h>
#include <stdlib.h>
#include "webpage.h"
#include "webpage_stack.h"
#include "browser.h"

void init_browser(Browser* browser, int capacity) {
    make_empty(&browser->_back, capacity);
    make_empty(&browser->_forward, capacity);
    browser->_current = NULL;
}

void destroy_browser(Browser* browser) {
    clear_stack(&browser->_back);
    clear_stack(&browser->_forward);
    free(browser);
}

void print_current_webpage(Browser* browser) {
    // TODO
}

void navigate_to(Browser* browser, WebPage* page) {
    // TODO
}

void navigate_back(Browser* browser) {
    // TODO
}

void navigate_forward(Browser* browser) {
    // TODO
}