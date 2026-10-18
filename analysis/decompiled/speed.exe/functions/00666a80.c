/* speed.exe 00666a80 FUN_00666a80; analysis pseudocode, not buildable source.
 * calls 006662b0 FUN_006662b0
 */

int __fastcall FUN_00666a80(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0x9b35fe3a;
  uVar1 = FUN_006662b0(0,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}

