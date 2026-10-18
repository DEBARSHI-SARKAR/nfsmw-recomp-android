/* speed.exe 00406e80 FUN_00406e80; analysis pseudocode, not buildable source.
 */

char __fastcall FUN_00406e80(int param_1)

{
  char cVar1;
  
  if ((((*(int *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x54) != 0)) &&
      (*(int *)(param_1 + 0x58) != 0)) && (*(int *)(param_1 + 0x4c) != 0)) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x68))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))();
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 100))();
        return '\x01' - (cVar1 != '\0');
      }
    }
  }
  return '\0';
}

