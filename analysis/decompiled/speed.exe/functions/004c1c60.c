/* speed.exe 004c1c60 FUN_004c1c60; analysis pseudocode, not buildable source.
 * calls 004aeaa0 FUN_004aeaa0
 * calls 004e0800 FUN_004e0800
 * calls 004b2510 FUN_004b2510
 * calls 004b24f0 FUN_004b24f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1c60(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_008f86f8 != 0) && (DAT_008f86fc != 0)) {
    FUN_004aeaa0(0x40000050);
    FUN_004e0800();
    if (DAT_008ee5bc != '\0') {
      if (((DAT_00911fa8 != 0) && (DAT_008f86f8 != 0)) && ((DAT_00911fe8 & 0x40) != 0)) {
        _DAT_00911fec = DAT_00911fe8;
        DAT_00911fe8 = DAT_00911fe8 & 0xffffffbf;
        uVar3 = 0;
        DAT_00911ff4 = DAT_00911ff0;
        iVar2 = 0;
        do {
          if ((DAT_00911fe8 & 1 << ((byte)iVar2 & 0x1f)) != 0) {
            uVar3 = uVar3 | (&DAT_008ee570)[iVar2];
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x12);
        iVar2 = 0;
        DAT_00911ff0 = uVar3;
        do {
          uVar3 = 1 << ((byte)iVar2 & 0x1f);
          if (((uVar3 & (DAT_00911ff0 ^ DAT_00911ff4)) != 0) &&
             (iVar1 = *(int *)(DAT_00911fa8 + 0x80), iVar1 != 0)) {
            if ((DAT_00911ff0 & uVar3) == 0) {
              if (iVar2 == 0) {
                iVar1 = *(int *)(iVar1 + 0x18);
              }
              else if (iVar2 == 1) {
                iVar1 = *(int *)(iVar1 + 0x14);
              }
              else {
                if (iVar2 != 2) goto LAB_004c1d87;
                iVar1 = *(int *)(iVar1 + 0x1c);
              }
              if (iVar1 != 0) {
                FUN_004b2510();
              }
            }
            else {
              if (iVar2 == 0) {
                iVar1 = *(int *)(iVar1 + 0x18);
              }
              else if (iVar2 == 1) {
                iVar1 = *(int *)(iVar1 + 0x14);
              }
              else {
                if (iVar2 != 2) goto LAB_004c1d87;
                iVar1 = *(int *)(iVar1 + 0x1c);
              }
              if (iVar1 != 0) {
                FUN_004b24f0();
              }
            }
          }
LAB_004c1d87:
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xd);
      }
      if (DAT_008ee5bc != '\0') {
        if (((DAT_00911fa8 != 0) && (DAT_008f86f8 != 0)) && ((char)DAT_00911fe8 < '\0')) {
          _DAT_00911fec = DAT_00911fe8;
          DAT_00911fe8 = DAT_00911fe8 & 0xffffff7f;
          uVar3 = 0;
          DAT_00911ff4 = DAT_00911ff0;
          iVar2 = 0;
          do {
            if ((DAT_00911fe8 & 1 << ((byte)iVar2 & 0x1f)) != 0) {
              uVar3 = uVar3 | (&DAT_008ee570)[iVar2];
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x12);
          iVar2 = 0;
          DAT_00911ff0 = uVar3;
          do {
            uVar3 = 1 << ((byte)iVar2 & 0x1f);
            if (((uVar3 & (DAT_00911ff0 ^ DAT_00911ff4)) != 0) &&
               (iVar1 = *(int *)(DAT_00911fa8 + 0x80), iVar1 != 0)) {
              if ((DAT_00911ff0 & uVar3) == 0) {
                if (iVar2 == 0) {
                  iVar1 = *(int *)(iVar1 + 0x18);
                }
                else if (iVar2 == 1) {
                  iVar1 = *(int *)(iVar1 + 0x14);
                }
                else {
                  if (iVar2 != 2) goto LAB_004c1e97;
                  iVar1 = *(int *)(iVar1 + 0x1c);
                }
                if (iVar1 != 0) {
                  FUN_004b2510();
                }
              }
              else {
                if (iVar2 == 0) {
                  iVar1 = *(int *)(iVar1 + 0x18);
                }
                else if (iVar2 == 1) {
                  iVar1 = *(int *)(iVar1 + 0x14);
                }
                else {
                  if (iVar2 != 2) goto LAB_004c1e97;
                  iVar1 = *(int *)(iVar1 + 0x1c);
                }
                if (iVar1 != 0) {
                  FUN_004b24f0();
                }
              }
            }
LAB_004c1e97:
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0xd);
        }
        if (DAT_008ee5bc != '\0') {
          if (((DAT_00911fa8 != 0) && (DAT_008f86f8 != 0)) && ((DAT_00911fe8 & 0x200) != 0)) {
            DAT_00911ff4 = DAT_00911ff0;
            iVar2 = 0;
            DAT_00911ff0 = 0;
            do {
              if ((DAT_00911fe8 & 0xfffffdff & 1 << ((byte)iVar2 & 0x1f)) != 0) {
                DAT_00911ff0 = DAT_00911ff0 | (&DAT_008ee570)[iVar2];
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < 0x12);
            iVar2 = 0;
            uVar3 = DAT_00911fe8 & 0xfffffdff;
            _DAT_00911fec = DAT_00911fe8;
            do {
              DAT_00911fe8 = uVar3;
              uVar3 = 1 << ((byte)iVar2 & 0x1f);
              if (((uVar3 & (DAT_00911ff0 ^ DAT_00911ff4)) != 0) &&
                 (iVar1 = *(int *)(DAT_00911fa8 + 0x80), iVar1 != 0)) {
                if ((DAT_00911ff0 & uVar3) == 0) {
                  if (iVar2 == 0) {
                    iVar1 = *(int *)(iVar1 + 0x18);
                  }
                  else if (iVar2 == 1) {
                    iVar1 = *(int *)(iVar1 + 0x14);
                  }
                  else {
                    if (iVar2 != 2) goto LAB_004c1fa7;
                    iVar1 = *(int *)(iVar1 + 0x1c);
                  }
                  if (iVar1 != 0) {
                    FUN_004b2510();
                  }
                }
                else {
                  if (iVar2 == 0) {
                    iVar1 = *(int *)(iVar1 + 0x18);
                  }
                  else if (iVar2 == 1) {
                    iVar1 = *(int *)(iVar1 + 0x14);
                  }
                  else {
                    if (iVar2 != 2) goto LAB_004c1fa7;
                    iVar1 = *(int *)(iVar1 + 0x1c);
                  }
                  if (iVar1 != 0) {
                    FUN_004b24f0();
                  }
                }
              }
LAB_004c1fa7:
              iVar2 = iVar2 + 1;
              uVar3 = DAT_00911fe8;
            } while (iVar2 < 0xd);
          }
          if (((DAT_008ee5bc != '\0') && (DAT_00911fa8 != 0)) &&
             ((DAT_008f86f8 != 0 && ((DAT_00911fe8 & 0x400) != 0)))) {
            DAT_00911ff4 = DAT_00911ff0;
            iVar2 = 0;
            DAT_00911ff0 = 0;
            do {
              if ((DAT_00911fe8 & 0xfffffbff & 1 << ((byte)iVar2 & 0x1f)) != 0) {
                DAT_00911ff0 = DAT_00911ff0 | (&DAT_008ee570)[iVar2];
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < 0x12);
            iVar2 = 0;
            uVar3 = DAT_00911fe8 & 0xfffffbff;
            _DAT_00911fec = DAT_00911fe8;
            do {
              DAT_00911fe8 = uVar3;
              uVar3 = 1 << ((byte)iVar2 & 0x1f);
              if (((uVar3 & (DAT_00911ff0 ^ DAT_00911ff4)) != 0) &&
                 (iVar1 = *(int *)(DAT_00911fa8 + 0x80), iVar1 != 0)) {
                if ((DAT_00911ff0 & uVar3) == 0) {
                  if (iVar2 == 0) {
                    iVar1 = *(int *)(iVar1 + 0x18);
                  }
                  else if (iVar2 == 1) {
                    iVar1 = *(int *)(iVar1 + 0x14);
                  }
                  else {
                    if (iVar2 != 2) goto LAB_004c20b7;
                    iVar1 = *(int *)(iVar1 + 0x1c);
                  }
                  if (iVar1 != 0) {
                    FUN_004b2510();
                  }
                }
                else {
                  if (iVar2 == 0) {
                    iVar1 = *(int *)(iVar1 + 0x18);
                  }
                  else if (iVar2 == 1) {
                    iVar1 = *(int *)(iVar1 + 0x14);
                  }
                  else {
                    if (iVar2 != 2) goto LAB_004c20b7;
                    iVar1 = *(int *)(iVar1 + 0x1c);
                  }
                  if (iVar1 != 0) {
                    FUN_004b24f0();
                  }
                }
              }
LAB_004c20b7:
              iVar2 = iVar2 + 1;
              uVar3 = DAT_00911fe8;
            } while (iVar2 < 0xd);
          }
        }
      }
    }
  }
  return;
}

