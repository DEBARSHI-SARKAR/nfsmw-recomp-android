/* speed.exe 00666ce0 FUN_00666ce0; analysis pseudocode, not buildable source.
 * calls 00666320 FUN_00666320
 */

int __fastcall FUN_00666ce0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0x6c0f87bf;
  uVar1 = FUN_00666320(0,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}

