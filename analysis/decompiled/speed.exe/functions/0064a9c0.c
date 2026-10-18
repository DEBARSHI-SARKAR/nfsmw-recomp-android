/* speed.exe 0064a9c0 FUN_0064a9c0; analysis pseudocode, not buildable source.
 * calls 0064a9c0 FUN_0064a9c0
 * calls 0045cd20 __break
 */

int FUN_0064a9c0(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  if (10 < param_6 + 1) {
                    /* WARNING: Subroutine does not return */
    __break();
  }
  piVar2 = (int *)(param_3 + (int)param_2);
  if (piVar2 <= param_2) {
    return param_5;
  }
  do {
    bVar1 = (*param_2 != -0x4cce0000) - 1U & (byte)DAT_008f7dd4;
    if (bVar1 == (byte)param_1) {
      uVar6 = (int)param_2 - param_5 & 0x7f;
      if ((uVar6 != 0) && (uVar6 < 9)) {
        uVar6 = uVar6 + 0x80;
      }
      if ((param_4 != 0) && (uVar6 != 0)) {
        *(uint *)(param_4 + 4 + param_5) = uVar6 - 8;
        *(undefined4 *)(param_4 + param_5) = 0;
        puVar8 = (undefined4 *)(param_4 + 8 + param_5);
        for (uVar4 = uVar6 - 8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = 0x11111111;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = uVar6 - 8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar8 = 0x11;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      param_5 = param_5 + uVar6;
    }
    iVar5 = param_5;
    if ((*param_2 < 0) && (bVar1 == 0)) {
      iVar3 = FUN_0064a9c0(param_1,param_2 + 2,param_2[1],param_4,param_5 + 8,param_6 + 1);
      if ((iVar3 != param_5 + 8) && (iVar5 = iVar3, param_4 != 0)) {
        *(int *)(param_4 + param_5) = *param_2;
        *(int *)(param_4 + 4 + param_5) = (iVar3 - param_5) + -8;
      }
    }
    else if (bVar1 == (byte)param_1) {
      if (param_4 != 0) {
        iVar5 = param_2[1];
        piVar7 = param_2;
        piVar9 = (int *)(param_4 + param_5);
        for (uVar6 = iVar5 + 8U >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *piVar9 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar9 = piVar9 + 1;
        }
        for (uVar6 = iVar5 + 8U & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)piVar9 = (char)*piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
          piVar9 = (int *)((int)piVar9 + 1);
        }
      }
      iVar5 = param_2[1] + 8 + param_5;
    }
    param_2 = (int *)((int)param_2 + param_2[1] + 8);
    param_5 = iVar5;
  } while (param_2 < piVar2);
  return iVar5;
}

