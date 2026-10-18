/* speed.exe 004523c0 FUN_004523c0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004523c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  iVar1 = param_1[1];
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    }
    param_1[2] = *(undefined4 *)(iVar1 + 0x18);
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  }
  return;
}

