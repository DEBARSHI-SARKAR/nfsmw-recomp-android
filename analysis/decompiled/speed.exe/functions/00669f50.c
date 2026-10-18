/* speed.exe 00669f50 FUN_00669f50; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00669f50(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    if (*(float *)(param_1 + 0xf4) < _DAT_00890968 == (*(float *)(param_1 + 0xf4) == _DAT_00890968))
    {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x114) + 0x5c))();
      if (cVar1 == '\0') {
        (**(code **)(**(int **)(param_1 + 0x114) + 0x20))();
        (**(code **)(**(int **)(param_1 + 0x114) + 0x2c))();
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xf4);
        return 1;
      }
    }
  }
  return 0;
}

