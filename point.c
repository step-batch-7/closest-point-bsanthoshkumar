#include "point.h"
#include <math.h>

double distance_between_points(Point a,Point b)
{
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  double length = distance_between_points(current_location, *closest_food_location);
  for(int index = 0;index < points_length;index++)
  {
    double length_to_currentfood = distance_between_points(current_location, food_points[index]);
    if(length_to_currentfood < length)
    {
      length = length_to_currentfood;
      closest_food_location->x = food_points[index].x;
      closest_food_location->y = food_points[index].y;
    }
  }
}
