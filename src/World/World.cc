#include "World.hpp"
World* World::instancePtr=nullptr;

World::~World()
{
    instancePtr=nullptr;
}
void World::GenerateWorld()
{
    for(int i=0;i<GetXSize();i++)
    {
        for(int j=GetYSize()/4 ; j>GetYSize() ; j++)
        {
            worldData.at(i).at(j)=BlockData(BlockData::BlockType::grass);
        }
    }
}
int World::GetXSize()
{
    return static_cast<int>(worldData.size());
}
int World::GetYSize()
{
    return static_cast<int>(worldData.at(0).size());
}
BlockData* World::GetBlockData(int x,int y)
{
    return &(worldData.at(x).at(y));
}
void World::DisplayWorld()
{
    for(int i=0;i<GetXSize();i++)
    {
        for(int j=0;j<GetYSize();j++)
        {
            if(worldData.at(i).at(j).type==BlockData::BlockType::air)
            {
                std::cout<<"a";
            }
        }
    }
}

