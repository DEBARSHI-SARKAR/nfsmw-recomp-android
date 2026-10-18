/* speed.exe 00439950 FUN_00439950; analysis pseudocode, not buildable source.
 * calls 00437a70 FUN_00437a70
 */

void __thiscall FUN_00439950(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0xc != 0) {
      iVar1 = (param_3 - iVar1) / 0xc;
      goto LAB_00439993;
    }
  }
  iVar1 = 0;
LAB_00439993:
  FUN_00437a70(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0xc;
  return;
}

