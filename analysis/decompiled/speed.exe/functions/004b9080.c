/* speed.exe 004b9080 FUN_004b9080; analysis pseudocode, not buildable source.
 * calls 004b2510 FUN_004b2510
 * calls 004b24f0 FUN_004b24f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9080(char param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  if ((((DAT_008ee5bc != '\0') && (DAT_00911fa8 != 0)) && (DAT_008f86f8 != 0)) &&
     (((*(char *)(DAT_00911fa8 + 0x28) == '\0' || (param_1 != '\0')) ||
      ((param_2 == 0xe || ((5 < param_2 || (param_2 < 0xb)))))))) {
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    if ((((uVar2 & DAT_00911fe8) == 0) || (param_1 == '\0')) &&
       (((uVar2 & DAT_00911fe8) != 0 || (param_1 != '\0')))) {
      _DAT_00911fec = DAT_00911fe8;
      DAT_00911ff4 = DAT_00911ff0;
      if (param_1 == '\0') {
        DAT_00911fe8 = DAT_00911fe8 & ~uVar2;
      }
      else {
        DAT_00911fe8 = DAT_00911fe8 | uVar2;
      }
      uVar2 = 0;
      puVar5 = &DAT_008ee574;
      iVar6 = 2;
      do {
        bVar1 = (byte)iVar6;
        if ((DAT_00911fe8 & 1 << (bVar1 - 2 & 0x1f)) != 0) {
          uVar2 = uVar2 | puVar5[-1];
        }
        if ((DAT_00911fe8 & 1 << (bVar1 - 1 & 0x1f)) != 0) {
          uVar2 = uVar2 | *puVar5;
        }
        if ((DAT_00911fe8 & 1 << (bVar1 & 0x1f)) != 0) {
          uVar2 = uVar2 | puVar5[1];
        }
        if ((DAT_00911fe8 & 1 << (bVar1 + 1 & 0x1f)) != 0) {
          uVar2 = uVar2 | puVar5[2];
        }
        if ((DAT_00911fe8 & 1 << (bVar1 + 2 & 0x1f)) != 0) {
          uVar2 = uVar2 | puVar5[3];
        }
        if ((DAT_00911fe8 & 1 << (bVar1 + 3 & 0x1f)) != 0) {
          uVar2 = uVar2 | puVar5[4];
        }
        iVar3 = iVar6 + 4;
        puVar5 = puVar5 + 6;
        iVar6 = iVar6 + 6;
      } while (iVar3 < 0x12);
      iVar6 = 0;
      DAT_00911ff0 = uVar2;
      do {
        uVar4 = 1 << ((byte)iVar6 & 0x1f);
        if (((uVar4 & (uVar2 ^ DAT_00911ff4)) != 0) &&
           (iVar3 = *(int *)(DAT_00911fa8 + 0x80), iVar3 != 0)) {
          if ((uVar2 & uVar4) == 0) {
            if (iVar6 == 0) {
              iVar3 = *(int *)(iVar3 + 0x18);
            }
            else if (iVar6 == 1) {
              iVar3 = *(int *)(iVar3 + 0x14);
            }
            else {
              if (iVar6 != 2) goto LAB_004b9227;
              iVar3 = *(int *)(iVar3 + 0x1c);
            }
            if (iVar3 != 0) {
              FUN_004b2510();
              uVar2 = DAT_00911ff0;
            }
          }
          else {
            if (iVar6 == 0) {
              iVar3 = *(int *)(iVar3 + 0x18);
            }
            else if (iVar6 == 1) {
              iVar3 = *(int *)(iVar3 + 0x14);
            }
            else {
              if (iVar6 != 2) goto LAB_004b9227;
              iVar3 = *(int *)(iVar3 + 0x1c);
            }
            if (iVar3 != 0) {
              FUN_004b24f0();
              uVar2 = DAT_00911ff0;
            }
          }
        }
LAB_004b9227:
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0xd);
    }
  }
  return;
}

