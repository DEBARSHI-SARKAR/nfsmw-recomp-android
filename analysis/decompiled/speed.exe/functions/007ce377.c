/* speed.exe 007ce377 __startOneArgErrorHandling; analysis pseudocode, not buildable source.
 * calls 007ded90 __87except
 */

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  float10 in_ST0;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  __87except(param_2,local_24,&param_3);
  return (float10)local_c;
}

