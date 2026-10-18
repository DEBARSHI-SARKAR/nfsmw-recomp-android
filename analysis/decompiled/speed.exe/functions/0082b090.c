/* speed.exe 0082b090 FUN_0082b090; analysis pseudocode, not buildable source.
 * calls 0081bccb FUN_0081bccb
 * calls 0081cb91 FUN_0081cb91
 * calls 00863077 FUN_00863077
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081ccaa FUN_0081ccaa
 */

void __fastcall FUN_0082b090(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  int local_8;
  
  puVar4 = (undefined4 *)(param_1 + 0x28);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  if (-1 < *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    FUN_0081bccb();
    FUN_0081ccaa(*(undefined4 *)(param_1 + 4),local_14);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x18) <= local_14[0]) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar2 = 0;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x108) + 8 + iVar2) = 0;
        iVar3 = *(int *)(*(int *)(param_1 + 0x108) + 4 + iVar2);
        if (-1 < iVar3) {
          FUN_0081cb91(iVar3,&local_24);
          if (local_24 == 0) {
LAB_0082b18d:
            *(int *)(*(int *)(param_1 + 0x108) + 8 + iVar2) = local_1c;
            if ((local_20 == 0) && (local_1c == 0)) {
              *(undefined4 *)(*(int *)(param_1 + 0x108) + iVar2 + 8) =
                   *(undefined4 *)(*(int *)(param_1 + 0x108) + iVar2);
            }
            iVar3 = *(int *)(*(int *)(param_1 + 0x108) + 8 + iVar2);
            *(int *)(param_1 + 0x4c) = iVar3;
            *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar3;
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_18;
            if (local_18 < local_1c) {
LAB_0082b1da:
              *(undefined4 *)(param_1 + 0x3c) = 0;
            }
          }
          else {
            if (local_24 == 1) {
              *(undefined4 *)(*(int *)(param_1 + 0x108) + 8 + iVar2) =
                   *(undefined4 *)(*(int *)(param_1 + 0x108) + iVar2);
              *(int *)(param_1 + 0x5c) =
                   *(int *)(param_1 + 0x5c) + *(int *)(*(int *)(param_1 + 0x108) + iVar2);
              *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_18;
              goto LAB_0082b1da;
            }
            if (local_24 == 2) goto LAB_0082b18d;
            *(undefined4 *)(*(int *)(param_1 + 0x108) + 4 + iVar2) = 0xffffffff;
            *(undefined4 *)(*(int *)(param_1 + 0x108) + 0xc + iVar2) = 0xffffffff;
          }
          iVar3 = *(int *)(param_1 + 0x108) + iVar2;
          iVar5 = *(int *)(iVar3 + 0xc);
          if (-1 < iVar5) {
            *(int *)(param_1 + 0x28) = iVar5;
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x10);
          }
        }
        local_8 = local_8 + 1;
        iVar2 = iVar2 + 0x14;
      } while (local_8 < *(int *)(param_1 + 0x18));
    }
    puVar4 = *(undefined4 **)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x34) = puVar4[3];
    *(undefined4 *)(param_1 + 0x38) = puVar4[1];
    *(undefined4 *)(param_1 + 0x40) = *puVar4;
    uVar1 = FUN_00863077(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((0 < DAT_009c2978) && (0 < *(int *)(param_1 + 0x5c))) {
      iVar2 = *(int *)(DAT_009c2964 + 0x10) * DAT_009c2978;
      iVar5 = *(int *)(param_1 + 0x5c) - iVar2;
      *(int *)(param_1 + 0x5c) = iVar5;
      iVar3 = *(int *)(param_1 + 0x58) - iVar2;
      *(int *)(param_1 + 0x58) = iVar3;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - iVar2;
      if (iVar5 < 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      if (*(int *)(param_1 + 0x4c) < 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
    }
    FUN_0081bcd9();
  }
  return;
}

