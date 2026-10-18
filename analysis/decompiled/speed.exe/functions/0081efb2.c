/* speed.exe 0081efb2 FUN_0081efb2; analysis pseudocode, not buildable source.
 * calls 00823505 FUN_00823505
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081efb2(int param_1)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  iVar5 = param_1 * 0x90 + DAT_009c21f4;
  uVar3 = (uint)DAT_009c2046;
  fVar2 = (float)*(ushort *)(iVar5 + 0x20) * _DAT_008910f8;
  uVar1 = *(ushort *)(iVar5 + 0x8e);
  iVar4 = 0;
  if (*(char *)(iVar5 + 0x23) != '\0') {
    psVar6 = (short *)(iVar5 + 4);
    do {
      FUN_00823505((int)*psVar6,(int)ROUND((fVar2 / (float)uVar3) * (float)uVar1));
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(iVar5 + 0x23));
  }
  return 0;
}

