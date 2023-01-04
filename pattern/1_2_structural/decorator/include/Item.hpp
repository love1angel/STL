//
// Created by Helianthus Xie on 2023/1/4.
//

#ifndef PATTERN_DECORATOR_ITEM_HPP
#define PATTERN_DECORATOR_ITEM_HPP

using Money = double;

class Item {
public:
    virtual ~Item() = default;

    virtual Money price() const = 0;
};

#endif //PATTERN_DECORATOR_ITEM_HPP
