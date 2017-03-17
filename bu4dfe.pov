#include "colors.inc"
global_settings { assumed_gamma 1 }
camera {
        location <-50, -10, 350>
        direction <0, 0, -1>
        up <0, 1, 0>
        right <1,0,0>
        look_at <0,0,0> 
}
#declare T_face=pigment{image_map{jpeg "bu4dfe/81/expression1.jpg" interpolate 2}}
light_source{ <2000,2000,  20000> color White}
#include "bu4dfe/81/expression1.inc"
#declare person = object{person}
object{ 
        person
        translate < 0, 0, 118>
        rotate < 0,360*clock,0>
}