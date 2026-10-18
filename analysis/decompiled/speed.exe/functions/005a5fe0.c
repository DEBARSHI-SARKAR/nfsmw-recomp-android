/* speed.exe 005a5fe0 FUN_005a5fe0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 004611c0 FUN_004611c0
 * calls 0059c1a0 FUN_0059c1a0
 * calls 0056bfc0 FUN_0056bfc0
 * calls 0056bb80 FUN_0056bb80
 * calls 00460c50 FUN_00460c50
 * calls 00652b10 thunk_FUN_007c7250
 */

void FUN_005a5fe0(void)

{
  size_t _Size;
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0056bb80();
  }
  iVar2 = FUN_00460c50(iVar1);
  if (0 < iVar2 + 1) {
    _Size = (iVar2 + 1) * 2;
    pvVar3 = _malloc(_Size);
    if (DAT_0091cf84 == 0) {
      FUN_004611c0(pvVar3);
    }
    else {
      FUN_0056bfc0(pvVar3,_Size,iVar1);
    }
    FUN_0059c1a0(pvVar3);
    thunk_FUN_007c7250(pvVar3);
  }
  return;
}

