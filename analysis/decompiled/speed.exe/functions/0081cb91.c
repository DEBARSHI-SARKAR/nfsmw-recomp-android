/* speed.exe 0081cb91 FUN_0081cb91; analysis pseudocode, not buildable source.
 * calls 0081c131 FUN_0081c131
 * calls 00821c48 FUN_00821c48
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081cb91(uint param_1,undefined4 *param_2)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (DAT_009c2188 == '\0') {
    uVar6 = 0xfffffff6;
  }
  else if ((int)param_1 < 0) {
    uVar6 = 0xfffffff8;
  }
  else {
    iVar4 = FUN_0081c131(param_1 & 0xff);
    if (iVar4 == 0) {
      uVar6 = 0xfffffff8;
    }
    else {
      iVar5 = FUN_00821c48(param_1);
      if (iVar5 == 0) {
        *param_2 = 3;
      }
      else if (*(char *)(iVar5 + 0x24) == '\0') {
        *param_2 = 0;
      }
      else {
        if (*(int *)(iVar4 + 0x120) == iVar5) {
          *param_2 = 2;
          uVar1 = *(ushort *)(iVar4 + 0x14);
        }
        else {
          *param_2 = 1;
          uVar1 = *(ushort *)(iVar4 + 0x18);
        }
        fVar2 = _DAT_00894200 / (float)uVar1;
        fVar3 = (float)*(int *)(iVar5 + 0x14);
        if (*(int *)(iVar5 + 0x14) < 0) {
          fVar3 = fVar3 + _DAT_00891214;
        }
        param_2[1] = (int)ROUND(fVar3 * fVar2);
        iVar4 = *(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14);
        fVar3 = (float)iVar4;
        if (iVar4 < 0) {
          fVar3 = fVar3 + _DAT_00891214;
        }
        param_2[2] = (int)ROUND(fVar3 * fVar2);
        fVar3 = (float)*(int *)(iVar5 + 0x1c);
        if (*(int *)(iVar5 + 0x1c) < 0) {
          fVar3 = fVar3 + _DAT_00891214;
        }
        param_2[3] = (int)ROUND(fVar3 * fVar2);
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}

