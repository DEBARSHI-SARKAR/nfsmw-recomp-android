/* speed.exe 0070dd50 FUN_0070dd50; analysis pseudocode, not buildable source.
 * calls 00705870 FUN_00705870
 */

int __fastcall FUN_0070dd50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00705870();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

