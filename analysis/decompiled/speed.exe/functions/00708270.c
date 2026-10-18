/* speed.exe 00708270 FUN_00708270; analysis pseudocode, not buildable source.
 * calls 00704e00 FUN_00704e00
 */

int * __fastcall FUN_00708270(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)FUN_00704e00();
  if ((piVar3 != (int *)0x0) &&
     (iVar6 = *(int *)(param_1 + 0x5c), iVar6 != *(int *)(param_1 + 0x60))) {
    do {
      piVar1 = *(int **)(iVar6 + 4);
      cVar2 = (**(code **)(*piVar1 + 0x60))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*piVar1 + 0x19c))();
        if (cVar2 == '\0') {
          iVar5 = *piVar3;
          uVar4 = (**(code **)(*piVar1 + 0x28))();
          iVar5 = (**(code **)(iVar5 + 0x58))(uVar4);
          if (iVar5 != 0) {
            return piVar1;
          }
        }
      }
      iVar6 = iVar6 + 8;
    } while (iVar6 != *(int *)(param_1 + 0x60));
  }
  return (int *)0x0;
}

