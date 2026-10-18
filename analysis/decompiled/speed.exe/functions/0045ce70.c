/* speed.exe 0045ce70 FUN_0045ce70; analysis pseudocode, not buildable source.
 * calls 0045cdd0 FUN_0045cdd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0045ce70(undefined4 param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  if (_DAT_0090dd40 == _DAT_00890968) {
    FUN_0045cdd0(0x476a6000,param_1);
    return (float10)_DAT_00890968;
  }
  fVar1 = (float10)(param_3 - param_2);
  if (param_3 - param_2 < 0) {
    fVar1 = fVar1 + (float10)_DAT_00891214;
  }
  return fVar1 * (float10)_DAT_0090dd40;
}

