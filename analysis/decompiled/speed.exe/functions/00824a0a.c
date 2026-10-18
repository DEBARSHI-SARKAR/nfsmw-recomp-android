/* speed.exe 00824a0a FUN_00824a0a; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 008249c2 FUN_008249c2
 * calls 0081e9e7 FUN_0081e9e7
 * calls 008263c7 FUN_008263c7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00824a0a(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *param_2;
  iVar4 = param_2[2];
  iVar1 = param_2[1];
  FUN_008249c2(param_1);
  fVar2 = (float)(iVar3 >> 1) * _DAT_00890bf0;
  *(float *)(param_1 + 0x2c) = fVar2;
  *(float *)(param_1 + 0x30) = -fVar2;
  iVar3 = FUN_008263c7(iVar1 >> 8,iVar4 >> 8);
  *(int *)(param_1 + 0x28) = iVar3;
  iVar4 = FUN_0081e9e7(iVar3 * 4 + 0x10);
  *(int *)(param_1 + 0x20) = iVar4;
  uVar5 = iVar4 + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x1c) = uVar5;
  FUN_00822050(uVar5,iVar3 * 4);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

