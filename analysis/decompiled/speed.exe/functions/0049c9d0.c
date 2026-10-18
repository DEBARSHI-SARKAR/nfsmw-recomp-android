/* speed.exe 0049c9d0 FUN_0049c9d0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0049c9d0(int param_1,float param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = (uint)*(ushort *)(param_1 + 4);
  uVar6 = uVar4 + 1 & 0xfffffffe;
  iVar5 = 0;
  pfVar1 = (float *)(param_1 + (uVar6 + 4 + uVar4 * param_3 * 2) * 2);
  if (*(short *)(param_1 + 4) != 0) {
    pfVar3 = pfVar1;
    do {
      iVar2 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *(float *)(param_5 + (uint)*(ushort *)(param_1 + 8 + iVar2) * 4) =
           (*(float *)(((param_1 + (uVar6 + 4 + uVar4 * param_4 * 2) * 2) - (int)pfVar1) +
                      (int)pfVar3) - *pfVar3) * param_2 + *pfVar3;
      pfVar3 = pfVar3 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  return;
}

