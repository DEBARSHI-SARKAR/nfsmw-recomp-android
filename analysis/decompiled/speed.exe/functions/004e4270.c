/* speed.exe 004e4270 FUN_004e4270; analysis pseudocode, not buildable source.
 * calls 004e4120 FUN_004e4120
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004e4270(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004e4120(param_2,param_1);
  return (float10)iVar1 * (float10)_DAT_00896ab8;
}

