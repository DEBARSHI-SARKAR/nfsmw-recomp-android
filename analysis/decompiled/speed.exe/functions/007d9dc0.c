/* speed.exe 007d9dc0 __set_bexp; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __set_bexp
   
   Library: Visual Studio */

float10 __set_bexp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26(param_1._6_2_ & 0x800f | param_2 << 4,(undefined6)param_1);
  return (float10)local_c;
}

