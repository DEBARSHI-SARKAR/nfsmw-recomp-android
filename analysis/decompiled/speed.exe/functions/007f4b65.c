/* speed.exe 007f4b65 FUN_007f4b65; analysis pseudocode, not buildable source.
 * calls 007f66a8 FUN_007f66a8
 */

void __fastcall FUN_007f4b65(int param_1)

{
  undefined4 local_8;
  
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  local_8 = 1;
  FUN_007f66a8(0,0,&local_8);
  return;
}

