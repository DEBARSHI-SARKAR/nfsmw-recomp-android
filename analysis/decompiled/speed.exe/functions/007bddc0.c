/* speed.exe 007bddc0 FUN_007bddc0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00524850 FUN_00524850
 * calls 007b8040 FUN_007b8040
 */

void __fastcall FUN_007bddc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x2c3cc2d3);
  FUN_00514c70(uVar1);
  uVar1 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x53639a10);
  FUN_00514c70(uVar1);
  FUN_007b8040(0x4e);
  return;
}

