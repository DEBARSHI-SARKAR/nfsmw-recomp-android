/* speed.exe 00838360 FUN_00838360; analysis pseudocode, not buildable source.
 * calls 00848200 FUN_00848200
 * calls 008489a0 FUN_008489a0
 * calls 00847b60 FUN_00847b60
 */

int FUN_00838360(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_3 == 2) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  iVar1 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    iVar1 = FUN_00848200(*(undefined4 *)(param_1 + 8),param_2);
    if (((iVar1 != 0) && (*(int **)(iVar1 + 0x100) != (int *)0x0)) &&
       (iVar1 = **(int **)(iVar1 + 0x100), iVar1 != 0)) {
      iVar1 = FUN_008489a0(*(undefined4 *)(param_1 + 8),iVar1,param_3,FUN_00836a90,param_1,
                           *(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x8c));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      }
      else {
        *(int *)(param_1 + 0x10) = iVar1;
      }
      *(undefined4 *)(param_1 + 0x3c) = 1;
      if (*(code **)(param_1 + 0x24) != (code *)0x0) {
        (**(code **)(param_1 + 0x24))(param_1,5,0,*(undefined4 *)(param_1 + 0x20));
      }
      return iVar1;
    }
  }
  return -8;
}

