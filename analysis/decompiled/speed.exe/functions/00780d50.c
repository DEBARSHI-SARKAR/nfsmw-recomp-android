/* speed.exe 00780d50 FUN_00780d50; analysis pseudocode, not buildable source.
 * calls 0077e8a0 FUN_0077e8a0
 */

void __thiscall FUN_00780d50(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0x30 != 0) {
      iVar1 = (param_3 - iVar1) / 0x30;
      goto LAB_00780d95;
    }
  }
  iVar1 = 0;
LAB_00780d95:
  FUN_0077e8a0(param_3,1,param_4);
  *param_2 = iVar1 * 0x30 + *(int *)(param_1 + 4);
  return;
}

