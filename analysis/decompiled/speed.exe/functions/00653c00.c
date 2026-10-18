/* speed.exe 00653c00 FUN_00653c00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00653c00(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) != '\0') {
    iVar1 = *(byte *)(param_1 + 7) - 1;
    if (iVar1 < 0) {
      iVar1 = *(byte *)(param_1 + 5) - 1;
    }
    return (float10)*(float *)(*(int *)(param_1 + 0x10) + iVar1 * 4);
  }
  return (float10)_DAT_00890968;
}

