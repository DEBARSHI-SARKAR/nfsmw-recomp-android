/* speed.exe 00410670 FUN_00410670; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00410670(byte *param_1,int param_2,char param_3)

{
  if (param_3 != '\0') {
    param_2 = ((uint)*param_1 - param_2) + -1;
  }
  return (float10)(*(int *)(param_1 + param_2 * 4 + 4) >> 0x12) * (float10)_DAT_008eb33c;
}

