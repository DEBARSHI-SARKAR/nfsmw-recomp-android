/* speed.exe 0066a070 FUN_0066a070; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0066a070(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x114) != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x48))();
    if ((*(byte *)(iVar2 + 0x30) & 1) != 0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x34))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

