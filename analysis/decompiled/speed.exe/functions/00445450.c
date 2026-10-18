/* speed.exe 00445450 FUN_00445450; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00445450(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}

