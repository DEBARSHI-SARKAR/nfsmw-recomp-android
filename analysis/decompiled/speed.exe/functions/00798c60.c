/* speed.exe 00798c60 FUN_00798c60; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 00844b00 FUN_00844b00
 */

void __fastcall FUN_00798c60(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00794f80();
  if ((*(int *)(iVar1 + 0x38) != 0) && (*param_1 != 0)) {
    iVar1 = FUN_00794f80(0,*param_1);
    FUN_00844b00(*(undefined4 *)(iVar1 + 0x38));
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

