/* speed.exe 006ca380 FUN_006ca380; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_006ca380(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (((*(int *)(param_1 + 0x4fb8 + param_2 * 0xc) == param_3) &&
      (*(int *)(param_1 + (param_2 * 3 + 0x13ef) * 4) == param_4)) &&
     (*(int *)(param_1 + param_2 * 0xc + 0x4fc0) == param_5)) {
    return 1;
  }
  return 0;
}

