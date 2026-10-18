/* speed.exe 00430730 FUN_00430730; analysis pseudocode, not buildable source.
 * calls 0041b840 FUN_0041b840
 */

int __fastcall FUN_00430730(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041b840();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

