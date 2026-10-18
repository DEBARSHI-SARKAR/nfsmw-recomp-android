/* speed.exe 00504f70 FUN_00504f70; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 */

void __thiscall FUN_00504f70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0xc);
  cVar1 = *(char *)(iVar3 + 0x19);
  piVar4 = *(int **)(param_1 + 0x10);
  if ((piVar4 != (int *)0x0) && (iVar2 != 0)) {
    iVar8 = 0;
    if (0 < iVar2) {
      piVar7 = piVar4 + 2;
      do {
        *(undefined4 *)(param_2 + iVar8 * 4) = 0;
        if (*piVar7 == -1) {
          iVar6 = FUN_00503400(piVar7[-1],1,0);
          *piVar7 = iVar6;
        }
        piVar7 = piVar7 + 3;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar2);
    }
    iVar8 = 0;
    if (0 < cVar1) {
      do {
        iVar6 = 0;
        piVar7 = piVar4;
        if (0 < iVar2) {
          do {
            if ((piVar7[1] != 0) && (*piVar7 == *(int *)(*(int *)(iVar3 + 0x2c) + iVar8 * 8))) {
              iVar5 = *(int *)(*(int *)(iVar3 + 0x2c) + 4 + iVar8 * 8);
              *(int *)(*(int *)(iVar3 + 0x2c) + 4 + iVar8 * 8) = piVar7[2];
              *(int *)(param_2 + iVar6 * 4) = *(int *)(iVar3 + 0x2c) + 4 + iVar8 * 8;
              piVar7[2] = iVar5;
              break;
            }
            piVar7 = piVar7 + 3;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < cVar1);
    }
  }
  return;
}

