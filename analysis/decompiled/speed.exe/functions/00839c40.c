/* speed.exe 00839c40 FUN_00839c40; analysis pseudocode, not buildable source.
 * calls 00837590 FUN_00837590
 * calls 0083e390 FUN_0083e390
 * calls 0083e220 FUN_0083e220
 * calls 00837e90 FUN_00837e90
 * calls 008367a0 FUN_008367a0
 * calls 00838e70 FUN_00838e70
 * calls 00848200 FUN_00848200
 * calls 00838e20 FUN_00838e20
 * calls 00838160 FUN_00838160
 * calls 00847b60 FUN_00847b60
 */

void FUN_00839c40(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  if (param_1[3] != 5) {
    FUN_00838e70(param_1,param_2,0x100000,1,0,0);
  }
  iVar5 = FUN_00847b60(param_1[2]);
  if ((((iVar5 != 0) && (iVar5 = FUN_00848200(param_1[2],param_2), iVar5 != 0)) &&
      (piVar4 = *(int **)(iVar5 + 0x100), piVar4 != (int *)0x0)) && (piVar4[3] != 0)) {
    iVar5 = FUN_00838160(piVar4);
    if (((iVar5 != 0) || ((*(uint *)(*piVar4 + 0xf8) & 0x40000) != 0)) && (param_4 == 0)) {
      FUN_00837590(piVar4,0);
    }
    iVar5 = FUN_0083e390(piVar4[3]);
    if (((int)param_1[0x28] <= iVar5) && (iVar5 = FUN_00837e90(param_1,piVar4), iVar5 < 0)) {
      return;
    }
    if (((int)param_1[0x27] <= (int)param_1[0x13]) && (iVar5 = FUN_00838e20(param_1), iVar5 != 0)) {
      return;
    }
    param_1[0x13] = param_1[0x13] + 1;
    pcVar6 = (char *)param_3[5];
    pcVar1 = pcVar6 + 1;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    puVar7 = (undefined4 *)(*(code *)*param_1)(0x18);
    *puVar7 = *param_3;
    puVar7[1] = param_3[1];
    puVar7[2] = param_3[2];
    puVar7[3] = param_3[3];
    puVar7[4] = param_3[4];
    puVar7[5] = param_3[5];
    pcVar8 = (char *)param_3[5];
    pcVar2 = pcVar8 + 1;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    puVar9 = (undefined4 *)(*(code *)*param_1)((int)pcVar8 - (int)pcVar2);
    puVar7[5] = puVar9;
    puVar11 = (undefined4 *)param_3[5];
    for (uVar10 = (uint)((int)pcVar6 - (int)pcVar1) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar9 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar10 = (int)pcVar6 - (int)pcVar1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    if (piVar4[3] != 0) {
      FUN_0083e220(piVar4[3],puVar7);
    }
    *(undefined2 *)(piVar4 + 1) = 1;
    if (param_4 == 1) {
      *(uint *)(*piVar4 + 0xf8) = *(uint *)(*piVar4 + 0xf8) | 0x2000000;
      FUN_008367a0(param_1);
    }
    if ((code *)param_1[7] != (code *)0x0) {
      (*(code *)param_1[7])(param_1,param_3,param_1[6]);
    }
  }
  return;
}

