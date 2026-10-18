/* speed.exe 00430a00 FUN_00430a00; analysis pseudocode, not buildable source.
 * calls 0041b9e0 FUN_0041b9e0
 */

int __fastcall FUN_00430a00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041b9e0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

