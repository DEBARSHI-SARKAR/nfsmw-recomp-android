/* speed.exe 00507460 FUN_00507460; analysis pseudocode, not buildable source.
 * calls 00506b50 FUN_00506b50
 * calls 004fb210 FUN_004fb210
 * calls 006da900 FUN_006da900
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507460(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (*param_1 == -0x7fecbff0) {
    piVar4 = param_1 + 2;
    piVar1 = (int *)((int)param_1 + param_1[1] + 8);
    uVar5 = 0;
    if (piVar4 < piVar1) {
      uVar5 = 0;
      iVar3 = DAT_0091518c;
      do {
        iVar2 = *piVar4;
        if (iVar2 == 0x134011) {
          uVar5 = (int)piVar4 + 0x17U & 0xfffffff0;
        }
        else if (iVar2 == 0x134017) {
          DAT_0091518c = iVar3 - piVar4[1];
          iVar3 = DAT_0091518c;
        }
        else if (iVar2 == 0x134018) {
          DAT_0091518c = iVar3 - piVar4[1];
          iVar3 = DAT_0091518c;
        }
        else if (iVar2 == 0x134019) {
          DAT_0091518c = iVar3 - piVar4[1];
          iVar3 = DAT_0091518c;
        }
        else if (iVar2 == 0x13401b) {
          _DAT_00915190 = _DAT_00915190 - piVar4[1];
        }
        else if ((iVar2 != 0x13401a) && (iVar2 == -0x7fecbf00)) {
          FUN_006da900(piVar4);
          iVar3 = DAT_0091518c;
        }
        piVar4 = (int *)((int)piVar4 + piVar4[1] + 8);
      } while (piVar4 < piVar1);
    }
    if (param_2 != 0) {
      iVar3 = FUN_004fb210(*(undefined4 *)(uVar5 + 0x10),*(undefined4 *)(param_2 + 0x74),
                           *(undefined4 *)(param_2 + 0xc),0,8);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 4) = 0;
        DAT_009175d8 = DAT_009175d8 + -1;
        (&DAT_009175dc)[*(uint *)(uVar5 + 0x10) & 0x1fff] =
             (&DAT_009175dc)[*(uint *)(uVar5 + 0x10) & 0x1fff] + -1;
      }
    }
    *(undefined2 *)(param_2 + 0x7c) = 0xffff;
    FUN_00506b50(uVar5);
    iVar3 = *(int *)(uVar5 + 4);
    piVar4 = *(int **)(uVar5 + 8);
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    DAT_00915184 = DAT_00915184 + -1;
    DAT_00915fe0 = 1;
    DAT_00915188 = DAT_00915188 - param_1[1];
  }
  return;
}

