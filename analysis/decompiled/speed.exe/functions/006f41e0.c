/* speed.exe 006f41e0 FUN_006f41e0; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_006f41e0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  piVar4 = *(int **)(param_3 * 0x30 + 4 + param_1);
  param_1 = param_3 * 0x30 + param_1;
  piVar1 = piVar4 + *(int *)(param_1 + 0xc);
  do {
    if (piVar4 == piVar1) {
LAB_006f4235:
      piVar1 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
      if (piVar4 == piVar1) {
        return piVar4;
      }
      if (piVar4 != piVar1) {
        iVar8 = (int)piVar1 - (int)piVar4 >> 2;
        uVar5 = (int)piVar4 - *(int *)(param_1 + 4) >> 2;
        uVar3 = 0;
        if (*(int *)(param_1 + 0xc) - iVar8 != uVar5) {
          iVar7 = uVar5 * 4;
          do {
            puVar6 = (undefined4 *)(iVar7 + *(int *)(param_1 + 4));
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *(undefined4 *)(*(int *)(param_1 + 4) + (uVar3 + iVar8 + uVar5) * 4);
            }
            uVar3 = uVar3 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar3 < (*(int *)(param_1 + 0xc) - iVar8) - uVar5);
        }
        uVar3 = *(int *)(param_1 + 0xc) - iVar8;
        *(uint *)(param_1 + 0xc) = uVar3;
        if (uVar5 < uVar3) {
          return (int *)(*(int *)(param_1 + 4) + uVar5 * 4);
        }
        piVar4 = (int *)(*(int *)(param_1 + 4) + uVar3 * 4);
      }
      return piVar4;
    }
    if (*piVar4 == param_2) {
      piVar2 = piVar4;
      if (piVar4 != piVar1) {
        while (piVar2 = piVar2 + 1, piVar2 != piVar1) {
          if (*piVar2 != param_2) {
            *piVar4 = *piVar2;
            piVar4 = piVar4 + 1;
          }
        }
      }
      goto LAB_006f4235;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}

