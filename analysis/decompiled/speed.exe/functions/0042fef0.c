/* speed.exe 0042fef0 FUN_0042fef0; analysis pseudocode, not buildable source.
 * calls 0041ba30 FUN_0041ba30
 */

int __fastcall FUN_0042fef0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041ba30();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

