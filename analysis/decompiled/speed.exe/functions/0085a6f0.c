/* speed.exe 0085a6f0 FUN_0085a6f0; analysis pseudocode, not buildable source.
 * calls 0084b350 FUN_0084b350
 */

int FUN_0085a6f0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*param_1 != 0) {
    iVar2 = FUN_0084b350(*param_1,param_2,param_3,param_4);
    if (param_2 == 0x73746174) {
      iVar1 = param_1[0x46];
      if (0xfff < iVar1) {
        iVar2 = -1;
      }
      if ((iVar1 == 1) || (((0 < iVar2 && (iVar1 != 0x14)) && (iVar1 != 0x10)))) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

