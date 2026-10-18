/* speed.exe 00465e60 FUN_00465e60; analysis pseudocode, not buildable source.
 * calls 004653d0 FUN_004653d0
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_00465e60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar3 = (undefined4 *)FUN_004653d0(*(undefined4 *)(param_1 + 0x2c),0,0,0);
  uVar5 = *(uint *)(param_1 + 0x2c);
  puVar7 = puVar3;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0x1010101;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 1;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  for (puVar7 = *(undefined4 **)(param_1 + 0x10); puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)*puVar7) {
    iVar8 = 0;
    iVar6 = param_1;
    do {
      uVar5 = (uint)((int)puVar7 + (-0x30 - iVar6)) / *(uint *)(param_1 + 0x28);
      if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(iVar6 + 0x24))) {
        iVar8 = uVar5 + iVar8;
        goto LAB_00465eca;
      }
      piVar1 = (int *)(iVar6 + 0x24);
      iVar6 = *(int *)(iVar6 + 8);
      iVar8 = iVar8 + *piVar1;
    } while (iVar6 != 0);
    iVar8 = -1;
LAB_00465eca:
    *(undefined1 *)(iVar8 + (int)puVar3) = 0;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      if (*(char *)(iVar6 + (int)puVar3) != '\0') {
        iVar8 = param_1;
        if (param_2 == 0) goto LAB_00465f20;
        param_2 = param_2 + -1;
      }
      iVar6 = iVar6 + 1;
      if (*(int *)(param_1 + 0x2c) <= iVar6) {
        FUN_004655f0(puVar3);
        return 0;
      }
    } while( true );
  }
LAB_00465f37:
  FUN_004655f0(puVar3);
  return 0;
LAB_00465f20:
  do {
    if ((-1 < iVar6) && (iVar6 < *(int *)(iVar8 + 0x24))) {
      iVar2 = *(int *)(param_1 + 0x28);
      FUN_004655f0(puVar3);
      return iVar2 * iVar6 + 0x30 + iVar8;
    }
    piVar1 = (int *)(iVar8 + 8);
    iVar6 = iVar6 - *(int *)(iVar8 + 0x24);
    iVar8 = *piVar1;
  } while (*piVar1 != 0);
  goto LAB_00465f37;
}

