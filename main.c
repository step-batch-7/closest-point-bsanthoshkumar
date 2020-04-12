#include "point.h"
#include <stdio.h>

int main(void)
{
  Point food_locations[5] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  Point current_location = {36,97};
  Point closest_food_location;
  get_closest_food(food_locations,5,current_location,&closest_food_location);
  printf("Location of organism: [%d %d],  Closest food target : [%d %d]",current_location.x,current_location.y,closest_food_location.x,closest_food_location.y);

  return 0;
}