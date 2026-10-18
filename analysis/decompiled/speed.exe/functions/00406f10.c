/* speed.exe 00406f10 FUN_00406f10; analysis pseudocode, not buildable source.
 */

bool __fastcall FUN_00406f10(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x68))();
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))();
  return cVar1 != '\0';
}

