#ifndef TRIANGLE_CONTAINMENT_HPP_
#define TRIANGLE_CONTAINMENT_HPP_

class TriangleContainmentTester {
 public:
  struct Point2 {
    long x, y;
  };

  bool isInside(Point2 a, Point2 b, Point2 c);

 private:
  const Point2 kOrigin{0, 0};
};

#endif