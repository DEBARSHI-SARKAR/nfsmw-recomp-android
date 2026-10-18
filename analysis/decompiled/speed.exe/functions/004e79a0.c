/* speed.exe 004e79a0 FUN_004e79a0; analysis pseudocode, not buildable source.
 * calls 004df7e0 FUN_004df7e0
 * calls 004e7770 FUN_004e7770
 * calls 004df460 FUN_004df460
 * calls 00829640 FUN_00829640
 */

void __thiscall FUN_004e79a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x114);
  uVar4 = uVar1 & 0x800;
  if ((uVar4 == 0) &&
     (((iVar2 = *(int *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x60 + param_1), iVar2 == 5 ||
       (iVar2 == 6)) || (iVar2 == 2)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((*(int *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x60 + param_1) != 3) || (uVar4 != 0)) {
    if ((((uVar1 & 0x10) != 0) && ((*(int *)(DAT_00911fa8 + 0x70) != 1 && ((uVar1 & 2) == 0)))) &&
       (uVar4 == 0)) {
      DAT_009121e8 = *(int *)(param_1 + 0x144) + 1U & 3;
      *(uint *)(param_1 + 0x144) = DAT_009121e8;
      FUN_00829640(*(undefined4 *)(param_1 + 0x4c),"PursuitID",*(int *)(param_1 + 0x144) + 1);
      *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffef;
    }
    if (bVar3) {
      switch(*(undefined4 *)(param_1 + 0x148)) {
      case 0:
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0x7fff;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20) = 0;
        break;
      case 1:
      case 3:
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0x7fff;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20) = 0;
        break;
      case 2:
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20) = 0x7fff;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20) = 0;
    }
    if ((DAT_008f86fc != 0) && ((*(uint *)(param_1 + 0x114) & 0x2000) == 0)) {
      if ((*(int *)(param_1 + 0x150) == -1) &&
         ((((DAT_00911ef4 == 0 && (DAT_00911ef8 == 0)) && (DAT_00911f00 == 0)) &&
          ((DAT_00911efc == 0 && (DAT_00911f10 == 0)))))) {
        uVar5 = FUN_004df460();
        *(undefined4 *)(param_1 + 0x150) = uVar5;
        FUN_004df7e0(param_2);
        return;
      }
      FUN_004e7770(param_2);
      FUN_004df7e0(param_2);
    }
  }
  return;
}

