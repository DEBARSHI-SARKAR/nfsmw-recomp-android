/* speed.exe 00502d40 FUN_00502d40; analysis pseudocode, not buildable source.
 * calls 004fb210 FUN_004fb210
 * calls 006bed70 FUN_006bed70
 */

void __thiscall FUN_00502d40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    if ((*(int *)(param_1 + 0x14) != 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x74), iVar1 != 0)) {
      param_4 = FUN_004fb210(*(undefined4 *)(param_2 + 0x24),iVar1,*(undefined4 *)(param_1 + 0x18),0
                             ,8);
      if (param_4 != 0) goto LAB_00502d77;
    }
  }
  else {
LAB_00502d77:
    *(int *)(param_4 + 4) = param_2;
    DAT_0091a0d8 = DAT_0091a0d8 + 1;
    (&DAT_0091a0dc)[*(uint *)(param_2 + 0x24) & 0x1fff] =
         (&DAT_0091a0dc)[*(uint *)(param_2 + 0x24) & 0x1fff] + '\x01';
  }
  if (*(int *)(param_2 + 0x2c) == 0) {
    *(int *)(param_2 + 0x6c) = param_2;
  }
  else {
    if ((*(int *)(param_1 + 0x14) != 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x74), iVar1 != 0)) {
      iVar1 = FUN_004fb210(*(int *)(param_2 + 0x2c),iVar1,*(undefined4 *)(param_1 + 0x18),0,8);
      if (iVar1 != 0) {
        *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(iVar1 + 4);
        goto LAB_00502dd3;
      }
    }
    *(undefined4 *)(param_2 + 0x6c) = 0;
  }
LAB_00502dd3:
  *(int *)(param_2 + 0x68) = param_1;
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  FUN_006bed70(param_3);
  DAT_00915fe4 = 1;
  if (*(int *)(param_2 + 0x24) == 0x66994f4a) {
    DAT_00916040 = param_2;
  }
  return;
}

