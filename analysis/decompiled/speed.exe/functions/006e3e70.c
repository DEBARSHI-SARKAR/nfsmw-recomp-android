/* speed.exe 006e3e70 FUN_006e3e70; analysis pseudocode, not buildable source.
 * calls 006e36f0 FUN_006e36f0
 */

void __thiscall FUN_006e3e70(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x18 != 0) {
      iVar1 = (param_3 - iVar1) / 0x18;
      goto LAB_006e3eb5;
    }
  }
  iVar1 = 0;
LAB_006e3eb5:
  FUN_006e36f0(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0x18;
  return;
}

