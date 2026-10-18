/* speed.exe 00723a50 FUN_00723a50; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00723a50(int param_1,int param_2)

{
  param_2 = param_2 - *(int *)(param_1 + 0x838);
  if (((*(int *)(param_1 + 0x838) != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x83c)))
  {
    return 1;
  }
  return 0;
}

