/* speed.exe 00607920 FUN_00607920; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00607920(undefined4 param_1,int *param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar1 = *param_2;
  iVar2 = (iVar1 != 0) - 1;
  local_4 = iVar1;
  if (iVar1 < *param_4) {
    iVar3 = 0;
    do {
      param_2 = param_2 + 1;
      iVar4 = 1 << ((byte)iVar3 & 0x1f);
      if (*param_4 < iVar4) break;
      if ((0 < *param_2) && (iVar1 = iVar1 + *param_2, iVar4 <= iVar1)) {
        iVar2 = iVar3 + 1;
        local_4 = iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 < *param_4);
  }
  *param_5 = param_3 - local_4;
  if (iVar2 != -1) {
    *param_4 = 1 << ((byte)iVar2 & 0x1f);
    return;
  }
  *param_4 = 0;
  return;
}

