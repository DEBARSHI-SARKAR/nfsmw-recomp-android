/* speed.exe 00627a20 FUN_00627a20; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00627a20(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar4 = (int *)(param_1 + 8);
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 4))();
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*piVar1 + 0x28))();
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  return 0;
}

