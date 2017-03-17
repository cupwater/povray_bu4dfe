light_source{ <2000,2000,  0> color White}
   // Position <x,y,z>, color of the light

light_source{ <1.4, 1, 0>  color rgb<1,1,1>
              // fade_distance 0.75
            } 


light_source{ <0,0,0> color rgb <1,1,1>   
              spotlight
              point_at<1,0,0>
              radius 20  // hotspot
              tightness 100
              falloff 60
              translate< 1.3, 3, 0>
            }


light_source{ <0,0,0> color rgb <1,1,1>
              cylinder
              point_at<0, 0, 0>
              radius 20
              tightness 100
              falloff 40
              translate< 1.3, 3, 0 >
            }


light_source{ <2,1,0> color rgb <1,1,1>
              parallel
              point_at<1, 0, 0> 
            } 


light_source{ <0,0,0>
              color rgb<1,1,1>
              area_light
              <5, 0, 0> <0, 0, 5>
              4,4 // numbers in directions
              adaptive 0  // 0,1,2,3...
              jitter // random softening
              translate<10, 10,  0>
             }//---- end of area_light


