/* speed.exe 005b00e0 FUN_005b00e0; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 */

void __fastcall FUN_005b00e0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((0x1ff < uVar1) && (uVar1 < 0x205)) && (uVar1 != 0x203)) {
    thunk_FUN_007c7250(param_1[1]);
  }
  param_1[1] = 0;
  return;
}

