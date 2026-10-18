/* speed.exe 004eca10 FUN_004eca10; analysis pseudocode, not buildable source.
 * calls 004ba590 FUN_004ba590
 * calls 00831667 FUN_00831667
 * calls 006269b0 FUN_006269b0
 * calls 007c4b80 FUN_007c4b80
 * calls 004d3410 FUN_004d3410
 * calls 00454810 FUN_00454810
 */

void __fastcall FUN_004eca10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d1eb;
  local_c = ExceptionList;
  if (DAT_008f86f8 != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x68);
    ExceptionList = &local_c;
    piVar1 = (int *)FUN_00454810(0x34beca33,0);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)FUN_006269b0(4);
    }
    iVar3 = *piVar1;
    FUN_004ba590(uVar4);
    iVar2 = FUN_007c4b80();
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*(int *)(param_1 + 0x10) + 0xc) & 0x7fff;
    }
    iVar2 = (int)(uVar5 * (iVar2 * iVar3 >> 0xf)) >> 0xf;
    iVar3 = FUN_00831667(0x20);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
         (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(uint **)(param_1 + 0x10) & 0xffff;
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0xd8);
      uVar7 = 0;
      uVar6 = 0;
      uVar4 = FUN_007c4b80(iVar2,uVar5,0,0);
      uVar4 = FUN_004d3410(0,*(undefined4 *)(iVar3 + 0x94),uVar4,iVar2,uVar5,uVar6,uVar7);
    }
    *(undefined4 *)(param_1 + 0x30) = uVar4;
  }
  ExceptionList = local_c;
  return;
}

