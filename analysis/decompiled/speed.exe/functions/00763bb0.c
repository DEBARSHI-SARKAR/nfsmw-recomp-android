/* speed.exe 00763bb0 FUN_00763bb0; analysis pseudocode, not buildable source.
 * calls 00762e70 FUN_00762e70
 * calls 00762d00 FUN_00762d00
 * calls 00762de0 FUN_00762de0
 * calls 00762640 FUN_00762640
 * calls 00762530 FUN_00762530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00763bb0(uint *param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = param_5;
  if ((*param_1 & (uint)*(ushort *)(param_4 + 0xe)) != 0) {
    return (uint)(byte)(*(ushort *)(param_4 + 0xe) >> 8) << 8;
  }
  uVar8 = *(ushort *)(param_4 + 6) - 2;
  uVar5 = FUN_00762530(0,param_3,param_5);
  if ((*(byte *)(param_4 + 0xe) & 2) == 0) {
    bVar7 = (bool)(*(byte *)(param_4 + 0xe) & 1);
    FUN_00762530(0,param_3,param_5);
    iVar9 = 0;
    uVar5 = uVar8;
    if (0 < (int)uVar8) {
      do {
        if (bVar7 == false) {
          if ((*(byte *)(param_5 + 0x2d) & 8) == 0) {
            uVar6 = FUN_00762e70(param_2,param_5);
            goto LAB_00763cf7;
          }
        }
        else if ((*(byte *)(param_5 + 0x2d) & 8) == 0) {
          uVar6 = FUN_00762de0(param_2,param_5);
LAB_00763cf7:
          if (((char)uVar6 != '\0') &&
             (uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),*(byte *)(param_5 + 0x2d)),
             ((byte)*param_1 & *(byte *)(param_5 + 0x2d)) == 0)) goto LAB_00763c9f;
        }
        bVar7 = bVar7 == false;
        iVar9 = iVar9 + 1;
        if ((int)uVar8 <= iVar9) break;
        FUN_00762640(iVar9,param_3,param_5);
      } while( true );
    }
  }
  else {
    param_5 = 0;
    if (0 < (int)uVar8) {
      do {
        bVar1 = *(byte *)(iVar9 + 0x2d);
        if ((((bVar1 & 8) == 0) && (cVar4 = FUN_00762d00(param_2,iVar9), cVar4 != '\0')) &&
           (((byte)*param_1 & bVar1) == 0)) {
          fVar2 = *(float *)(iVar9 + 0x14);
          if (*(float *)(iVar9 + 4) < *(float *)(iVar9 + 0x14)) {
            fVar2 = *(float *)(iVar9 + 4);
          }
          if (*(float *)(iVar9 + 0x24) <= fVar2) {
            fVar2 = *(float *)(iVar9 + 0x24);
          }
          fVar3 = *(float *)(param_2 + 4) + _DAT_0089096c;
          uVar6 = CONCAT22((short)((uint)param_1 >> 0x10),
                           (ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                           (ushort)(fVar2 == fVar3) << 0xe);
          if (fVar2 < fVar3) {
LAB_00763c9f:
            return CONCAT31((int3)((uint)uVar6 >> 8),1);
          }
        }
        param_5 = param_5 + 1;
        uVar5 = param_5;
        if ((int)uVar8 <= (int)param_5) break;
        FUN_00762640(param_5,param_3,iVar9);
      } while( true );
    }
  }
  return uVar5 & 0xffffff00;
}

