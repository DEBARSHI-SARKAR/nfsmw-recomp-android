/* speed.exe 00543920 FUN_00543920; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 0051a1e0 FUN_0051a1e0
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00514cc0 FUN_00514cc0
 * calls 005b8400 FUN_005b8400
 * calls 00514c70 FUN_00514c70
 * calls 005bcd20 FUN_005bcd20
 * calls 0051a230 FUN_0051a230
 */

void __thiscall FUN_00543920(int param_1,int param_2,char param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == '\0') {
    FUN_0051a1e0(*(undefined4 *)(param_1 + 0x10),(&DAT_0089a644)[param_2]);
    uVar1 = (&DAT_0089a644)[param_2];
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
       (iVar2 = FUN_005b8550(uVar1), iVar2 == 0)) {
      iVar2 = 0;
    }
    FUN_00514c70(iVar2);
    uVar1 = *(undefined4 *)(&DAT_0089a650 + param_2 * 4);
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
       (iVar2 = FUN_005b8550(uVar1), iVar2 == 0)) {
      iVar2 = 0;
    }
    FUN_00514c70(iVar2);
    return;
  }
  *(undefined1 *)(param_1 + 0x77) = 1;
  if (param_4 != 0) {
    uVar1 = *(undefined4 *)(&DAT_0089a650 + param_2 * 4);
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
       (iVar2 = FUN_005b8550(uVar1), iVar2 != 0)) {
      FUN_005bcd20(param_4);
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400002;
    }
  }
  FUN_0051a230(*(undefined4 *)(param_1 + 0x10),(&DAT_0089a644)[param_2]);
  uVar1 = (&DAT_0089a644)[param_2];
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
     (iVar2 = FUN_005b8550(uVar1), iVar2 == 0)) {
    iVar2 = 0;
  }
  FUN_00514cc0(iVar2);
  uVar1 = *(undefined4 *)(&DAT_0089a650 + param_2 * 4);
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
     (iVar2 = FUN_005b8550(uVar1), iVar2 == 0)) {
    iVar2 = 0;
  }
  FUN_00514cc0(iVar2);
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
     ((iVar2 = FUN_005b8550(0x57689fdd), iVar2 != 0 &&
      (iVar2 = FUN_005b1360(0xde6eff34), iVar2 != 0)))) {
    FUN_005b8400(iVar2,0);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    return;
  }
  return;
}

