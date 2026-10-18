/* speed.exe 005ee360 FUN_005ee360; analysis pseudocode, not buildable source.
 * calls 005e60d0 FUN_005e60d0
 */

int __fastcall FUN_005ee360(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005e60d0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

