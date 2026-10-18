/* speed.exe 00406f30 FUN_00406f30; analysis pseudocode, not buildable source.
 * calls 00406f10 FUN_00406f10
 */

bool __fastcall FUN_00406f30(int param_1)

{
  char cVar1;
  
  if ((((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x54) != 0)) &&
      (*(int *)(param_1 + 0x58) != 0)) && (*(int *)(param_1 + 0x4c) != 0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 100))();
    if (cVar1 == '\0') {
      cVar1 = FUN_00406f10();
      return cVar1 != '\0';
    }
  }
  return false;
}

