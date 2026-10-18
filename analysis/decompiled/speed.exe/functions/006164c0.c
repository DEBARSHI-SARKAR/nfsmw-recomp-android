/* speed.exe 006164c0 FUN_006164c0; analysis pseudocode, not buildable source.
 * calls 006161a0 FUN_006161a0
 * calls 006161f0 FUN_006161f0
 * calls 00614c50 FUN_00614c50
 */

void FUN_006164c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar1 = param_1[2];
  iVar3 = *(int *)(iVar1 + 8);
  piVar6 = (int *)(iVar3 + -8);
  if (piVar6 != (int *)0x0) {
    if (*piVar6 == 4) {
      uVar5 = *(uint *)(*(int *)(iVar3 + -4) + 0xc);
      goto LAB_006164f8;
    }
    iVar2 = FUN_00614c50(iVar1,piVar6);
    if (iVar2 != 0) {
      uVar5 = *(uint *)(*(int *)(iVar3 + -4) + 0xc);
      goto LAB_006164f8;
    }
  }
  uVar5 = 0;
LAB_006164f8:
  if (uVar5 <= (uint)((int)param_1 + (0x20c - *param_1))) {
    iVar3 = *(int *)(iVar1 + 8);
    piVar6 = (int *)(iVar3 + -8);
    if ((piVar6 == (int *)0x0) ||
       ((*piVar6 != 4 && (iVar2 = FUN_00614c50(iVar1,piVar6), iVar2 == 0)))) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)(*(int *)(iVar3 + -4) + 0x10);
    }
    puVar8 = (undefined4 *)*param_1;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *param_1 = *param_1 + uVar5;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -8;
    return;
  }
  iVar3 = FUN_006161a0();
  if (iVar3 != 0) {
    puVar7 = *(undefined4 **)(iVar1 + 8);
    for (puVar8 = puVar7; puVar7 + -4 < puVar8; puVar8 = puVar8 + -2) {
      *puVar8 = puVar8[-2];
      puVar8[1] = puVar8[-1];
    }
    puVar8 = *(undefined4 **)(iVar1 + 8);
    puVar7[-4] = *puVar8;
    puVar7[-3] = puVar8[1];
  }
  param_1[1] = param_1[1] + 1;
  FUN_006161f0(param_1);
  return;
}

