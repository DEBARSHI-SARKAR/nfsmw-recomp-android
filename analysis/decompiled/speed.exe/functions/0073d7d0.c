/* speed.exe 0073d7d0 FUN_0073d7d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0073d7d0(int param_1,int param_2)

{
  float *pfVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    pfVar1 = (float *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + param_2 * 4) +
                      *(int *)(param_1 + 0x18));
    if (pfVar1 == (float *)0x0) {
      return (float10)_DAT_00890968;
    }
    return (float10)*pfVar1;
  }
  return (float10)_DAT_00890968;
}

