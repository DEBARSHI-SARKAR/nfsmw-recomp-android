/* speed.exe 0045b080 FUN_0045b080; analysis pseudocode, not buildable source.
 * calls 0045b0a0 FUN_0045b0a0
 */

int __fastcall FUN_0045b080(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0045b0a0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

