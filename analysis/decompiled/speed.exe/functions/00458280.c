/* speed.exe 00458280 FUN_00458280; analysis pseudocode, not buildable source.
 * calls 004542c0 FUN_004542c0
 * calls 00626c50 FUN_00626c50
 * calls 00454030 FUN_00454030
 * calls 00454360 FUN_00454360
 * calls 00456f40 FUN_00456f40
 */

void __fastcall FUN_00458280(byte *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *local_20;
  uint local_1c;
  int iStack_18;
  int local_14 [5];
  
  FUN_00454360(param_1);
  for (; local_14[0] != 0; local_14[0] = FUN_004542c0(local_14[0],local_14 + 2)) {
    local_20 = param_1;
    iVar3 = FUN_00454030(local_14[0],&local_20);
    if ((local_20 == param_1) &&
       (piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
                                   (-(uint)((uint)*(ushort *)(iVar3 + 8) <
                                           *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) &
                                   (uint)*(ushort *)(iVar3 + 8)) * 4) + 0x10), piVar2 != (int *)0x0)
       ) {
      bVar1 = *(byte *)(iVar3 + 0xb);
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 0x20) == 0) {
          iVar3 = *(int *)(iVar3 + 4);
          if ((bVar1 & 0x10) != 0) {
            iVar3 = iVar3 + *(int *)(param_1 + 0x18);
          }
          (**(code **)(*piVar2 + 8))(iVar3);
        }
        else {
          (**(code **)(*piVar2 + 8))(iVar3 + 4);
        }
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
        if ((bVar1 & 0x10) != 0) {
          iVar3 = iVar3 + *(int *)(param_1 + 0x18);
        }
        uVar7 = 0;
        if (*(short *)(iVar3 + 2) != 0) {
          iVar5 = 8;
          if (*(short *)(iVar3 + 2) == 0) {
            iVar4 = 0;
            goto LAB_0045834e;
          }
          do {
            if (*(ushort *)(iVar3 + 4) == 0) {
              iVar4 = *(int *)(((*(ushort *)(iVar3 + 6) & 0x8000) >> 0xc) + iVar5 + iVar3);
            }
            else {
              iVar4 = *(ushort *)(iVar3 + 4) * uVar7 + 8 +
                      ((*(ushort *)(iVar3 + 6) & 0x8000) >> 0xc) + iVar3;
            }
LAB_0045834e:
            (**(code **)(*piVar2 + 8))(iVar4);
            uVar7 = uVar7 + 1;
            iVar5 = iVar5 + 4;
          } while (uVar7 < *(ushort *)(iVar3 + 2));
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_1c = (uint)*(ushort *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0x2e);
    if (local_1c != 0) {
      pbVar6 = (byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0x30) + 0xe);
      do {
        iVar3 = DAT_0090dcbc;
        if ((*pbVar6 & 8) != 0) {
          local_14[0] = *(int *)(pbVar6 + -10);
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[3] = 0;
          local_20 = pbVar6;
          local_14[4] = FUN_00626c50(local_14[0]);
          iVar3 = *(int *)(iVar3 + 4);
          FUN_00456f40(&iStack_18,local_14);
          if (iStack_18 == *(int *)(iVar3 + 0x30)) {
            iVar3 = **(int **)(iVar3 + 0x20);
          }
          else {
            iVar3 = iStack_18 + 0xc;
          }
          piVar2 = *(int **)(iVar3 + 0x10);
          if (piVar2 != (int *)0x0) {
            iVar3 = (uint)*(ushort *)(pbVar6 + -6) + *(int *)(param_1 + 0x18);
            if ((*pbVar6 & 1) == 0) {
              (**(code **)(*piVar2 + 8))(iVar3);
            }
            else {
              uVar7 = 0;
              if (*(short *)(iVar3 + 2) != 0) {
                iVar5 = 8;
                if (*(short *)(iVar3 + 2) == 0) {
                  iVar4 = 0;
                  goto LAB_0045849e;
                }
                do {
                  if (*(ushort *)(iVar3 + 4) == 0) {
                    iVar4 = *(int *)(((*(ushort *)(iVar3 + 6) & 0x8000) >> 0xc) + iVar5 + iVar3);
                  }
                  else {
                    iVar4 = *(ushort *)(iVar3 + 4) * uVar7 + 8 +
                            ((*(ushort *)(iVar3 + 6) & 0x8000) >> 0xc) + iVar3;
                  }
LAB_0045849e:
                  (**(code **)(*piVar2 + 8))(iVar4);
                  uVar7 = uVar7 + 1;
                  iVar5 = iVar5 + 4;
                  pbVar6 = local_20;
                } while (uVar7 < *(ushort *)(iVar3 + 2));
              }
            }
          }
        }
        pbVar6 = pbVar6 + 0x10;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
    }
  }
  return;
}

