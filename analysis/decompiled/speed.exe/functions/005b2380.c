/* speed.exe 005b2380 FUN_005b2380; analysis pseudocode, not buildable source.
 * calls 005b1e80 FUN_005b1e80
 */

uint __fastcall FUN_005b2380(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = param_1[1];
  piVar5 = (int *)(iVar3 + 8);
  iVar1 = *piVar5;
  do {
    if (iVar1 == 0x5262694c) {
LAB_005b23ab:
      uVar2 = (ulonglong)(uint)piVar5[1] / 0xc;
      iVar3 = (int)uVar2;
      if ((uint)piVar5[1] % 0xc == 0) {
        piVar5 = piVar5 + 2;
        FUN_005b1e80(iVar3);
        piVar4 = *(int **)(*param_1 + 0x88);
        if (iVar3 != 0) {
          piVar4 = piVar4 + 2;
          do {
            piVar4[-2] = *piVar5;
            piVar4[-1] = piVar5[1];
            *piVar4 = piVar5[2];
            piVar5 = piVar5 + 3;
            piVar4 = piVar4 + 3;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        return CONCAT31((int3)((uint)piVar4 >> 8),1);
      }
      return (uint)(uint3)(uVar2 >> 8) << 8;
    }
    if (piVar5 == (int *)(*(int *)(iVar3 + 4) + 8 + iVar3)) {
      if (*piVar5 != 0x5262694c) {
        return (uint)(*(int *)(*param_1 + 0x78) == 0);
      }
      goto LAB_005b23ab;
    }
    piVar5 = (int *)((int)piVar5 + piVar5[1] + 8);
    iVar1 = *piVar5;
  } while( true );
}

