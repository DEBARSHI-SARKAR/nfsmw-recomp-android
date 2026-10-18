/* speed.exe 007f3f10 FUN_007f3f10; analysis pseudocode, not buildable source.
 * calls 007f3e78 FUN_007f3e78
 */

undefined4 __fastcall FUN_007f3f10(int param_1)

{
  undefined4 extraout_ECX;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_007f3e78();
  return extraout_ECX;
}

