/* speed.exe 00724af0 FUN_00724af0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00724af0(int param_1)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  
  do {
    bVar2 = false;
    iVar4 = 0;
    if (*(short *)(param_1 + 0x10) == 1 || *(short *)(param_1 + 0x10) + -1 < 0) {
      return;
    }
    psVar3 = (short *)(param_1 + 0x12);
    do {
      sVar1 = psVar3[1];
      if (sVar1 < *psVar3) {
        psVar3[1] = *psVar3;
        *psVar3 = sVar1;
        bVar2 = true;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar4 < *(short *)(param_1 + 0x10) + -1);
  } while (bVar2);
  return;
}

