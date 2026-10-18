/* speed.exe 0044b130 FUN_0044b130; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 0073b880 FUN_0073b880
 */

int * __thiscall FUN_0044b130(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00460bf0(param_2);
  iVar1 = *(int *)(param_1 + 0x18);
  do {
    if (iVar1 == param_1 + 0x14) {
      return (int *)0x0;
    }
    piVar2 = *(int **)(iVar1 + 8);
    iVar4 = (**(code **)(*piVar2 + 0x20))();
    if (iVar4 != 0) {
      (**(code **)(*piVar2 + 0x20))();
      iVar4 = FUN_0073b880();
      if (*(int *)(iVar4 + 8) == iVar3) {
        return piVar2;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

