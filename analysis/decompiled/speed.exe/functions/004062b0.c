/* speed.exe 004062b0 FUN_004062b0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004062b0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x88))();
  if (cVar1 != '\0') {
    piVar2 = (int *)(**(code **)(*param_2 + 0x44))();
    if (*piVar2 == DAT_0092c4f4) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      return;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  return;
}

