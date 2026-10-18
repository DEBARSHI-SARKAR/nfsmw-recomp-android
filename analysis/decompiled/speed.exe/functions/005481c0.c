/* speed.exe 005481c0 FUN_005481c0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005e5810 FUN_005e5810
 * calls 00516af0 FUN_00516af0
 * calls 00651550 FUN_00651550
 * calls 00514e20 FUN_00514e20
 * calls 005e5640 FUN_005e5640
 * calls 00546400 FUN_00546400
 * calls 005e44d0 FUN_005e44d0
 */

void __fastcall FUN_005481c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 auStack_8 [8];
  
  if (*(int *)(param_1 + 0x44) != 0) {
    local_14 = 0;
    if (*(int *)(param_1 + 0xe4) != 0) {
      FUN_00546400(0,*(undefined4 *)(param_1 + 0xe8),0,0);
      iVar1 = *(int *)(param_1 + 0xe4);
      *(undefined1 *)(iVar1 + 0xcc) = 0;
      local_10 = 0x3f800000;
      local_c = 0x3f800000;
      FUN_00651550(&local_10);
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x24);
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x28);
      *(undefined2 *)(iVar1 + 0x44) = 0;
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x50);
      *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x54);
      *(undefined2 *)(iVar1 + 0x70) = 0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 8))();
    if (iVar1 == 0) {
      uVar2 = FUN_005e5640();
    }
    else {
      uVar2 = FUN_005e5810();
    }
    FUN_005e44d0(uVar2,auStack_8,&local_14);
    if (*(int *)(param_1 + 0xe4) != 0) {
      FUN_00651550(auStack_8);
      local_10 = 0x3e8a3d71;
      local_c = 0x3e8a3d71;
      FUN_00651550(&local_10);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
       (iVar1 = FUN_005b8550(0xaf51dd73), iVar1 == 0)) {
      iVar1 = 0;
    }
    FUN_00514e20(iVar1,local_14);
    return;
  }
  return;
}

