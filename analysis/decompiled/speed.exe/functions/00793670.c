/* speed.exe 00793670 FUN_00793670; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00460d20 FUN_00460d20
 * calls 00790750 FUN_00790750
 */

void __thiscall FUN_00793670(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    piVar3 = *(int **)(param_1 + 0x10);
    if (piVar3 != (int *)(param_1 + 0x10)) {
      while ((param_3 != piVar3[2] || (iVar2 = FUN_00460d20(param_2,piVar3 + 3), iVar2 != 0))) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)(param_1 + 0x10)) {
          return;
        }
      }
      piVar1 = (int *)piVar3[1];
      iVar2 = *piVar3;
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      FUN_00790750();
      thunk_FUN_007c7250(piVar3);
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_2,param_3,1,*(undefined4 *)(param_1 + 0x1c));
      }
    }
  }
  return;
}

