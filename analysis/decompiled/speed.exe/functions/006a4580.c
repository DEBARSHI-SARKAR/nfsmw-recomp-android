/* speed.exe 006a4580 FUN_006a4580; analysis pseudocode, not buildable source.
 * calls 006947d0 FUN_006947d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_006a4580(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x58))();
    if ((iVar2 == 0) && (cVar1 = FUN_006947d0(2), cVar1 == '\0')) {
      return 1;
    }
    if (_DAT_00890e98 < *(float *)(param_1 + 0x54)) {
      return 1;
    }
  }
  return 0;
}

