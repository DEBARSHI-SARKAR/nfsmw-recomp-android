/* speed.exe 004068f0 FUN_004068f0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_004068f0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
      cVar1 = (**(code **)(*piVar3 + 0x28))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

