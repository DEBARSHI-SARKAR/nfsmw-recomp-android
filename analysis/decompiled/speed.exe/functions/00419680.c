/* speed.exe 00419680 FUN_00419680; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00403680 FUN_00403680
 * calls 004035e0 FUN_004035e0
 * calls 004036e0 FUN_004036e0
 * calls 00418ee0 FUN_00418ee0
 * calls 00403660 FUN_00403660
 * calls 00403600 FUN_00403600
 * calls 00627320 FUN_00627320
 * calls 006ed200 FUN_006ed200
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00419680(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (((*(char *)(param_1 + 0xe8) == '\0') && (*(char *)(param_1 + 0x114) != '\0')) &&
     (*(char *)(param_1 + 0xe9) == '\0')) {
    if (*(int *)(param_1 + 0x20c) != 0) {
      return param_1 + 0x194;
    }
    if (*(float *)(param_1 + 0x210) < _DAT_00890968) {
      *(undefined4 *)(param_1 + 0x210) = 0x41200000;
      FUN_00418ee0();
      pfVar1 = (float *)FUN_004036e0();
      if (*pfVar1 <= *(float *)(param_1 + 0xb4)) {
        FUN_006ed200();
        iVar2 = FUN_00627320();
        uVar4 = iVar2 * 100 >> 0x10;
        if (*(char *)(param_1 + 0x214) == '\0') {
          iVar3 = 0;
          iVar2 = FUN_00403680();
          if (0 < iVar2) {
            do {
              iVar2 = FUN_00403660(iVar3);
              if ((*(float *)(iVar2 + 0x10) < *(float *)(param_1 + 0xb4)) &&
                 (*(undefined1 *)(param_1 + 0x214) = 1, uVar4 < *(uint *)(iVar2 + 0xc))) {
                *(int *)(param_1 + 0x198) = iVar2;
                *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(iVar2 + 8);
                *(undefined4 *)(param_1 + 0x20c) = 1;
                break;
              }
              iVar3 = iVar3 + 1;
              iVar2 = FUN_00403680();
            } while (iVar3 < iVar2);
          }
        }
        if (*(int *)(param_1 + 0x20c) != 1) {
          FUN_006ed200();
          iVar2 = FUN_00627320();
          uVar4 = iVar2 * 100 >> 0x10;
          if (*(int *)(param_1 + 0x84) == 0) {
            iVar3 = 0;
            iVar2 = FUN_00403600();
            if (0 < iVar2) {
              do {
                iVar2 = FUN_004035e0(iVar3);
                uVar4 = uVar4 - *(int *)(iVar2 + 4);
                if ((int)uVar4 < 0) {
                  *(int *)(param_1 + 0x194) = iVar2;
                  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(iVar2 + 8);
                  *(undefined4 *)(param_1 + 0x20c) = 1;
                  *(undefined4 *)(param_1 + 200) = 0x41700000;
                  break;
                }
                iVar3 = iVar3 + 1;
                iVar2 = FUN_00403600();
              } while (iVar3 < iVar2);
            }
          }
          if (-1 < (int)uVar4) {
            iVar3 = 0;
            iVar2 = FUN_00403680();
            if (0 < iVar2) {
              do {
                iVar2 = FUN_00454810(0xebd53935,iVar3);
                if (iVar2 == 0) {
                  iVar2 = FUN_006269b0(0x14);
                }
                uVar4 = uVar4 - *(int *)(iVar2 + 4);
                if ((int)uVar4 < 0) {
                  *(int *)(param_1 + 0x198) = iVar2;
                  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(iVar2 + 8);
                  *(undefined4 *)(param_1 + 0x20c) = 1;
                  break;
                }
                iVar3 = iVar3 + 1;
                iVar2 = FUN_00403680();
              } while (iVar3 < iVar2);
            }
          }
        }
        if (((*(int *)(param_1 + 0x198) != 0) && (*(int *)(param_1 + 0x20c) == 1)) &&
           (*(int *)(param_1 + 0x164) != 0)) {
          *(undefined4 *)(param_1 + 0x20c) = 0;
          *(undefined4 *)(param_1 + 0x198) = 0;
        }
        if ((int)uVar4 < 0) {
          return param_1 + 0x194;
        }
      }
      return 0;
    }
  }
  return 0;
}

