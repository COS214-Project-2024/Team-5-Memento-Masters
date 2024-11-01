#ifndef MAPNODE_H
#define MAPNODE_H
#include <string>
class MapNode
{
private:
    std::string tileType;
    std::string displayChar;
public:
    MapNode(std::string type);
    ~MapNode();
    std::string printNode() const;
};

#endif //MAPNODE_H
