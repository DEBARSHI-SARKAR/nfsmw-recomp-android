/* speed.exe 006495f0 FUN_006495f0; analysis pseudocode, not buildable source.
 * calls 0045dac0 FUN_0045dac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006495f0(int param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    fVar2 = (float10)FUN_0045dac0(param_2,*(undefined4 *)(param_1 + 0xc),param_1);
    return fVar2;
  }
  if (*(int *)(param_1 + 4) == 1) {
    fVar1 = *(float *)(param_1 + 0xc) - _DAT_008a87a8;
    fVar2 = (float10)*(float *)(param_1 + 0x10);
    if (fVar2 < (float10)param_2) {
      fVar2 = (float10)param_2;
    }
    if ((float10)fVar1 < fVar2) {
      return (float10)fVar1;
    }
  }
  else {
    fVar2 = (float10)param_2;
  }
  return fVar2;
}

