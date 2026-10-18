/* speed.exe 0081a1ae FUN_0081a1ae; analysis pseudocode, not buildable source.
 * calls 0081ef59 thunk_FUN_0081d7a4
 */

void FUN_0081a1ae(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar3 = param_1 * 0x90 + DAT_009c21f4;
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x7fff;
    if (param_2 < 0x8000) {
      iVar2 = param_2;
    }
  }
  param_2 = 0;
  if (*(char *)(iVar3 + 0x23) != '\0') {
    psVar4 = (short *)(iVar3 + 4);
    do {
      sVar1 = *psVar4;
      *(char *)(sVar1 * 0x90 + 0x5f + DAT_009c21f4) = (char)((uint)iVar2 >> 8);
      thunk_FUN_0081d7a4((int)sVar1);
      param_2 = param_2 + 1;
      psVar4 = psVar4 + 1;
    } while (param_2 < (int)(uint)*(byte *)(iVar3 + 0x23));
  }
  return;
}

