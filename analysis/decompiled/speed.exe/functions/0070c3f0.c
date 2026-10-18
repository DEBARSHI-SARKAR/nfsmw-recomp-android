/* speed.exe 0070c3f0 FUN_0070c3f0; analysis pseudocode, not buildable source.
 * calls 0070b1a0 FUN_0070b1a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0070c3f0(int param_1)

{
  if (param_1 != 0) {
    *(undefined ***)(param_1 + 0xc70) = &PTR_LAB_008967fc;
    FUN_0070b1a0();
    return;
  }
  _DAT_00000000 = &PTR_LAB_008967fc;
  FUN_0070b1a0();
  return;
}

