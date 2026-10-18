/* speed.exe 007a4bc0 FUN_007a4bc0; analysis pseudocode, not buildable source.
 * calls 0056f210 FUN_0056f210
 */

void __thiscall FUN_007a4bc0(int param_1,int param_2,int param_3)

{
  if (param_3 == 7) {
    *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x150) | 1 << ((byte)param_2 & 0x1f);
    FUN_0056f210(param_1 + 8);
    return;
  }
  *(int *)(param_1 + 0x134 + param_2 * 4) = param_3;
  FUN_0056f210(param_1 + 8);
  return;
}

