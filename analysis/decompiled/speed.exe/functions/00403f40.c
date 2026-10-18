/* speed.exe 00403f40 FUN_00403f40; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00403f40(int param_1)

{
  if (*(byte *)(param_1 + 0x2e) != 0) {
    return ((float10)*(byte *)(param_1 + 0x2e) * (float10)*(float *)(param_1 + 0x30)) /
           ((float10)*(float *)(param_1 + 0x78) * (float10)*(float *)(param_1 + 8));
  }
  return (float10)_DAT_00890968;
}

