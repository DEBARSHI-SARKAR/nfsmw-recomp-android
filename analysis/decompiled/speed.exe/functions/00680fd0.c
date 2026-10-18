/* speed.exe 00680fd0 FUN_00680fd0; analysis pseudocode, not buildable source.
 * calls 00675650 FUN_00675650
 */

int __fastcall FUN_00680fd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00675650();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

