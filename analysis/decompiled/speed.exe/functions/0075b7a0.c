/* speed.exe 0075b7a0 FUN_0075b7a0; analysis pseudocode, not buildable source.
 * calls 007528d0 FUN_007528d0
 * calls 00759f00 FUN_00759f00
 * calls 005087a0 FUN_005087a0
 * calls 00753060 FUN_00753060
 * calls 00508b10 FUN_00508b10
 */

undefined4 __thiscall FUN_0075b7a0(int param_1,undefined4 param_2,int param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 local_a00 [512];
  undefined4 local_800 [512];
  
  for (puVar2 = *(undefined4 **)(param_1 + 0x58); puVar2 != (undefined4 *)(param_1 + 0x58);
      puVar2 = (undefined4 *)*puVar2) {
    if ((0 < (int)puVar2[2]) && (puVar2[3] == 0)) {
      uVar4 = FUN_007528d0(local_a00,0x80,param_3);
      iVar5 = FUN_00753060(local_a00,uVar4,param_1 + 0xb0 + *(int *)(param_1 + 0xac) * 4,
                           0x200 - *(int *)(param_1 + 0xac),param_2);
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + iVar5;
    }
  }
  iVar5 = *(int *)(param_1 + 0xac);
  iVar8 = 0;
  if (0 < iVar5) {
    piVar6 = (int *)(param_1 + 0xb0);
    do {
      iVar3 = *piVar6;
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe) == '\0')) {
        *(undefined1 *)(iVar3 + 0xe) = 1;
        local_800[iVar8] = *(undefined4 *)(iVar3 + 8);
        iVar8 = iVar8 + 1;
      }
      uVar4 = DAT_00904a00;
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar8 != 0) {
      if ((param_3 != 0) || (uVar7 = 0, *(int *)(param_1 + 8) == 2)) {
        iVar5 = FUN_005087a0(local_800,iVar8,DAT_00904a00,1);
        while ((uVar7 = uVar4, iVar5 != 0 && (iVar5 = FUN_00759f00(1), iVar5 != 0))) {
          iVar5 = FUN_005087a0(local_800,iVar8,DAT_00904a00,1);
        }
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
      FUN_00508b10(local_800,iVar8,&LAB_0075a120,0,uVar7);
      return 1;
    }
  }
  iVar5 = *(int *)(param_1 + 0xac);
  if (0 < iVar5) {
    piVar6 = (int *)(param_1 + 0xb0);
    do {
      if (*piVar6 != 0) {
        psVar1 = (short *)(*piVar6 + 0xc);
        *psVar1 = *psVar1 + -1;
      }
      piVar6 = piVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  return 0;
}

