/* speed.exe 0044b240 FUN_0044b240; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 004a9250 FUN_004a9250
 */

void __fastcall FUN_0044b240(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar1 != 0) {
    FUN_004a9250();
    (*(code *)PTR_FUN_008ee4d4)(iVar1,0x30);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

