/* speed.exe 004f03a0 FUN_004f03a0; analysis pseudocode, not buildable source.
 * calls 004ba050 FUN_004ba050
 * calls 004defa0 FUN_004defa0
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 007c4b80 FUN_007c4b80
 * calls 00831782 FUN_00831782
 * calls 004ea620 FUN_004ea620
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 * calls 0083179c FUN_0083179c
 */

void __fastcall FUN_004f03a0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086d30b;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 8) == '\0') {
    ExceptionList = &local_c;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0;
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        FUN_00831782();
      }
      FUN_00831682(piVar2);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  else {
    ExceptionList = &local_c;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 0x7fff;
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_004b8db0(param_1);
      iVar3 = FUN_00831667(0x28);
      local_4 = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        puVar1 = (undefined4 *)(iVar3 + 4);
        *puVar1 = 0;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x18) = 25000;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        *(undefined4 *)(iVar3 + 0x20) = 0x7fff;
        *(undefined4 *)(iVar3 + 0x24) = 0;
        iVar4 = FUN_00831a8a(&DAT_00914934,puVar1,iVar3);
        if (iVar4 < 0) {
          FUN_0083198b(&PTR_s_SIREN_008f0230);
          FUN_00831a8a(&DAT_00914934,puVar1,iVar3);
        }
      }
      *(int *)(param_1 + 0x28) = iVar3;
    }
    local_4 = 0xffffffff;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int **)(param_1 + 0x10) == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(int **)(param_1 + 0x10) >> 0x10 & 0x7fff;
      }
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0x7fff < uVar5) {
        uVar5 = 0x7fff;
      }
      *(uint *)(*(int *)(param_1 + 0x28) + 4) = uVar5;
      if ((*(uint **)(param_1 + 0x10) == (uint *)0x0) ||
         (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(uint **)(param_1 + 0x10) & 0xffff;
      }
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xffff < uVar5) {
        uVar5 = 0xffff;
      }
      *(uint *)(*(int *)(param_1 + 0x28) + 0xc) = uVar5;
      if (*(int *)(param_1 + 0x10) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ea620(*(int *)(*(int *)(param_1 + 0x10) + 4) >> 0x10 & 0xffff);
      }
      iVar3 = iVar3 + -0x1000;
      if (iVar3 < -0x4000) {
        iVar3 = -0x4000;
      }
      else if (0x4000 < iVar3) {
        iVar3 = 0x4000;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 8) = iVar3;
      FUN_004ba050(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x40);
      iVar3 = FUN_007c4b80();
      if (*(int *)(param_1 + 0x10) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(*(int *)(param_1 + 0x10) + 8) & 0x7fff;
      }
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0x7fff < uVar5) {
        uVar5 = 0x7fff;
      }
      *(uint *)(*(int *)(param_1 + 0x28) + 0x24) = uVar5;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x400 < iVar3) {
        iVar3 = 0x400;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 0x10) = iVar3;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      iVar4 = FUN_004defa0(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40));
      iVar3 = 0;
      *(int *)(param_1 + 0x38) = iVar4;
      switch(iVar4) {
      case 0:
      case 1:
      case 2:
        *(undefined4 *)(param_1 + 0x34) = DAT_00925ae8;
        iVar3 = iVar4;
        break;
      case 3:
        iVar3 = iVar4;
        if (*(int *)(param_1 + 0x3c) != 3) {
          *(undefined4 *)(param_1 + 0x34) = DAT_00925ae8;
        }
        break;
      case -1:
        *(undefined1 *)(param_1 + 8) = 0;
      }
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (7 < iVar3) {
        iVar3 = 7;
      }
      *(int *)(*(int *)(param_1 + 0x28) + 0x14) = iVar3;
      if (**(int **)(param_1 + 0x28) != 0) {
        FUN_0083179c(*(int **)(param_1 + 0x28) + 1);
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

