/* speed.exe 006ca230 FUN_006ca230; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_006ca230(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (((*(int *)(param_1 + 0x4f58 + param_2 * 0xc) == param_3) &&
      (*(int *)(param_1 + (param_2 * 3 + 0x13d7) * 4) == param_4)) &&
     (*(int *)(param_1 + param_2 * 0xc + 0x4f60) == param_5)) {
    return 1;
  }
  return 0;
}

