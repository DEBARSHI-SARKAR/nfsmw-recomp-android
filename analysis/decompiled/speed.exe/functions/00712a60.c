/* speed.exe 00712a60 FUN_00712a60; analysis pseudocode, not buildable source.
 * calls 007110b0 FUN_007110b0
 */

void __thiscall FUN_00712a60(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x2c != 0) {
      iVar1 = (param_3 - iVar1) / 0x2c;
      goto LAB_00712aa5;
    }
  }
  iVar1 = 0;
LAB_00712aa5:
  FUN_007110b0(param_3,1,param_4);
  *param_2 = iVar1 * 0x2c + *(int *)(param_1 + 4);
  return;
}

