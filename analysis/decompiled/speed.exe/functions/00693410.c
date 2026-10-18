/* speed.exe 00693410 FUN_00693410; analysis pseudocode, not buildable source.
 * calls 00672fe0 FUN_00672fe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00693410(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00672fe0(param_1 + 0xd4,param_2);
  return fVar1 * (float10)_DAT_008a938c;
}

