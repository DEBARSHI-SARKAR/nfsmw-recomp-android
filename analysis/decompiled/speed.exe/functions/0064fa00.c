/* speed.exe 0064fa00 FUN_0064fa00; analysis pseudocode, not buildable source.
 * calls 0064eca0 FUN_0064eca0
 * calls 0064e940 FUN_0064e940
 */

void FUN_0064fa00(void)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *unaff_ESI;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  FUN_0064e940();
  uVar7 = 1;
  if (unaff_ESI[0xb70] != 0) {
    do {
      FUN_0064eca0();
      uVar7 = uVar7 + 1;
    } while (uVar7 <= (uint)unaff_ESI[0xb70]);
  }
  puVar8 = unaff_ESI;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  uVar7 = 0;
  uVar9 = 0xff;
  if (unaff_ESI[0xb71] != 0) {
    local_14 = unaff_ESI + 0xb7b;
    do {
      do {
        uVar9 = uVar9 + 1 & 0xff;
      } while (*local_14 != uVar9);
      *(undefined1 *)(uVar9 + (int)unaff_ESI) = 1;
      FUN_0064eca0();
      uVar7 = uVar7 + 1;
      local_14 = local_14 + 1;
    } while (uVar7 < (uint)unaff_ESI[0xb71]);
  }
  if (unaff_ESI[0xb75] == 0) {
    unaff_ESI[0xb73] = 32000;
  }
  local_14 = (uint *)unaff_ESI[0xb6c];
  local_24 = 0x100;
  if (local_14 < (byte *)unaff_ESI[0xb6d]) {
    do {
      local_20 = (uint)*(byte *)local_14;
      puVar4 = (uint *)((int)local_14 + 1);
      if (local_20 == local_24) {
        uVar7 = 0;
        pbVar3 = (byte *)((int)local_14 + 0x7531);
        if ((byte *)unaff_ESI[0xb6d] < (byte *)((int)local_14 + 0x7531)) {
          pbVar3 = (byte *)unaff_ESI[0xb6d];
        }
        do {
          if (pbVar3 <= puVar4) break;
          local_20 = (uint)*(byte *)puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          uVar7 = uVar7 + 1;
        } while (local_20 == local_24);
        uVar9 = unaff_ESI[0xb75];
        local_10 = 32000;
        local_1c = 32000;
        if (uVar9 != 0) {
          if ((unaff_ESI[unaff_ESI[0xb73] + 0x40] != 0) && (local_10 = 0x14, uVar7 < 0xfc)) {
            local_10 = unaff_ESI[unaff_ESI[0xb73] + 0x959] + 3 + unaff_ESI[uVar7 + 0x351] * 2;
          }
          if (1 < uVar9) {
            uVar9 = uVar9 - 1;
            local_1c = 0;
            uVar5 = uVar7;
            if (uVar9 != 0) {
              piVar6 = unaff_ESI + unaff_ESI[0xb73] + uVar9 + 0x959;
              local_18 = uVar7;
              do {
                if (piVar6[-0x919] != 0) {
                  local_1c = local_1c + *piVar6 * (uVar5 / uVar9);
                  uVar5 = local_18 - (uVar5 / uVar9) * uVar9;
                  local_18 = uVar5;
                }
                uVar9 = uVar9 - 1;
                piVar6 = piVar6 + -1;
              } while (uVar9 != 0);
            }
            if (uVar5 != 0) {
              local_1c = 32000;
            }
          }
        }
        if ((local_10 < unaff_ESI[local_24 + 0x959] * uVar7) ||
           (local_1c < unaff_ESI[local_24 + 0x959] * uVar7)) {
          if (local_10 < local_1c) {
            FUN_0064e940();
            FUN_0064eca0();
          }
          else {
            uVar9 = unaff_ESI[0xb75];
            while (uVar9 = uVar9 - 1, uVar9 != 0) {
              if (unaff_ESI[unaff_ESI[0xb73] + uVar9 + 0x40] != 0) {
                uVar5 = uVar7 / uVar9;
                uVar7 = uVar7 - uVar5 * uVar9;
                for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                  if (unaff_ESI[0xb73] + uVar9 == unaff_ESI[0xb73]) {
                    FUN_0064e940();
                    FUN_0064e940();
                    FUN_0064e940();
                    FUN_0064e940();
                  }
                  else {
                    FUN_0064e940();
                  }
                }
              }
            }
          }
        }
        else {
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            if (local_24 == unaff_ESI[0xb73]) {
              FUN_0064e940();
              FUN_0064e940();
              FUN_0064e940();
              FUN_0064e940();
            }
            else {
              FUN_0064e940();
            }
          }
        }
      }
      local_14 = puVar4;
      bVar1 = false;
      if (((unaff_ESI[0xb76] != 0) && (iVar2 = local_20 - local_24, iVar2 <= (int)unaff_ESI[0xb78]))
         && ((int)unaff_ESI[0xb77] <= iVar2)) {
        iVar2 = unaff_ESI[0xb74] + -2 + iVar2 * 2;
        if (local_20 < local_24) {
          iVar2 = unaff_ESI[0xb74] + -1 + (local_24 - local_20) * 2;
        }
        if ((uint)unaff_ESI[iVar2 + 0x959] < (uint)unaff_ESI[local_20 + 0x959]) {
          FUN_0064e940();
          bVar1 = true;
        }
      }
      if (!bVar1) {
        if (local_20 == unaff_ESI[0xb73]) {
          FUN_0064e940();
          FUN_0064e940();
          FUN_0064e940();
          FUN_0064e940();
        }
        else {
          FUN_0064e940();
        }
      }
      if ((int)(local_8 + unaff_ESI[0xb79]) <= (int)local_14 - unaff_ESI[0xb6c]) {
        local_8 = (byte *)((int)local_14 + (-unaff_ESI[0xb79] - unaff_ESI[0xb6c]));
      }
      local_24 = local_20;
    } while (local_14 < (byte *)unaff_ESI[0xb6d]);
  }
  FUN_0064e940();
  FUN_0064e940();
  FUN_0064e940();
  FUN_0064e940();
  FUN_0064e940();
  return;
}

