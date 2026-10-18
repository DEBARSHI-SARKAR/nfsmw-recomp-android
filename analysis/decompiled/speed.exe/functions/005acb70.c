/* speed.exe 005acb70 FUN_005acb70; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 005ac950 FUN_005ac950
 * calls 004c3790 FUN_004c3790
 * calls 006530a0 FUN_006530a0
 * calls 0065faf0 FUN_0065faf0
 * calls 00580080 FUN_00580080
 * calls 0056e200 FUN_0056e200
 * calls 0057f9f0 FUN_0057f9f0
 * calls 00576c50 FUN_00576c50
 * calls 00405da0 FUN_00405da0
 * calls 004aecb0 FUN_004aecb0
 */

uint __thiscall FUN_005acb70(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined3 uVar8;
  undefined3 extraout_var;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  
  piVar2 = (int *)(param_2 + param_3);
  if (param_5 == 0) {
    piVar4 = (int *)FUN_005ac950(param_2 + 0x10,piVar2);
    if ((((uint)param_1[0x2b] >> 0x11 & 1) == 0) && (cVar3 = FUN_006530a0(5), cVar3 != '\0')) {
      FUN_00576c50(2,0);
      param_1[0x2b] = param_1[0x2b] | 0x20000;
    }
  }
  else {
    piVar4 = (int *)(param_2 + 0x5a09);
  }
  piVar7 = piVar4 + 1;
  iVar9 = param_4;
  if (piVar7 <= piVar2) {
    iVar9 = *piVar4;
  }
  if (iVar9 == *(int *)(DAT_0091cf90 + 8)) {
    if (piVar4 + 9 <= piVar2) {
      piVar11 = param_1;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar11 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar11 = piVar11 + 1;
      }
    }
    if ((param_5 == 0) && (piVar4 + 0x45 <= piVar2)) {
      piVar7 = piVar4 + 9;
      piVar11 = param_1 + 0xc9;
      for (iVar9 = 0x3c; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar11 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar11 = piVar11 + 1;
      }
    }
    if (piVar4 + 0x66 <= piVar2) {
      piVar7 = piVar4 + 0x45;
      piVar11 = param_1 + 9;
      for (iVar9 = 0x21; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar11 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar11 = piVar11 + 1;
      }
    }
    piVar7 = piVar4 + 0x66;
    piVar11 = param_1 + 0x105;
    for (iVar9 = 0x2332; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar11 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar11 = piVar11 + 1;
    }
    cVar3 = FUN_006530a0(4);
    if ((cVar3 != '\0') && ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0x12 & 1) == 0)) {
      puVar1 = (uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac);
      *puVar1 = *puVar1 | 0x40000;
    }
    if ((int *)((int)piVar4 + 0x8e61U) <= piVar2) {
      *(char *)(param_1 + 0x2437) = (char)piVar4[0x2398];
    }
    piVar7 = (int *)((int)piVar4 + 0x9a39);
    if (piVar7 <= piVar2) {
      piVar11 = (int *)((int)piVar4 + 0x8e61U);
      piVar12 = param_1 + 0x2438;
      for (iVar9 = 0x2f6; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
    }
    iVar10 = 0;
    piVar4 = (int *)((int)piVar4 + 0x9a3d);
    iVar9 = param_4;
    do {
      if (piVar4 <= piVar2) {
        iVar9 = *piVar7;
      }
      piVar7 = piVar7 + 1;
      piVar4 = piVar4 + 1;
      if (iVar10 < 0x108) {
        iVar5 = iVar10 + 0x1c + DAT_0091cf90;
      }
      else {
        iVar5 = DAT_0091cf90 + 0x1c + *(int *)(DAT_0091cf90 + 0x18) * 0x18;
      }
      iVar10 = iVar10 + 0x18;
      *(int *)(iVar5 + 0x10 + param_5 * 4) = iVar9;
    } while (iVar10 < 0x108);
    uVar6 = FUN_00580080(piVar7);
    uVar6 = FUN_0056e200(uVar6,piVar2);
    piVar7 = (int *)FUN_0057f9f0(param_2 + 0x10,uVar6,param_3 + -0x20);
    if ((char)piVar7 != '\0') {
      uVar8 = (undefined3)((uint)piVar7 >> 8);
      *(undefined1 *)(param_1 + 8) = 1;
      if ((char)param_4 != '\0') {
        iVar9 = FUN_004c3790(param_1[0x1c]);
        param_1[0x1c] = iVar9;
        FUN_004aecb0(param_1 + 0x13,0xbf800000);
        uVar6 = FUN_005cc240("EATraxInit");
        iVar9 = FUN_00405da0(1,0,0,0);
        *(undefined4 *)(iVar9 + 4) = uVar6;
        FUN_0065faf0();
        uVar8 = extraout_var;
      }
      return CONCAT31(uVar8,1);
    }
  }
  return (uint)piVar7 & 0xffffff00;
}

