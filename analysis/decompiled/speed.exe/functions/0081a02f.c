/* speed.exe 0081a02f FUN_0081a02f; analysis pseudocode, not buildable source.
 * calls 0081d7a4 FUN_0081d7a4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081a02f(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  iVar5 = param_1 * 0x90 + DAT_009c21f4;
  iVar4 = 0;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  fVar2 = (float)param_2 * _DAT_00896ab8;
  *(float *)(iVar5 + 0x38) = fVar2;
  *(float *)(iVar5 + 0x48) = fVar2 * _DAT_0090bd14;
  if (*(char *)(iVar5 + 0x23) != '\0') {
    psVar6 = (short *)(iVar5 + 4);
    do {
      sVar1 = *psVar6;
      iVar3 = sVar1 * 0x90 + DAT_009c21f4;
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar5 + 0x48);
      FUN_0081d7a4((int)sVar1);
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(iVar5 + 0x23));
  }
  return;
}

