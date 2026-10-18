/* speed.exe 00530570 FUN_00530570; analysis pseudocode, not buildable source.
 * calls 005742d0 FUN_005742d0
 * calls 00524cc0 FUN_00524cc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00530570(int param_1)

{
  FUN_005742d0();
  FUN_00524cc0(*(undefined4 *)(param_1 + 0x44),*(float *)(param_1 + 0xc) - _DAT_0089d8d0,
               *(float *)(param_1 + 0x10) + _DAT_0089d8d4);
  return;
}

