/* speed.exe 006b3c80 FUN_006b3c80; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_006b3c80(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + -0x168) + 0x10))();
  if ((cVar1 == '\0') && (_DAT_00890968 < *(float *)(param_1 + 0x10))) {
    return (float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(param_1 + 0x10) *
           (float10)_DAT_00894c30 + (float10)_DAT_0089096c;
  }
  return (float10)_DAT_0089096c;
}

