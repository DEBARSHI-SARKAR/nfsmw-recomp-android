/* speed.exe 0048c950 FUN_0048c950; analysis pseudocode, not buildable source.
 * calls 0048c190 FUN_0048c190
 */

int __fastcall FUN_0048c950(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0048c190();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

