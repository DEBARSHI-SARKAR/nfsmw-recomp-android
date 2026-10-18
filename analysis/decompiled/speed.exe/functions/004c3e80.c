/* speed.exe 004c3e80 FUN_004c3e80; analysis pseudocode, not buildable source.
 * calls 004aac20 FUN_004aac20
 * calls 00452430 FUN_00452430
 * calls 004aaca0 FUN_004aaca0
 * calls 006269b0 FUN_006269b0
 * calls 0045d380 FUN_0045d380
 * calls 004aad20 FUN_004aad20
 * calls 004aada0 FUN_004aada0
 * calls 007c4b80 FUN_007c4b80
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c3e80(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  short *psVar5;
  int iVar6;
  int local_14 [5];
  
  uVar2 = FUN_00452430();
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  local_14[0] = FUN_004aac20();
  local_14[1] = FUN_004aaca0();
  local_14[2] = FUN_004aad20();
  local_14[3] = FUN_004aada0();
  iVar6 = 0;
  local_14[4] = 0;
  iVar3 = 0;
  do {
    if (local_14[iVar3] == 0) break;
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  if (iVar6 == 0) {
    return;
  }
  iVar3 = FUN_007c4b80();
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (iVar6 + -1 < iVar3) {
    iVar3 = iVar6 + -1;
  }
  if (local_14[iVar3] == 0) {
    return;
  }
  DAT_00913c3c = DAT_00913c3c + 1;
  iVar6 = DAT_00913c3c % local_14[iVar3];
  if (iVar3 == 1) {
    puVar4 = (undefined4 *)FUN_00454810(0xdadb5580,iVar6);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_006269b0(4);
    }
    uVar2 = *puVar4;
    iVar3 = FUN_00454810(0xfcc8e754,0);
    if (iVar3 == 0) {
      iVar3 = FUN_006269b0(8);
    }
    sVar1 = *(short *)(iVar3 + 2);
  }
  else {
    if (iVar3 == 2) {
      puVar4 = (undefined4 *)FUN_00454810(0xc9218f8c,iVar6);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_006269b0(4);
      }
      uVar2 = *puVar4;
      iVar3 = FUN_00454810(0xfcc8e754,0);
      if (iVar3 == 0) {
        iVar3 = FUN_006269b0(8);
      }
      *(int *)(param_1 + 0xd0) = (int)*(short *)(iVar3 + 4);
      goto LAB_004c4086;
    }
    if (iVar3 == 3) {
      puVar4 = (undefined4 *)FUN_00454810(0xefbca3c9,iVar6);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_006269b0(4);
      }
      uVar2 = *puVar4;
      iVar3 = FUN_00454810(0xfcc8e754,0);
      if (iVar3 == 0) {
        iVar3 = FUN_006269b0(8);
      }
      *(int *)(param_1 + 0xd0) = (int)*(short *)(iVar3 + 6);
      goto LAB_004c4086;
    }
    puVar4 = (undefined4 *)FUN_00454810(0xc15856df,iVar6);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_006269b0(4);
    }
    uVar2 = *puVar4;
    psVar5 = (short *)FUN_00454810(0xfcc8e754,0);
    if (psVar5 == (short *)0x0) {
      psVar5 = (short *)FUN_006269b0(8);
    }
    sVar1 = *psVar5;
  }
  *(int *)(param_1 + 0xd0) = (int)sVar1;
LAB_004c4086:
  iVar3 = FUN_0045d380(uVar2);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar3 + 8);
  return;
}

