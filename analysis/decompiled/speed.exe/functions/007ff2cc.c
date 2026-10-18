/* speed.exe 007ff2cc FUN_007ff2cc; analysis pseudocode, not buildable source.
 * calls 007ff0c2 FUN_007ff0c2
 */

void FUN_007ff2cc(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 int param_6,uint param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  piVar3 = param_2;
  uVar4 = (*param_1 * param_6 + -1 + param_5) / param_5;
  uVar5 = (param_1[1] * param_8 + -1 + param_7) / param_7;
  FUN_007ff0c2(param_1[6],param_1[2],*param_1,param_1[1],param_2[6],param_2[2],uVar4,uVar5,param_3,
               param_4,param_5,param_6,param_7,param_8,param_9);
  if (((int)uVar4 < *param_2) && (param_2 = (int *)0x0, 0 < (int)uVar5)) {
    do {
      iVar6 = piVar3[2] * (int)param_2 + uVar4 + piVar3[6];
      uVar2 = *(undefined1 *)(iVar6 + -2);
      uVar7 = (*piVar3 - uVar4) + 1;
      puVar9 = (undefined4 *)(iVar6 + -1);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar9 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar9 = puVar9 + 1;
      }
      param_2 = (int *)((int)param_2 + 1);
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = uVar2;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    } while ((int)param_2 < (int)uVar5);
  }
  if (((int)uVar5 < piVar3[1]) && (iVar6 = uVar5 - 1, iVar6 < piVar3[1])) {
    do {
      iVar10 = *piVar3;
      puVar9 = (undefined4 *)(piVar3[2] * (uVar5 - 2) + piVar3[6]);
      puVar11 = (undefined4 *)(piVar3[2] * iVar6 + piVar3[6]);
      for (uVar8 = iVar10 + 1U >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      iVar6 = iVar6 + 1;
      for (uVar8 = iVar10 + 1U & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    } while (iVar6 < piVar3[1]);
  }
  iVar6 = (int)uVar5 / 2;
  iVar10 = (int)uVar4 / 2;
  FUN_007ff0c2(param_1[7],param_1[5],param_1[3],param_1[4],piVar3[7],piVar3[5],iVar10,iVar6,param_3,
               param_4,param_5,param_6,param_7,param_8,param_9);
  if ((iVar10 < piVar3[3]) && (param_2 = (int *)0x0, 0 < piVar3[4])) {
    do {
      iVar1 = piVar3[5] * (int)param_2 + piVar3[7] + iVar10;
      uVar2 = *(undefined1 *)(iVar1 + -2);
      uVar5 = (piVar3[3] - iVar10) + 1;
      puVar9 = (undefined4 *)(iVar1 + -1);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar9 = puVar9 + 1;
      }
      param_2 = (int *)((int)param_2 + 1);
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = uVar2;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    } while ((int)param_2 < piVar3[4]);
  }
  if ((iVar6 < piVar3[4]) && (param_2 = (int *)(iVar6 + -1), (int)param_2 < piVar3[1] / 2)) {
    do {
      uVar4 = piVar3[3];
      puVar9 = (undefined4 *)(piVar3[5] * (iVar6 + -2) + piVar3[7]);
      puVar11 = (undefined4 *)(piVar3[5] * (int)param_2 + piVar3[7]);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      param_2 = (int *)((int)param_2 + 1);
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    } while ((int)param_2 < piVar3[1] / 2);
  }
  FUN_007ff0c2(param_1[8],param_1[5],param_1[3],param_1[4],piVar3[8],piVar3[5],iVar10,iVar6,param_3,
               param_4,param_5,param_6,param_7,param_8,param_9);
  if ((iVar10 < piVar3[3]) && (param_2 = (int *)0x0, 0 < piVar3[4])) {
    do {
      iVar1 = piVar3[5] * (int)param_2 + piVar3[8] + iVar10;
      uVar2 = *(undefined1 *)(iVar1 + -2);
      uVar5 = (piVar3[3] - iVar10) + 1;
      puVar9 = (undefined4 *)(iVar1 + -1);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
        puVar9 = puVar9 + 1;
      }
      param_2 = (int *)((int)param_2 + 1);
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = uVar2;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    } while ((int)param_2 < piVar3[4]);
  }
  if ((iVar6 < piVar3[4]) && (param_2 = (int *)(iVar6 + -1), (int)param_2 < piVar3[1] / 2)) {
    do {
      uVar4 = piVar3[3];
      puVar9 = (undefined4 *)(piVar3[5] * (iVar6 + -2) + piVar3[8]);
      puVar11 = (undefined4 *)(piVar3[5] * (int)param_2 + piVar3[8]);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      param_2 = (int *)((int)param_2 + 1);
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
    } while ((int)param_2 < piVar3[1] / 2);
  }
  return;
}

