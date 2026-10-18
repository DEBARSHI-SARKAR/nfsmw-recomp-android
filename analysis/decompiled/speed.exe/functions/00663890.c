/* speed.exe 00663890 FUN_00663890; analysis pseudocode, not buildable source.
 * calls 00662370 FUN_00662370
 */

void __thiscall FUN_00663890(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x24 != 0) {
      iVar1 = (param_3 - iVar1) / 0x24;
      goto LAB_006638d5;
    }
  }
  iVar1 = 0;
LAB_006638d5:
  FUN_00662370(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x24;
  return;
}

