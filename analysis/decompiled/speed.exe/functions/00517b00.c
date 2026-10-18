/* speed.exe 00517b00 FUN_00517b00; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 */

void __fastcall FUN_00517b00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0045ce40();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

