/* speed.exe 00462040 FUN_00462040; analysis pseudocode, not buildable source.
 * calls 00461f40 FUN_00461f40
 */

void __fastcall FUN_00462040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x160);
  FUN_00461f40();
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  return;
}

