/* speed.exe 00780960 FUN_00780960; analysis pseudocode, not buildable source.
 * calls 0077da30 FUN_0077da30
 */

void __thiscall FUN_00780960(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x28 != 0) {
      iVar1 = (param_3 - iVar1) / 0x28;
      goto LAB_007809a5;
    }
  }
  iVar1 = 0;
LAB_007809a5:
  FUN_0077da30(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x28;
  return;
}

