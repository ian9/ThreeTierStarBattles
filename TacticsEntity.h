#ifndef TACTICSENTITY_H_INCLUDED
#define TACTICSENTITY_H_INCLUDED


enum Entity{
    empty,
    ship,
    asteroid
};

class TacticsEntity {

    public:

        Entity entity;

    public:

        TacticsEntity();
        TacticsEntity(Entity en);
        ~TacticsEntity();

};

#endif // TACTICSENTITY_H_INCLUDED