/* speed.exe 007a6d80 FUN_007a6d80; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 * calls 00524920 FUN_00524920
 * calls 00524850 FUN_00524850
 */

void __fastcall FUN_007a6d80(int param_1)

{
  undefined4 uVar1;
  
  FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xdee8632b,0x5079c8f8,1);
  uVar1 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xdee8632b);
  FUN_00514cc0(uVar1);
  return;
}

