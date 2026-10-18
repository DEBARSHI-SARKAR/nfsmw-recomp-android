/* speed.exe 00439840 FUN_00439840; analysis pseudocode, not buildable source.
 * calls 00437210 FUN_00437210
 */

void __thiscall FUN_00439840(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x1c != 0) {
      iVar1 = (param_3 - iVar1) / 0x1c;
      goto LAB_00439889;
    }
  }
  iVar1 = 0;
LAB_00439889:
  FUN_00437210(param_3,1,param_4);
  *param_2 = iVar1 * 0x1c + *(int *)(param_1 + 4);
  return;
}

