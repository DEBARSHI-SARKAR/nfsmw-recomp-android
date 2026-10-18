/* speed.exe 004214f0 FUN_004214f0; analysis pseudocode, not buildable source.
 * calls 004131c0 FUN_004131c0
 * calls 00413320 FUN_00413320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004214f0(int param_1)

{
  float10 fVar1;
  float fStack_10;
  undefined1 auStack_c [12];
  
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x48) + 0x84))();
  if (fVar1 < (float10)_DAT_00890968 != (fVar1 == (float10)_DAT_00890968)) {
    FUN_004131c0(auStack_c);
    fVar1 = (float10)FUN_00413320(auStack_c);
    if (fVar1 <= (float10)_DAT_008913e0) {
      fStack_10 = (float)fVar1;
    }
    else {
      fStack_10 = 26.8218;
    }
    (**(code **)(**(int **)(param_1 + 0x50) + 0x94))(fStack_10);
  }
  return;
}

