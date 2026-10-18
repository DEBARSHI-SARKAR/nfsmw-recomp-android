/* speed.exe 007d9d20 __set_exp; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __set_exp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

float10 __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_14;
  
  local_14 = (double)CONCAT26(param_1._6_2_ & 0x800f | (param_2 + 0x3fe) * 0x10,(undefined6)param_1)
  ;
  return (float10)local_14;
}

