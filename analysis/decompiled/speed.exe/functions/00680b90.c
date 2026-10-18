/* speed.exe 00680b90 FUN_00680b90; analysis pseudocode, not buildable source.
 * calls 00674e30 FUN_00674e30
 */

int __fastcall FUN_00680b90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00674e30();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

