/* speed.exe 006b54b0 FUN_006b54b0; analysis pseudocode, not buildable source.
 * calls 00695f50 FUN_00695f50
 */

void FUN_006b54b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != param_2) && (iVar3 = param_1 + 0x30, iVar3 != param_2)) {
    iVar4 = param_1 + 0x60;
    do {
      iVar1 = iVar3;
      iVar2 = param_1;
      if (*(float *)(iVar4 + -0x14) <= *(float *)(param_1 + 0x1c)) {
        do {
          iVar2 = iVar1;
          iVar1 = iVar2 + -0x30;
        } while (*(float *)(iVar2 + -0x14) < *(float *)(iVar4 + -0x14));
      }
      if ((iVar2 != iVar3) && (iVar3 != iVar4)) {
        FUN_00695f50(iVar2,iVar3,iVar4,0,0);
      }
      iVar3 = iVar3 + 0x30;
      iVar4 = iVar4 + 0x30;
    } while (iVar3 != param_2);
  }
  return;
}

