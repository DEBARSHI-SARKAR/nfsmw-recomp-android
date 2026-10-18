/* speed.exe 004641b0 FUN_004641b0; analysis pseudocode, not buildable source.
 * calls 00461d00 FUN_00461d00
 */

int __thiscall FUN_004641b0(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x264) = 0;
  if (param_4 != 0) {
    *(undefined **)(param_1 + 0x264) = &DAT_00461b30;
  }
  iVar3 = 0;
  if (param_3 != (char *)0x0) {
    cVar2 = *param_3;
    while (cVar2 != '\0') {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar2 = param_3[iVar1];
    }
  }
  FUN_00461d00(param_2,param_3,iVar3 + 1);
  return param_1;
}

