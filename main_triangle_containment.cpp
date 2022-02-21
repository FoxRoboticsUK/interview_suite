#include <assert.h>

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "triangle_containment.hpp"

/* Three distinct points are plotted at random on a Cartesian plane, for which -1000 ≤ x, y ≤ 1000, such that a triangle is formed.
 * 
 * Consider the following two triangles:
 * 
 * A(-340,495), B(-153,-910), C(835,-947)
 * X(-175,41), Y(-421,-714), Z(574,-645)
 * 
 * It can be verified that triangle ABC contains the origin, whereas triangle XYZ does not.
 * 
 * Using triangles.txt (right click and 'Save Link/Target As...'), a 27K text file containing the co-ordinates of one thousand "random" triangles, find the number of triangles for which the interior contains the origin.
 * 
 * NOTE: The first two examples in the file represent the triangles in the example given above.
 */

struct Row {
  long p1x, p1y, p2x, p2y, p3x, p3y;
  Row(std::vector<long> row) {
    p1x = row[0];
    p1y = row[1];
    p2x = row[2];
    p2y = row[3];
    p3x = row[4];
    p3y = row[5];
  }
};

/* Edit this function any way you see fit to achieve the goal.
 * Build and run the executable to test your answer.
 */
long getTestCount() { return 0; }

long getReferenceCount(const std::vector<Row>& triangle_corners) {
  long reference_counter = 0;
  TriangleContainmentTester tester;
  for (auto triangle : triangle_corners) {
    TriangleContainmentTester::Point2 p1{triangle.p1x, triangle.p1y};
    TriangleContainmentTester::Point2 p2{triangle.p2x, triangle.p2y};
    TriangleContainmentTester::Point2 p3{triangle.p3x, triangle.p3y};
    if (tester.isInside(p1, p2, p3)) ++reference_counter;
  }

  return reference_counter;
}

void runTest(const std::vector<Row>& triangle_corners) {
  long reference_counter = getReferenceCount(triangle_corners);
  long test_counter = getTestCount();

  assert(reference_counter == test_counter && "Reference not equal to test");
}

int main(int argc, char** argv) {
  std::ifstream infile{"../triangles.txt"};

  std::vector<Row> triangle_corners;
  std::string line;
  while (std::getline(infile, line)) {
    std::stringstream line_stream{line};
    std::string cell;
    std::vector<long> row;
    while (std::getline(line_stream, cell, ',')) {
      row.push_back(std::stoi(cell));
    }
    triangle_corners.push_back(Row{row});
  }

  runTest(triangle_corners);
  std::cout << "All tests were successfully passed!" << std::endl;

  return 0;
}
