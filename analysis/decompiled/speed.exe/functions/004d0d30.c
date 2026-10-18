/* speed.exe 004d0d30 FUN_004d0d30; analysis pseudocode, not buildable source.
 * calls 004d0c40 FUN_004d0c40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d0d30(int param_1)

{
  FUN_004d0c40();
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xb4);
  DAT_00911ed4 = 0;
  DAT_00911ed8 = 0;
  _DAT_00911edc = 0;
  DAT_00911ee0 = 0;
  return;
}

