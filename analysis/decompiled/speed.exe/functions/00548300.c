/* speed.exe 00548300 FUN_00548300; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 * calls 00651550 FUN_00651550
 * calls 005ddb00 FUN_005ddb00
 * calls 00514e20 FUN_00514e20
 * calls 00546400 FUN_00546400
 * calls 005e44d0 FUN_005e44d0
 */

void __fastcall FUN_00548300(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x44) != 0) {
    local_14 = 0;
    if (*(int *)(param_1 + 0xe4) != 0) {
      FUN_00546400(0,*(undefined4 *)(param_1 + 0xe8),0,0);
      iVar2 = *(int *)(param_1 + 0xe4);
      *(undefined1 *)(iVar2 + 0xcc) = 0;
      local_10 = 0x3f800000;
      local_c = 0x3f800000;
      FUN_00651550(&local_10);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined2 *)(iVar2 + 0x44) = 0;
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x50);
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x54);
      *(undefined2 *)(iVar2 + 0x70) = 0;
    }
    uVar1 = FUN_005ddb00(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x18));
    FUN_005e44d0(uVar1,local_8,&local_14);
    if (*(int *)(param_1 + 0xe4) != 0) {
      FUN_00651550(local_8);
      local_10 = 0x3e8a3d71;
      local_c = 0x3e8a3d71;
      FUN_00651550(&local_10);
    }
    if (((*(int *)(param_1 + 0x10) == 0) ||
        (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
       (iVar2 = FUN_005b8550(0xaf51dd73), iVar2 == 0)) {
      iVar2 = 0;
    }
    FUN_00514e20(iVar2,local_14);
    return;
  }
  return;
}

