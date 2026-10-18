/* speed.exe 00585820 FUN_00585820; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 * calls 005af1c0 FUN_005af1c0
 */

int __thiscall FUN_00585820(int param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = FUN_00460c50(param_2);
  for (pcVar4 = param_2 + iVar3; pcVar4 != param_2; pcVar4 = pcVar4 + -1) {
    if (*pcVar4 == '\\') {
      pcVar4 = pcVar4 + 1;
      break;
    }
  }
  iVar3 = FUN_005af1c0(pcVar4);
  piVar7 = (int *)(param_1 + 4);
  if (*piVar7 == 0) goto LAB_0058585e;
  iVar6 = *piVar7 + -4;
  do {
    iVar5 = param_1;
    if (piVar7 == (int *)0x0) {
      iVar5 = 0;
    }
    if (iVar6 == iVar5) {
      return 0;
    }
    iVar5 = **(int **)(iVar6 + 0x18);
    if (iVar5 == 0x30203) {
      piVar1 = *(int **)(iVar6 + 0x14);
      if (((*piVar1 == -0x1891baba) && (piVar1[2] == 0x64486b50)) && (0x1ffff < (uint)piVar1[4])) {
        iVar5 = FUN_005af1c0(piVar1 + 10);
      }
      else {
LAB_005858b2:
        iVar5 = 0;
      }
    }
    else {
      if (iVar5 != 0x30210) goto LAB_005858b2;
      iVar5 = (*(int **)(iVar6 + 0x18))[2];
    }
    if (iVar5 == iVar3) {
      iVar3 = *(int *)(iVar6 + 4);
      piVar2 = *(int **)(iVar6 + 8);
      piVar1 = (int *)(iVar6 + 4);
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      iVar3 = *piVar7;
      *piVar7 = (int)piVar1;
      *(int **)(iVar3 + 4) = piVar1;
      *(int **)(iVar6 + 8) = piVar7;
      *piVar1 = iVar3;
      return iVar6;
    }
    if (*(int *)(iVar6 + 4) == 0) {
LAB_0058585e:
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 4) + -4;
    }
  } while( true );
}

