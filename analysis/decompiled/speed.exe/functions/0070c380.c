/* speed.exe 0070c380 FUN_0070c380; analysis pseudocode, not buildable source.
 * calls 0070af00 FUN_0070af00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0070c380(int param_1)

{
  if (param_1 != 0) {
    *(undefined ***)(param_1 + 0x850) = &PTR_LAB_008967fc;
    FUN_0070af00();
    return;
  }
  _DAT_00000000 = &PTR_LAB_008967fc;
  FUN_0070af00();
  return;
}

