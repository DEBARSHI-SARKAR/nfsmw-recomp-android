/* speed.exe 007f4869 FUN_007f4869; analysis pseudocode, not buildable source.
 * calls 007f5c07 FUN_007f5c07
 * calls 007f66a8 FUN_007f66a8
 */

void __fastcall FUN_007f4869(int param_1)

{
  undefined4 local_10 [3];
  
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  local_10[0] = 0x10000;
  FUN_007f5c07();
  FUN_007f66a8(0,0,local_10);
  return;
}

