/* speed.exe 006846a0 FUN_006846a0; analysis pseudocode, not buildable source.
 * calls 00682140 FUN_00682140
 * calls 00675950 FUN_00675950
 */

int __thiscall FUN_006846a0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_0092c660;
  do {
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
LAB_006846c0:
      if (iVar4 != 0) {
        iVar2 = *(int *)(param_1 + 4);
        param_2 = iVar4;
        iVar3 = FUN_00675950(iVar2,*(undefined4 *)(iVar2 + 4),&param_2);
        FUN_00682140(1);
        *(int *)(iVar2 + 4) = iVar3;
        **(int **)(iVar3 + 4) = iVar3;
      }
      return iVar4;
    }
    if (*piVar1 == param_2) {
      iVar4 = (*(code *)piVar1[1])(param_3);
      goto LAB_006846c0;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}

