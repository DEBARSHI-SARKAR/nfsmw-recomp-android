/* speed.exe 00458e70 FUN_00458e70; analysis pseudocode, not buildable source.
 * calls 004512d0 FUN_004512d0
 * calls 00454030 FUN_00454030
 * calls 00457b70 FUN_00457b70
 * calls 00458a60 FUN_00458a60
 * calls 00453890 FUN_00453890
 */

undefined4 __thiscall FUN_00458e70(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar4 = param_2;
  iVar2 = FUN_00454030(param_2,&param_2);
  iVar3 = FUN_00454030(uVar4,&param_2);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    return 0;
  }
  bVar1 = *(byte *)(iVar3 + 0xb);
  if ((bVar1 & 2) == 0) {
    if ((*(byte *)(iVar2 + 0xb) & 0x20) == 0) {
      puVar8 = *(undefined4 **)(iVar2 + 4);
      if ((*(byte *)(iVar2 + 0xb) & 0x10) != 0) {
        puVar8 = (undefined4 *)((int)puVar8 + *(int *)(param_3 + 0x18));
      }
    }
    else {
      puVar8 = (undefined4 *)(iVar2 + 4);
    }
    if ((bVar1 & 0x20) == 0) {
      puVar9 = *(undefined4 **)(iVar3 + 4);
      if ((bVar1 & 0x10) != 0) {
        puVar9 = (undefined4 *)((int)puVar9 + *(int *)(param_1 + 0x18));
      }
    }
    else {
      puVar9 = (undefined4 *)(iVar3 + 4);
    }
    uVar7 = FUN_00458a60(*(undefined4 *)(param_3 + 0x18));
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  else {
    iVar3 = *(int *)(param_3 + 0x18);
    FUN_004512d0(iVar3);
    FUN_004512d0(*(undefined4 *)(param_1 + 0x18));
    iVar6 = *(int *)(iVar2 + 4);
    if ((*(byte *)(iVar2 + 0xb) & 0x10) != 0) {
      iVar6 = iVar6 + iVar3;
    }
    uVar7 = 0;
    if (*(short *)(iVar6 + 2) != 0) {
      do {
        uVar4 = FUN_00453890(uVar7);
        FUN_00457b70(uVar7,uVar4);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(iVar6 + 2));
      return 1;
    }
  }
  return 1;
}

