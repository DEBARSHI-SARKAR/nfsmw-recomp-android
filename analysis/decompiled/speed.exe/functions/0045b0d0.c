/* speed.exe 0045b0d0 FUN_0045b0d0; analysis pseudocode, not buildable source.
 * calls 0045b0f0 FUN_0045b0f0
 */

int __fastcall FUN_0045b0d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0045b0f0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

