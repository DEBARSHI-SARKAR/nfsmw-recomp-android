/* speed.exe 00406f80 FUN_00406f80; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00406f80(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  if (*(char *)(iVar2 + 0x2c) != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x68))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))();
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return 1;
}

