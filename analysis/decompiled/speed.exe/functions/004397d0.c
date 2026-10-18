/* speed.exe 004397d0 FUN_004397d0; analysis pseudocode, not buildable source.
 * calls 00436f10 FUN_00436f10
 */

void __thiscall FUN_004397d0(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 8) - iVar1) / 0xc != 0) {
      iVar1 = (param_3 - iVar1) / 0xc;
      goto LAB_00439813;
    }
  }
  iVar1 = 0;
LAB_00439813:
  FUN_00436f10(param_3,1,param_4);
  *param_2 = *(int *)(param_1 + 4) + iVar1 * 0xc;
  return;
}

