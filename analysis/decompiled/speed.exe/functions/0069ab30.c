/* speed.exe 0069ab30 FUN_0069ab30; analysis pseudocode, not buildable source.
 */

bool __fastcall FUN_0069ab30(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xec) + 0x4c))();
    if (iVar1 != 0) {
      return true;
    }
  }
  return *(char *)(**(int **)(param_1 + 0x28) + 0x5c) != '\0';
}

