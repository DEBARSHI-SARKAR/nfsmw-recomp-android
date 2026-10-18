/* speed.exe 006e3da0 FUN_006e3da0; analysis pseudocode, not buildable source.
 * calls 006e3400 FUN_006e3400
 */

void __thiscall FUN_006e3da0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0xc != 0) {
      iVar1 = (param_3 - iVar1) / 0xc;
      goto LAB_006e3de3;
    }
  }
  iVar1 = 0;
LAB_006e3de3:
  FUN_006e3400(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0xc;
  return;
}

