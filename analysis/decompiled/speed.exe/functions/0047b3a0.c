/* speed.exe 0047b3a0 FUN_0047b3a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0047b3a0(int param_1)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_009885c8 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*DAT_009885c8 + 0x48))();
    if ((piVar1 != (int *)0x0) && (_DAT_00890968 < *(float *)(param_1 + 0x58))) {
      fVar2 = (float10)(**(code **)(*piVar1 + 0x28))();
      return (fVar2 - (float10)*(float *)(param_1 + 0x54)) / (float10)*(float *)(param_1 + 0x58);
    }
  }
  return (float10)0.0;
}

