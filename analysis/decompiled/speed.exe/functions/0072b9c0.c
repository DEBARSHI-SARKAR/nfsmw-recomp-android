/* speed.exe 0072b9c0 FUN_0072b9c0; analysis pseudocode, not buildable source.
 * calls 00728850 FUN_00728850
 */

void __thiscall FUN_0072b9c0(int param_1,char param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  
  uVar5 = 0;
  if (param_2 != '\0') {
    uVar5 = 0x400;
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0xe)) {
    puVar4 = (ushort *)(param_1 + 0x14);
    do {
      psVar1 = (short *)(DAT_009a3a64 + (uint)*puVar4 * 6);
      psVar1[2] = psVar1[2] & 0xfbefU | uVar5;
      if ((*(int *)(&DAT_009a3bb0 + *psVar1 * 4) != 0) &&
         (iVar2 = *(int *)(*(int *)(&DAT_009a3bb0 + *psVar1 * 4) + 4), iVar2 != 0)) {
        FUN_00728850(iVar2);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(short *)(param_1 + 0xe));
  }
  return;
}

