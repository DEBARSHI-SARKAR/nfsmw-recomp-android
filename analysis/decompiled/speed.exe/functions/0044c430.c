/* speed.exe 0044c430 FUN_0044c430; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004a9250 FUN_004a9250
 */

void __fastcall FUN_0044c430(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x18));
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    FUN_004a9250();
    (*(code *)PTR_FUN_008ee4d4)(iVar1,0x30);
  }
  return;
}

