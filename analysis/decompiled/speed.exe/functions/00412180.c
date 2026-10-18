/* speed.exe 00412180 FUN_00412180; analysis pseudocode, not buildable source.
 * calls 00411fe0 FUN_00411fe0
 */

bool __fastcall FUN_00412180(int param_1)

{
  char cVar1;
  
  if ((((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x54) != 0)) &&
      (*(int *)(param_1 + 0x58) != 0)) && (*(int *)(param_1 + 0x4c) != 0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 100))();
    if (cVar1 == '\0') {
      cVar1 = FUN_00411fe0();
      return cVar1 != '\0';
    }
  }
  return false;
}

