/* speed.exe 00452380 FUN_00452380; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00452380(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x24) == 0) {
      *(undefined2 *)(param_1 + 4) = 1;
    }
    param_1[2] = *(undefined4 *)(param_2 + 0x18);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  }
  return;
}

