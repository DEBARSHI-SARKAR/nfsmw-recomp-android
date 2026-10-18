/* speed.exe 004f4cd0 FUN_004f4cd0; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 004aecf0 FUN_004aecf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f4cd0(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  *(undefined4 *)(&DAT_008f2090 + *(int *)(param_1 + 0x150) * 0x18) = 0xffffffff;
  (&DAT_008f2080)[*(int *)(param_1 + 0x150) * 6] =
       (&DAT_008f2080)[*(int *)(param_1 + 0x150) * 6] & 0xfffffff;
  iVar2 = DAT_008f42c4;
  if (*(int *)(param_1 + 0x150) != -1) {
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x150);
      if (((&DAT_008f2080)[iVar6 * 6] == 0) || (iVar6 == -1)) break;
      iVar7 = *(int *)(DAT_0091cf90 + 0x10);
      if ((*(int *)(&DAT_008f2084 + iVar6 * 0x18) == 0) && ((&DAT_008f2088)[iVar6 * 6] != 0)) {
        *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) =
             (&DAT_008f2080)[*(int *)(param_1 + 0x150) * 6] & 0xfffffff;
        *(undefined4 *)(&DAT_008f208c + *(int *)(param_1 + 0x150) * 0x18) = 0xffffffff;
      }
      iVar6 = *(int *)(param_1 + 0x150) * 0x18;
      if (*(int *)(&DAT_008f2094 + iVar6) != 0) {
        iVar7 = 0;
        iVar6 = 0;
        if (0 < iVar2) {
          do {
            if ((*(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) &
                1 << ((byte)iVar6 & 0x1f)) != 0) {
              iVar7 = iVar7 + 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
        _DAT_00911fe0 = FUN_0045ce40();
        iVar2 = FUN_004aecf0(iVar7);
        iVar7 = 0;
        iVar6 = 0;
        if (DAT_008f42c4 < 1) {
          return;
        }
        do {
          if ((*(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) &
              1 << ((byte)iVar6 & 0x1f)) != 0) {
            if (iVar2 == iVar7) {
              *(int *)(&DAT_008f2090 + *(int *)(param_1 + 0x150) * 0x18) = iVar6;
              uVar5 = 1 << ((byte)iVar6 & 0x1f);
              *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) =
                   *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) ^ uVar5;
              if (*(int *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) != 0) {
                return;
              }
              *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) =
                   (&DAT_008f2080)[*(int *)(param_1 + 0x150) * 6] & 0xfffffff;
              *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) =
                   *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) ^ uVar5;
              return;
            }
            iVar7 = iVar7 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < DAT_008f42c4);
        return;
      }
      iVar1 = *(int *)(&DAT_008f208c + iVar6) + 1;
      if (iVar1 < iVar2) {
        puVar4 = (undefined4 *)(iVar7 + 0x324 + iVar1 * 8);
        do {
          bVar3 = (byte)*puVar4;
          if ((*(uint *)(&DAT_008f2084 + iVar6) & 1 << (bVar3 & 0x1f)) != 0) {
            *(undefined4 *)(&DAT_008f2090 + *(int *)(param_1 + 0x150) * 0x18) = *puVar4;
            *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) =
                 *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) ^ 1 << (bVar3 & 0x1f);
            if (*(int *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) != 0) {
              return;
            }
            *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) =
                 (&DAT_008f2080)[*(int *)(param_1 + 0x150) * 6] & 0xfffffff;
            *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) =
                 *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) ^
                 1 << ((byte)iVar1 & 0x1f);
            return;
          }
          iVar1 = iVar1 + 1;
          puVar4 = puVar4 + 2;
          iVar2 = DAT_008f42c4;
        } while (iVar1 < DAT_008f42c4);
      }
      if ((&DAT_008f2088)[*(int *)(param_1 + 0x150) * 6] == 0) {
        return;
      }
      *(uint *)(&DAT_008f2084 + *(int *)(param_1 + 0x150) * 0x18) =
           (&DAT_008f2080)[*(int *)(param_1 + 0x150) * 6] & 0xfffffff;
      *(undefined4 *)(&DAT_008f208c + *(int *)(param_1 + 0x150) * 0x18) = 0xffffffff;
      *(undefined4 *)(&DAT_008f2090 + *(int *)(param_1 + 0x150) * 0x18) = 0xffffffff;
      (&DAT_008f2080)[*(int *)(param_1 + 0x150) * 6] =
           (&DAT_008f2080)[*(int *)(param_1 + 0x150) * 6] & 0xfffffff;
      if (*(int *)(param_1 + 0x150) == -1) {
        return;
      }
    }
  }
  return;
}

