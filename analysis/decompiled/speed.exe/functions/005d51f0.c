/* speed.exe 005d51f0 FUN_005d51f0; analysis pseudocode, not buildable source.
 * calls 005d3530 FUN_005d3530
 */

int * FUN_005d51f0(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int local_8 [2];
  
  local_8[0] = param_3;
  local_8[1] = 0;
  piVar1 = (int *)FUN_005d3530(param_1,param_2,local_8,0);
  if ((piVar1 == param_2) || (*piVar1 != param_3)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

