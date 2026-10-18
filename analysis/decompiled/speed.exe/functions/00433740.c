/* speed.exe 00433740 FUN_00433740; analysis pseudocode, not buildable source.
 * calls 0041b8e0 FUN_0041b8e0
 */

int __fastcall FUN_00433740(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041b8e0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

