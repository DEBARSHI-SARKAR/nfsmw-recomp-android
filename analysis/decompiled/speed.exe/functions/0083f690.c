/* speed.exe 0083f690 FUN_0083f690; analysis pseudocode, not buildable source.
 * calls 0084bd60 FUN_0084bd60
 * calls 0083ef10 FUN_0083ef10
 * calls 0084bdf0 FUN_0084bdf0
 */

uint FUN_0083f690(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar1 = param_1 + 0x1a0;
  FUN_0084bd60(iVar1);
  if (*(int *)(param_1 + 0x198) == 0) {
    do {
      if (0 < *(int *)(param_1 + 0x1d4)) break;
      *(undefined4 *)(param_1 + 0x1d4) = 1;
      iVar2 = FUN_0083ef10();
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    } while (0 < iVar2);
  }
  uVar4 = *(uint *)(param_1 + 0x198);
  if (uVar4 == 0) {
    FUN_0084bdf0(iVar1);
    return 0;
  }
  if (param_3 == 1) {
    param_3 = **(int **)(param_1 + 0x194);
  }
  if (param_3 < (int)uVar4) {
    piVar6 = *(int **)(param_1 + 0x194);
    iVar2 = *piVar6;
    uVar4 = 0;
    if (iVar2 <= param_3) {
      do {
        uVar4 = uVar4 + iVar2;
        iVar2 = *(int *)((int)piVar6 + uVar4);
      } while ((int)(iVar2 + uVar4) <= param_3);
      if (0 < (int)uVar4) {
        if (param_2 != (int *)0x0) {
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *param_2 = *piVar6;
            piVar6 = piVar6 + 1;
            param_2 = param_2 + 1;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(char *)param_2 = (char)*piVar6;
            piVar6 = (int *)((int)piVar6 + 1);
            param_2 = (int *)((int)param_2 + 1);
          }
        }
        uVar5 = *(int *)(param_1 + 0x198) - uVar4;
        puVar7 = (undefined4 *)((int)*(undefined4 **)(param_1 + 0x194) + uVar4);
        puVar8 = *(undefined4 **)(param_1 + 0x194);
        for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) - uVar4;
      }
    }
    FUN_0084bdf0(iVar1);
    return uVar4;
  }
  if (param_2 != (int *)0x0) {
    piVar6 = *(int **)(param_1 + 0x194);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = *piVar6;
      piVar6 = piVar6 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)param_2 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      param_2 = (int *)((int)param_2 + 1);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x198) = 0;
  FUN_0084bdf0(iVar1);
  return uVar4;
}

