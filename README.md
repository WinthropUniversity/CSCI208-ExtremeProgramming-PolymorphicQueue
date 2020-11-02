# CSCI208-ExtremeProgramming-PolymorphicQueue
The CSCI208 class will work together on a single project to implement a polymorphic queue.

Right now, there are no files ... we'll have to add them.

right_triangle, square, and circle IS A shape
queue HAS multiple nodes
there is an association between shape and nodes (shape knows about nodes, but
    nodes does not know about shape)
nodes contain next pointer and data
the user interacts with queue


WHAT SHOULD ALL SHAPES HAVE/DO?
    color is protected
    color ie. SetColor() return string;
	SetColor() public
    be able to compute an area ie. GetArea() return double;
	GetArea() public

right_triangle attributes
    protected: double andlge_a, angle_b, base, height;

    GetAngleA(); return double
    SetAngleA(double);
    GetAngleB(); return double
    SetAngleB(double);

    GetBase(); return double
    SetBase(double);
    GetHeight(); return double
    SetHeight(double);
    GetArea(); return double
    GetPerimiter(); return double



node attributes:
    data: *shape
    next: *node

    GetNext(): *node
    GetShape(): *shape


queue attributes:
    head: *node
    tail: *node

    operations...
    InsertToBack(*shape)
    RemoveFromFront: *shape


square attributes:
    base
    height
    
    we need everything from triangle except angles



circle attributes:
    radius

    GetRadius():double
    SetRaius(double)
    GetArea();
    GetPerimiter();
