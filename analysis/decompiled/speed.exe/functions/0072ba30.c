/* speed.exe 0072ba30 FUN_0072ba30; analysis pseudocode, not buildable source.
 * calls 00728850 FUN_00728850
 */

void __fastcall FUN_0072ba30(int param_1)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0xe)) {
    puVar4 = (ushort *)(param_1 + 0x14);
    do {
      psVar1 = (short *)(DAT_009a3a64 + (uint)*puVar4 * 6);
      pbVar2 = (byte *)(DAT_009a3a64 + 4 + (uint)*puVar4 * 6);
      *pbVar2 = *pbVar2 | 0x10;
      if ((*(int *)(&DAT_009a3bb0 + *psVar1 * 4) != 0) &&
         (iVar3 = *(int *)(*(int *)(&DAT_009a3bb0 + *psVar1 * 4) + 4), iVar3 != 0)) {
        FUN_00728850(iVar3);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < *(short *)(param_1 + 0xe));
  }
  return;
}

