/* speed.exe 00724a80 FUN_00724a80; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00724a80(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  short *psVar3;
  
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x10)) {
    psVar3 = (short *)(param_1 + 0x12);
    while (*psVar3 != param_2) {
      iVar1 = iVar1 + 1;
      psVar3 = psVar3 + 1;
      if (*(short *)(param_1 + 0x10) <= iVar1) {
        return;
      }
    }
    if (iVar1 < *(short *)(param_1 + 0x10) + -1) {
      puVar2 = (undefined2 *)(param_1 + 0x12 + iVar1 * 2);
      do {
        *puVar2 = puVar2[1];
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(short *)(param_1 + 0x10) + -1);
    }
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
    *(undefined2 *)(param_1 + 0x12 + *(short *)(param_1 + 0x10) * 2) = 0;
  }
  return;
}

