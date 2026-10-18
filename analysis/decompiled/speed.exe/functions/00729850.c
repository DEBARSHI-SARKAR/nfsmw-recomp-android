/* speed.exe 00729850 FUN_00729850; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00729850(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  sVar1 = *(short *)(param_1 + 0x10);
  if (sVar1 < *(char *)(param_1 + 0xf)) {
    iVar2 = 0;
    if (0 < sVar1) {
      psVar3 = (short *)(param_1 + 0x12);
      do {
        if (*psVar3 == param_2) {
          return;
        }
        iVar2 = iVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar2 < *(short *)(param_1 + 0x10));
    }
    *(short *)(param_1 + 0x12 + sVar1 * 2) = (short)param_2;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    if ((short)*(char *)(param_1 + 0xe) < *(short *)(param_1 + 0x10)) {
      *(char *)(param_1 + 0xe) = (char)*(short *)(param_1 + 0x10);
    }
  }
  return;
}

