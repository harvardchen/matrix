#ifndef _COUNT_HPP_INCLUDED_DSFOIJWOIHJASFLJHASFKJHSFDKAJHIUHRASLFKHJSAFKDJASFKJHASFKHFSDAKJHFSADKJH
#define _COUNT_HPP_INCLUDED_DSFOIJWOIHJASFLJHASFKJHSFDKAJHIUHRASLFKHJSAFKDJASFKJHASFKHFSDAKJHFSADKJH

#include <algorithm>
#include <cstddef>

namespace feng
{

    template<typename Input_Iterator, typename T>
    std::size_t count( Input_Iterator first, Input_Iterator last, const T& v )
    {
        return std::count( first, last, v );
    }

};

#endif//_COUNT_HPP_INCLUDED_DSFOIJWOIHJASFLJHASFKJHSFDKAJHIUHRASLFKHJSAFKDJASFKJHASFKHFSDAKJHFSADKJH

