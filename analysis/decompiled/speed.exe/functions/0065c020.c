/* speed.exe 0065c020 FUN_0065c020; analysis pseudocode, not buildable source.
 * calls 00652d70 FUN_00652d70
 * calls 00652d40 FUN_00652d40
 */

void __thiscall FUN_0065c020(int param_1,int param_2)

{
  if ((0 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 7)) {
    FUN_00652d70(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((0 < param_2) && (param_2 < 7)) {
    FUN_00652d40(*(undefined4 *)(param_1 + 4));
    *(int *)(param_1 + 8) = param_2;
  }
  return;
}

