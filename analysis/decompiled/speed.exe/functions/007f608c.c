/* speed.exe 007f608c FUN_007f608c; analysis pseudocode, not buildable source.
 * calls 007f3df0 FUN_007f3df0
 */

void __fastcall FUN_007f608c(undefined4 *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  FUN_007f3df0();
  return;
}

