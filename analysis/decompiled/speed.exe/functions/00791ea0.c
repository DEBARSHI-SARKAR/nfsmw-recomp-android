/* speed.exe 00791ea0 FUN_00791ea0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00460d20 FUN_00460d20
 */

void __thiscall FUN_00791ea0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = (int *)*param_1;
  do {
    if (piVar1 == param_1) {
      return;
    }
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0x20c)) {
      iVar4 = param_2 + 0x218;
      do {
        iVar2 = FUN_00460d20(piVar1 + 4,iVar4);
        piVar5 = piVar1;
        if (iVar2 == 0) goto LAB_00791efc;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x8c;
      } while (iVar3 < *(int *)(param_2 + 0x20c));
    }
    piVar5 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar5 = iVar3;
    *(int **)(iVar3 + 4) = piVar5;
    thunk_FUN_007c7250(piVar1);
LAB_00791efc:
    piVar1 = (int *)*piVar5;
  } while( true );
}

