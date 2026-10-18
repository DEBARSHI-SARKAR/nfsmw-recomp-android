/* speed.exe 004b4330 FUN_004b4330; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b4330(int *param_1)

{
  float10 fVar1;
  
  if ((*(int *)(*(int *)(param_1[5] + 0x34) + 0x228) == 0) && (*(int *)(param_1[0xb] + 0x84) == 0))
  {
    fVar1 = (float10)(**(code **)(*param_1 + 0x44))();
    if (fVar1 <= (float10)_DAT_00896440) {
      *(undefined1 *)(param_1 + 0x4e) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  return;
}

