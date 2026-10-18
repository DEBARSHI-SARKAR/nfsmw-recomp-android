/* speed.exe 00824f74 FUN_00824f74; analysis pseudocode, not buildable source.
 * calls 00826749 FUN_00826749
 */

undefined4 FUN_00824f74(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  iVar2 = param_1 * 0x90 + DAT_009c21f4;
  iVar1 = 0;
  if (*(char *)(iVar2 + 0x23) != '\0') {
    psVar3 = (short *)(iVar2 + 4);
    do {
      FUN_00826749((int)*psVar3,iVar1,param_2);
      iVar1 = iVar1 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(iVar2 + 0x23));
  }
  return 0;
}

