/* speed.exe 008283ff FUN_008283ff; analysis pseudocode, not buildable source.
 * calls 00827acf FUN_00827acf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008283ff(byte *param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  param_2[2] = 8;
  *param_2 = param_1 + 1;
  param_2[1] = (uint)*param_1;
  if (param_3 != 0) {
    uVar6 = FUN_00827acf();
    *(int *)((int)((ulonglong)uVar6 >> 0x20) + 0xc) = (int)uVar6;
    uVar6 = FUN_00827acf();
    *(int *)((int)((ulonglong)uVar6 >> 0x20) + 0x10) = 0x20 - (int)uVar6;
    uVar6 = FUN_00827acf();
    iVar2 = (int)uVar6 + 1;
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + _DAT_00891214;
    }
    *(float *)((int)((ulonglong)uVar6 >> 0x20) + 0x14) = fVar1 * _DAT_00890dbc;
    uVar6 = FUN_00827acf();
    iVar2 = (int)((ulonglong)uVar6 >> 0x20);
    fVar1 = (float)(int)uVar6;
    if ((int)uVar6 < 0) {
      fVar1 = fVar1 + _DAT_00891214;
    }
    pfVar3 = (float *)(iVar2 + 0x18);
    iVar5 = 0x3f;
    fVar1 = fVar1 * _DAT_00890d60 + _DAT_008c5de0;
    do {
      *pfVar3 = fVar1 * pfVar3[-1];
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar4 = (undefined4 *)(iVar2 + 0x144);
    iVar5 = 0xc;
    do {
      puVar4[-0xc] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar4 = (undefined4 *)(iVar2 + 0x174);
    for (iVar5 = 0x144; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

