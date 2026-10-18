/* speed.exe 005dc180 FUN_005dc180; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005dc180(int param_1)

{
  if (*(int *)(param_1 + 0x1964) == 2) {
    return (float10)*(float *)(param_1 + 0x449c);
  }
  return (float10)_DAT_00890968;
}

