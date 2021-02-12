#pragma once

enum class Direction {
    TOP,
    TOP_RIGHT,
    BOTTOM_RIGHT,
    BOTTOM,
    BOTTOM_LEFT,
    TOP_LEFT
};


/*
                 TOP
                ______
      TOP_LEFT /      \ TOP_RIGHT
              /        \
              \        /
   BOTTOM_LEFT \______/ BOTTM_RIGHT
                BOTTOM
*/
