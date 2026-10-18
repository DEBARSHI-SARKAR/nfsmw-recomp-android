/* speed.exe 00464d50 FUN_00464d50; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

/* WARNING: Removing unreachable block (ram,0x00464d65) */

void __fastcall FUN_00464d50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = 0;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  return;
}

