/* speed.exe 007d9d90 __add_exp; analysis pseudocode, not buildable source.
 * calls 007d9d20 __set_exp
 */

/* Library Function - Single Match
    __add_exp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __add_exp(undefined8 param_1,int param_2)

{
  __set_exp(param_1,(short)((int)(param_1._6_2_ & 0x7ff0) >> 4) + -0x3fe + param_2);
  return;
}

