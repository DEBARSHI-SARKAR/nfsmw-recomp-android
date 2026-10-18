/* speed.exe 0040ad80 FUN_0040ad80; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0040ad80(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 8))();
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = (**(code **)(*param_1 + 8))();
      iVar1 = (**(code **)(**(int **)(iVar1 + 0x1c) + 0x20))();
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

