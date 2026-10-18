/* speed.exe 00701070 FUN_00701070; analysis pseudocode, not buildable source.
 */

bool __fastcall FUN_00701070(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20c) == 0) {
    return false;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x20c) + 0x10))();
  return iVar1 != -1;
}

