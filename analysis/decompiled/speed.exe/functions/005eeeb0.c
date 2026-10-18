/* speed.exe 005eeeb0 FUN_005eeeb0; analysis pseudocode, not buildable source.
 * calls 005e6490 FUN_005e6490
 */

int __fastcall FUN_005eeeb0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005e6490();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

