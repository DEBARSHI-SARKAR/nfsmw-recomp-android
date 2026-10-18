/* speed.exe 004dfaa0 FUN_004dfaa0; analysis pseudocode, not buildable source.
 * calls 004af470 FUN_004af470
 * calls 00829640 FUN_00829640
 * calls 004519d0 FUN_004519d0
 * calls 004522f0 FUN_004522f0
 * calls 004c62e0 FUN_004c62e0
 */

void __fastcall FUN_004dfaa0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
  }
  DAT_009121e8 = *(undefined4 *)(param_1 + 0x144);
  FUN_00829640(*(undefined4 *)(param_1 + 0x4c),"PursuitID",*(int *)(param_1 + 0x144) + 1);
  if (DAT_008f86fc == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x114) & 8) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = uVar1;
    uVar5 = FUN_004522f0(uVar1);
    uVar2 = FUN_004519d0(uVar1,uVar2,uVar5);
    iVar3 = FUN_004af470(uVar5,uVar2,uVar1);
    if (iVar3 != -1) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(&DAT_00912880 + iVar3 * 0x68);
      FUN_004c62e0(param_1 + 0x28,0,0);
    }
  }
  if ((*(int *)(DAT_00911fa8 + 0x70) == 1) || ((*(uint *)(param_1 + 0x114) & 2) != 0)) {
    uVar4 = *(uint *)(param_1 + 0x114);
    if ((uVar4 & 2) == 0) goto LAB_004dfb6c;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x114) & 0xfffffff7;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
LAB_004dfb6c:
  *(uint *)(param_1 + 0x114) = uVar4 | 4;
  return;
}

