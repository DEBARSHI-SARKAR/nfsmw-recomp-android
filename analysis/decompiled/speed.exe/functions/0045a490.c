/* speed.exe 0045a490 FUN_0045a490; analysis pseudocode, not buildable source.
 * calls 00454cc0 FUN_00454cc0
 * calls 00458c10 FUN_00458c10
 * calls 0045a090 FUN_0045a090
 * calls 00659250 FUN_00659250
 * calls 00454db0 FUN_00454db0
 */

uint __thiscall FUN_0045a490(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00869e5f;
  local_c = ExceptionList;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) goto LAB_0045a5b0;
  iVar1 = *(int *)(DAT_0090dcbc + 4);
  ExceptionList = &local_c;
  if (param_2 == 0) {
LAB_0045a4f2:
    uVar6 = 0;
  }
  else {
    ExceptionList = &local_c;
    uVar3 = FUN_00454db0(param_2);
    if (*(uint *)(iVar1 + 0xc) <= uVar3) goto LAB_0045a4f2;
    uVar3 = *(int *)(iVar1 + 8) + uVar3 * 0xc;
    uVar6 = *(uint *)(uVar3 + 4);
    if (uVar6 == uVar3) goto LAB_0045a4f2;
    uVar6 = (uVar6 == uVar3) - 1 & uVar6;
  }
  iVar1 = *(int *)(uVar6 + 8);
  if (param_3 != 0) {
    uVar3 = FUN_00454cc0(param_3);
    if (uVar3 < *(uint *)(iVar1 + 0x20)) {
      uVar3 = *(int *)(iVar1 + 0x1c) + uVar3 * 0xc;
      uVar2 = *(uint *)(uVar3 + 4);
      if (((uVar2 != uVar3) && (uVar2 != uVar3)) && (uVar2 != 0)) {
        ExceptionList = local_c;
        return uVar3 & 0xffffff00;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  DAT_0090dcd4 = DAT_0090dcd4 + 0x2c;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  iVar4 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x2c,0);
  uStack_4 = 0;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00458c10(uVar6,iVar1,param_3,param_4);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = uVar5;
  if (iVar1 != 0) {
    FUN_0045a090();
  }
  ExceptionList = *(void **)(*(int *)(param_1 + 4) + 0x18);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(void **)(param_1 + 8) = ExceptionList;
LAB_0045a5b0:
  uVar3 = (uint)ExceptionList >> 8;
  ExceptionList = local_c;
  return CONCAT31((int3)uVar3,1);
}

