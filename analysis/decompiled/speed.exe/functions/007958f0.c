/* speed.exe 007958f0 FUN_007958f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00460d20 FUN_00460d20
 * calls 00790750 FUN_00790750
 * calls 00795770 FUN_00795770
 */

int __thiscall FUN_007958f0(int param_1,char *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((((param_2 == (char *)0x0) || (*param_2 == '\0')) || (param_4 < 0)) || (5 < param_4)) {
    return -0x14;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = (int *)(param_1 + 0x10);
  if (piVar4 != piVar1) {
    do {
      if ((param_3 == piVar4[2]) && (iVar3 = FUN_00460d20(param_2,piVar4 + 3), iVar3 == 0)) break;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != piVar1);
    if (piVar4 != piVar1) {
      iVar3 = FUN_00795770(param_2,param_3,param_4);
      if (0 < iVar3) {
        piVar1 = (int *)piVar4[1];
        iVar2 = *piVar4;
        *piVar1 = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
        FUN_00790750();
        thunk_FUN_007c7250(piVar4);
      }
      return iVar3;
    }
  }
  return -0xf;
}

