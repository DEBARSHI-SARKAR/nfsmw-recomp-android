/* speed.exe 006fb930 FUN_006fb930; analysis pseudocode, not buildable source.
 * calls 006fb250 FUN_006fb250
 * calls 006eb5f0 FUN_006eb5f0
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_006fb930(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = param_2;
  piVar1 = *(int **)(param_1 + 0x3b0);
  piVar2 = (int *)*piVar1;
  if (piVar2 == piVar1) {
    return;
  }
  do {
    piVar3 = (int *)piVar2[4];
    iVar4 = *piVar3;
    if (piVar5 == (int *)0x0) {
      if (iVar4 == 0) goto LAB_006fb987;
    }
    else if ((iVar4 != 0) && (piVar5[1] == *(int *)(iVar4 + 4))) {
LAB_006fb987:
      FUN_006fb250(&param_2,piVar2);
      (**(code **)(*piVar5 + 0xc0))(0);
      if (*piVar3 != 0) {
        *piVar3 = 0;
      }
      FUN_005d0370(piVar3,8,0);
      return;
    }
    FUN_006eb5f0();
    if (piVar2 == piVar1) {
      return;
    }
  } while( true );
}

