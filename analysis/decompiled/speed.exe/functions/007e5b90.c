/* speed.exe 007e5b90 ___addl; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    ___addl
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4 ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 local_8;
  
  local_8 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    local_8 = 1;
  }
  *param_3 = uVar1;
  return local_8;
}

