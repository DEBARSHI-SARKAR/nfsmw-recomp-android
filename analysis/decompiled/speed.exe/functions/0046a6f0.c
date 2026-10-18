/* speed.exe 0046a6f0 FUN_0046a6f0; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 006f8150 FUN_006f8150
 */

void __fastcall FUN_0046a6f0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x20;
  }
  FUN_006f8150(iVar1,*(undefined4 *)(param_1 + 0x4c));
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_007869c0(0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x94) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

