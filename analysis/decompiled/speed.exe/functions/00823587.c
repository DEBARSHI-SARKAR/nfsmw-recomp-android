/* speed.exe 00823587 FUN_00823587; analysis pseudocode, not buildable source.
 * calls 00822ecf FUN_00822ecf
 */

void FUN_00823587(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  iVar3 = *(short *)(param_1 + 4) * 0x90 + DAT_009c21f4;
  iVar2 = 0;
  fVar1 = *(float *)(iVar3 + 0x48);
  if (*(char *)(iVar3 + 0x23) != '\0') {
    psVar4 = (short *)(iVar3 + 4);
    do {
      FUN_00822ecf((int)*psVar4,param_3,param_2 * fVar1);
      iVar2 = iVar2 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(iVar3 + 0x23));
  }
  return;
}

