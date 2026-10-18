/* speed.exe 005d5280 FUN_005d5280; analysis pseudocode, not buildable source.
 * calls 005d47c0 FUN_005d47c0
 */

int __fastcall FUN_005d5280(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d47c0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

