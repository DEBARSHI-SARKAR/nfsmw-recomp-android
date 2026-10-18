/* speed.exe 0066bf20 FUN_0066bf20; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00407510 FUN_00407510
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066bf20(undefined4 param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_00454810(0xbd38d1ca,0);
  if (iVar4 == 0) {
    iVar4 = FUN_006269b0(0xc);
  }
  iVar4 = FUN_00407510(iVar4,0,0);
  iVar4 = *(int *)(iVar4 + 8);
  uVar5 = (uint)(param_2 == '\0');
  fVar1 = *(float *)(iVar4 + 0x30 + uVar5 * 4);
  fVar2 = *(float *)(iVar4 + 0x40 + uVar5 * 4);
  fVar3 = *(float *)(iVar4 + 0x28 + uVar5 * 4);
  FUN_0045a430();
  return (float10)fVar1 * (float10)_DAT_008a9388 +
         (float10)fVar3 * (float10)_DAT_00890dc4 * (float10)fVar2 * (float10)_DAT_00897188;
}

