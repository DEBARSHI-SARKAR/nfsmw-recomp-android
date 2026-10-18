/* speed.exe 0064dca0 FUN_0064dca0; analysis pseudocode, not buildable source.
 */

uint FUN_0064dca0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *local_408;
  byte *local_404;
  byte local_3fd;
  uint local_3fc;
  byte *local_3f0;
  int local_3ec;
  int local_3e8;
  byte *local_3e0;
  byte *local_3dc;
  uint local_3d8;
  byte local_3d4;
  uint local_3cc;
  int local_3c8;
  uint auStack_3c0 [15];
  uint auStack_384 [10];
  uint auStack_35c [7];
  byte local_340 [4];
  undefined4 local_33c [63];
  int aiStack_240 [16];
  byte local_200 [4];
  undefined4 local_1fc [63];
  byte local_100 [256];
  
  local_3fc = 0;
  uVar8 = 0;
  local_3c8 = 0;
  local_408 = param_1;
  if (in_EAX == (byte *)0x0) {
    return 0;
  }
  iVar9 = -0x10;
  bVar7 = (byte)DAT_0092592c;
  if (DAT_0092592c != 0) {
    uVar13 = 0 << (bVar7 & 0x1f);
    iVar9 = -0x10 - DAT_0092592c;
    local_404 = in_EAX;
    if (-1 < iVar9) goto LAB_0064dd05;
  }
  local_404 = in_EAX + 2;
  local_3fc = (uint)CONCAT11(*in_EAX,in_EAX[1]);
  uVar13 = local_3fc << (-(char)iVar9 & 0x1fU);
  iVar9 = iVar9 + 0x10;
LAB_0064dd05:
  local_3cc = uVar13 >> 0x10;
  uVar14 = uVar13 << 0x10;
  iVar10 = iVar9 + -0x10;
  if (iVar10 < 0) {
    local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
    local_404 = local_404 + 2;
    uVar14 = local_3fc << (-(char)iVar10 & 0x1fU);
    iVar10 = iVar9;
  }
  if ((int)uVar13 < 0) {
    if ((local_3cc & 0x100) != 0) {
      iVar9 = 0;
      iVar11 = iVar10 + -0x10;
      if (iVar11 < 0) {
        local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
        local_404 = local_404 + 2;
        iVar9 = local_3fc << (-(char)iVar11 & 0x1fU);
        iVar11 = iVar10;
      }
      uVar14 = iVar9 << 0x10;
      iVar10 = iVar11 + -0x10;
      if (iVar10 < 0) {
        local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
        local_404 = local_404 + 2;
        uVar14 = local_3fc << (-(char)iVar10 & 0x1fU);
        iVar10 = iVar11;
      }
    }
    uVar13 = uVar14 >> 0x10;
    uVar14 = uVar14 << 0x10;
    iVar10 = iVar10 + -0x10;
  }
  else {
    if ((local_3cc & 0x100) != 0) {
      iVar11 = uVar14 << 8;
      iVar9 = iVar10 + -8;
      if (iVar9 < 0) {
        local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
        local_404 = local_404 + 2;
        iVar11 = local_3fc << (-(char)iVar9 & 0x1fU);
        iVar9 = iVar10 + 8;
      }
      uVar14 = iVar11 << 0x10;
      iVar10 = iVar9 + -0x10;
      if (iVar10 < 0) {
        local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
        local_404 = local_404 + 2;
        uVar14 = local_3fc << (-(char)iVar10 & 0x1fU);
        iVar10 = iVar9;
      }
    }
    uVar13 = uVar14 >> 0x18;
    uVar14 = uVar14 << 8;
    iVar10 = iVar10 + -8;
  }
  local_3cc = local_3cc & 0xfffffeff;
  if (iVar10 < 0) {
    local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
    local_404 = local_404 + 2;
    uVar14 = local_3fc << (-(char)iVar10 & 0x1fU);
    iVar10 = iVar10 + 0x10;
  }
  uVar15 = uVar14 << 0x10;
  iVar9 = iVar10 + -0x10;
  if (iVar9 < 0) {
    local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
    local_404 = local_404 + 2;
    uVar15 = local_3fc << (-(char)iVar9 & 0x1fU);
    iVar9 = iVar10;
  }
  uVar14 = uVar14 >> 0x10 | uVar13 << 0x10;
  uVar13 = uVar15 << 8;
  iVar10 = iVar9 + -8;
  if (iVar10 < 0) {
    local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
    local_404 = local_404 + 2;
    uVar13 = local_3fc << (-(char)iVar10 & 0x1fU);
    iVar10 = iVar9 + 8;
  }
  iVar9 = 0;
  local_3ec = 0;
  local_3f0 = (byte *)0x1;
  pbVar6 = local_3f0;
  do {
    local_3f0 = pbVar6;
    pbVar1 = local_3f0;
    aiStack_240[(int)local_3f0] = iVar9 * 2 - local_3ec;
    if ((int)uVar13 < 0) {
      uVar8 = uVar13 >> 0x1d;
      uVar13 = uVar13 << 3;
      iVar12 = iVar10 + -3;
      if (iVar12 < 0) {
        local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
        local_404 = local_404 + 2;
        uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
        iVar12 = iVar10 + 0xd;
      }
      uVar8 = uVar8 - 4;
    }
    else {
      iVar11 = 2;
      if ((uVar13 & 0xffff0000) == 0) {
        do {
          iVar11 = iVar11 + 1;
          uVar8 = -((int)uVar13 >> 0x1f);
          uVar13 = uVar13 << 1;
          iVar12 = iVar10 + -1;
          if (iVar12 < 0) {
            local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
            local_404 = local_404 + 2;
            uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
            iVar12 = iVar10 + 0xf;
          }
          iVar10 = iVar12;
        } while (uVar8 == 0);
      }
      else {
        do {
          uVar3 = uVar13;
          uVar13 = uVar3 << 1;
          iVar11 = iVar11 + 1;
        } while (-1 < (int)uVar13);
        iVar12 = iVar10 + (1 - iVar11);
        uVar13 = uVar3 << 2;
        if (DAT_0092592c != 0) {
          uVar8 = uVar13 >> (0x20 - bVar7 & 0x1f);
          uVar13 = uVar13 << (bVar7 & 0x1f);
          iVar12 = iVar12 - DAT_0092592c;
        }
        if (iVar12 < 0) {
          local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
          local_404 = local_404 + 2;
          uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
          iVar12 = iVar12 + 0x10;
        }
      }
      bVar2 = (byte)iVar11;
      if (iVar11 < 0x11) {
        if (iVar11 != 0) {
          uVar8 = uVar13 >> (0x20 - bVar2 & 0x1f);
          uVar13 = uVar13 << (bVar2 & 0x1f);
          iVar12 = iVar12 - iVar11;
        }
        if (iVar12 < 0) {
          local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
          local_404 = local_404 + 2;
          uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
          iVar12 = iVar12 + 0x10;
        }
      }
      else {
        iVar10 = iVar12;
        if (iVar11 != 0x10) {
          uVar8 = uVar13 >> (0x30 - bVar2 & 0x1f);
          uVar13 = uVar13 << (bVar2 - 0x10 & 0x1f);
          iVar10 = iVar12 + (0x10 - iVar11);
        }
        if (iVar10 < 0) {
          local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
          local_404 = local_404 + 2;
          uVar13 = local_3fc << (-(char)iVar10 & 0x1fU);
          iVar10 = iVar10 + 0x10;
        }
        uVar3 = uVar13 >> 0x10;
        uVar13 = uVar13 << 0x10;
        iVar12 = iVar10 + -0x10;
        if (iVar12 < 0) {
          local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
          local_404 = local_404 + 2;
          uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
          iVar12 = iVar10;
        }
        uVar8 = uVar8 << 0x10 | uVar3;
      }
      uVar8 = (uVar8 - 4) + (1 << (bVar2 & 0x1f));
    }
    auStack_3c0[(int)local_3f0] = uVar8;
    iVar9 = iVar9 * 2 + uVar8;
    local_3ec = local_3ec + uVar8;
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = iVar9 << (0x10U - (char)local_3f0 & 0x1f) & 0xffff;
    }
    auStack_384[(int)local_3f0 + 1] = uVar3;
    pbVar6 = (byte *)((int)local_3f0 + 1);
    iVar10 = iVar12;
  } while ((uVar8 == 0) || (uVar3 != 0));
  auStack_384[(int)pbVar6] = 0xffffffff;
  puVar4 = local_33c + 1;
  iVar9 = 0x10;
  do {
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 4;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_3fd = 0xff;
  local_3e0 = (byte *)0x0;
  iVar9 = iVar12;
  if (0 < local_3ec) {
    do {
      uVar8 = 0;
      if ((int)uVar13 < 0) {
        uVar8 = uVar13 >> 0x1d;
        uVar13 = uVar13 << 3;
        iVar12 = iVar9 + -3;
        if (iVar12 < 0) {
          local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
          local_404 = local_404 + 2;
          uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
          iVar12 = iVar9 + 0xd;
        }
        iVar9 = uVar8 - 4;
      }
      else {
        iVar10 = 2;
        if ((uVar13 & 0xffff0000) == 0) {
          do {
            iVar10 = iVar10 + 1;
            uVar8 = -((int)uVar13 >> 0x1f);
            uVar13 = uVar13 << 1;
            iVar12 = iVar9 + -1;
            if (iVar12 < 0) {
              local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
              local_404 = local_404 + 2;
              uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
              iVar12 = iVar9 + 0xf;
            }
            iVar9 = iVar12;
          } while (uVar8 == 0);
        }
        else {
          do {
            uVar3 = uVar13;
            uVar13 = uVar3 << 1;
            iVar10 = iVar10 + 1;
          } while (-1 < (int)uVar13);
          iVar12 = iVar9 + (1 - iVar10);
          uVar13 = uVar3 << 2;
          if (DAT_0092592c != 0) {
            uVar8 = uVar13 >> (0x20 - bVar7 & 0x1f);
            uVar13 = uVar13 << (bVar7 & 0x1f);
            iVar12 = iVar12 - DAT_0092592c;
          }
          if (iVar12 < 0) {
            local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
            local_404 = local_404 + 2;
            uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
            iVar12 = iVar12 + 0x10;
          }
        }
        bVar2 = (byte)iVar10;
        if (iVar10 < 0x11) {
          if (iVar10 != 0) {
            uVar8 = uVar13 >> (0x20 - bVar2 & 0x1f);
            uVar13 = uVar13 << (bVar2 & 0x1f);
            iVar12 = iVar12 - iVar10;
          }
          if (iVar12 < 0) {
            local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
            local_404 = local_404 + 2;
            uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
            iVar12 = iVar12 + 0x10;
          }
        }
        else {
          iVar9 = iVar12;
          if (iVar10 != 0x10) {
            uVar8 = uVar13 >> (0x30 - bVar2 & 0x1f);
            uVar13 = uVar13 << (bVar2 - 0x10 & 0x1f);
            iVar9 = iVar12 + (0x10 - iVar10);
          }
          if (iVar9 < 0) {
            local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
            local_404 = local_404 + 2;
            uVar13 = local_3fc << (-(char)iVar9 & 0x1fU);
            iVar9 = iVar9 + 0x10;
          }
          uVar3 = uVar13 >> 0x10;
          uVar13 = uVar13 << 0x10;
          iVar12 = iVar9 + -0x10;
          if (iVar12 < 0) {
            local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
            local_404 = local_404 + 2;
            uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
            iVar12 = iVar9;
          }
          uVar8 = uVar8 << 0x10 | uVar3;
        }
        iVar9 = (uVar8 - 4) + (1 << (bVar2 & 0x1f));
      }
      iVar9 = iVar9 + 1;
      do {
        local_3fd = local_3fd + 1;
        if (local_340[local_3fd] == 0) {
          iVar9 = iVar9 + -1;
        }
      } while (iVar9 != 0);
      local_340[local_3fd] = 1;
      local_100[(int)local_3e0] = local_3fd;
      local_3e0 = (byte *)((int)local_3e0 + 1);
      iVar9 = iVar12;
    } while ((int)local_3e0 < local_3ec);
  }
  puVar4 = local_1fc + 1;
  iVar9 = 0x10;
  do {
    puVar4[-2] = 0x40404040;
    puVar4[-1] = 0x40404040;
    *puVar4 = 0x40404040;
    puVar4[1] = 0x40404040;
    puVar4 = puVar4 + 4;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_3dc = local_340;
  local_3e0 = local_200;
  local_3ec = 1;
  local_3d4 = (byte)(uVar15 >> 0x18);
  if (0 < (int)local_3f0) {
    local_3e8 = 7;
    local_3f0 = local_100;
    do {
      if (local_3e8 < 0) break;
      uVar8 = 1 << ((byte)local_3e8 & 0x1f);
      if (auStack_3c0[local_3ec] != 0) {
        local_3d8 = auStack_3c0[local_3ec];
        do {
          bVar2 = (byte)local_3ec;
          bVar7 = *local_3f0;
          local_3f0 = local_3f0 + 1;
          if ((uint)bVar7 == uVar15 >> 0x18) {
            local_3c8 = local_3ec;
            bVar2 = 0x60;
          }
          if (0 < (int)uVar8) {
            pbVar6 = local_3e0;
            for (uVar3 = uVar8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(uint *)pbVar6 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
              pbVar6 = pbVar6 + 4;
            }
            for (uVar3 = uVar8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pbVar6 = bVar2;
              pbVar6 = pbVar6 + 1;
            }
            pbVar6 = local_3dc;
            for (uVar3 = uVar8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(uint *)pbVar6 = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
              pbVar6 = pbVar6 + 4;
            }
            for (uVar3 = uVar8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pbVar6 = bVar7;
              pbVar6 = pbVar6 + 1;
            }
            local_3dc = local_3dc + uVar8;
            local_3e0 = local_3e0 + uVar8;
          }
          local_3d8 = local_3d8 - 1;
        } while (local_3d8 != 0);
      }
      local_3ec = local_3ec + 1;
      local_3e8 = local_3e8 + -1;
    } while (local_3ec <= (int)pbVar1);
  }
LAB_0064e4d0:
  do {
    uVar8 = uVar13 >> 0x18;
    uVar15 = (uint)local_200[uVar8];
    pbVar6 = local_408;
    for (iVar12 = iVar12 - uVar15; local_408 = pbVar6, -1 < iVar12; iVar12 = iVar12 - uVar15) {
      uVar13 = uVar13 << ((byte)uVar15 & 0x1f);
      *pbVar6 = local_340[uVar8];
      local_408 = pbVar6 + 1;
      uVar8 = uVar13 >> 0x18;
      uVar15 = (uint)local_200[uVar8];
      iVar12 = iVar12 - uVar15;
      if (iVar12 < 0) break;
      uVar13 = uVar13 << (local_200[uVar8] & 0x1f);
      *local_408 = local_340[uVar8];
      local_408 = pbVar6 + 2;
      uVar8 = uVar13 >> 0x18;
      uVar15 = (uint)local_200[uVar8];
      iVar12 = iVar12 - uVar15;
      if (iVar12 < 0) break;
      uVar13 = uVar13 << (local_200[uVar8] & 0x1f);
      *local_408 = local_340[uVar8];
      local_408 = pbVar6 + 3;
      uVar8 = uVar13 >> 0x18;
      uVar15 = (uint)local_200[uVar8];
      iVar12 = iVar12 - uVar15;
      if (iVar12 < 0) break;
      uVar13 = uVar13 << (local_200[uVar8] & 0x1f);
      *local_408 = local_340[uVar8];
      pbVar6 = pbVar6 + 4;
      uVar8 = uVar13 >> 0x18;
      uVar15 = (uint)local_200[uVar8];
    }
    iVar12 = iVar12 + 0x10;
    if (iVar12 < 0) {
      iVar9 = local_3c8;
      if (uVar15 != 0x60) {
        iVar9 = 8;
        do {
          iVar10 = iVar9 + 2;
          iVar9 = iVar9 + 1;
        } while (auStack_384[iVar10] <= uVar13 >> 0x10);
      }
      uVar8 = uVar13 >> (0x20 - (byte)iVar9 & 0x1f);
      uVar13 = uVar13 << ((byte)iVar9 & 0x1f);
      bVar7 = local_100[uVar8 - aiStack_240[iVar9]];
      iVar12 = ((uVar15 - 0x10) + iVar12) - iVar9;
      if (bVar7 == local_3d4) {
        if (iVar12 < 0) goto LAB_0064e621;
      }
      else {
        if (-1 < iVar12) {
          *local_408 = bVar7;
          local_408 = local_408 + 1;
          goto LAB_0064e4d0;
        }
LAB_0064e621:
        local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
        local_404 = local_404 + 2;
        uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
        iVar12 = iVar12 + 0x10;
      }
      if (bVar7 == local_3d4) {
        uVar8 = 0;
        if ((int)uVar13 < 0) {
          uVar8 = uVar13 >> 0x1d;
          uVar13 = uVar13 << 3;
          iVar9 = iVar12 + -3;
          if (iVar9 < 0) {
            local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
            local_404 = local_404 + 2;
            uVar13 = local_3fc << (-(char)iVar9 & 0x1fU);
            iVar9 = iVar12 + 0xd;
          }
          iVar12 = iVar9;
          iVar9 = uVar8 - 4;
        }
        else {
          iVar10 = 2;
          iVar9 = iVar12;
          if ((uVar13 & 0xffff0000) == 0) {
            do {
              iVar10 = iVar10 + 1;
              uVar8 = -((int)uVar13 >> 0x1f);
              uVar13 = uVar13 << 1;
              iVar12 = iVar9 + -1;
              if (iVar12 < 0) {
                local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
                local_404 = local_404 + 2;
                uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
                iVar12 = iVar9 + 0xf;
              }
              iVar9 = iVar12;
            } while (uVar8 == 0);
          }
          else {
            do {
              uVar15 = uVar13;
              uVar13 = uVar15 << 1;
              iVar10 = iVar10 + 1;
            } while (-1 < (int)uVar13);
            iVar12 = iVar12 + (1 - iVar10);
            uVar13 = uVar15 << 2;
            if (DAT_0092592c != 0) {
              uVar8 = uVar13 >> (0x20 - (byte)DAT_0092592c & 0x1f);
              uVar13 = uVar13 << ((byte)DAT_0092592c & 0x1f);
              iVar12 = iVar12 - DAT_0092592c;
            }
            if (iVar12 < 0) {
              local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
              local_404 = local_404 + 2;
              uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
              iVar12 = iVar12 + 0x10;
            }
          }
          bVar7 = (byte)iVar10;
          if (iVar10 < 0x11) {
            if (iVar10 != 0) {
              uVar8 = uVar13 >> (0x20 - bVar7 & 0x1f);
              uVar13 = uVar13 << (bVar7 & 0x1f);
              iVar12 = iVar12 - iVar10;
            }
            if (iVar12 < 0) {
              local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
              local_404 = local_404 + 2;
              uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
              iVar12 = iVar12 + 0x10;
            }
          }
          else {
            iVar9 = iVar12;
            if (iVar10 != 0x10) {
              uVar8 = uVar13 >> (0x30 - bVar7 & 0x1f);
              uVar13 = uVar13 << (bVar7 - 0x10 & 0x1f);
              iVar9 = iVar12 + (0x10 - iVar10);
            }
            if (iVar9 < 0) {
              local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
              local_404 = local_404 + 2;
              uVar13 = local_3fc << (-(char)iVar9 & 0x1fU);
              iVar9 = iVar9 + 0x10;
            }
            uVar15 = uVar13 >> 0x10;
            uVar13 = uVar13 << 0x10;
            iVar12 = iVar9 + -0x10;
            if (iVar12 < 0) {
              local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
              local_404 = local_404 + 2;
              uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
              iVar12 = iVar9;
            }
            uVar8 = uVar8 << 0x10 | uVar15;
          }
          iVar9 = (uVar8 - 4) + (1 << (bVar7 & 0x1f));
        }
        if (iVar9 == 0) {
          iVar10 = uVar13 << 1;
          iVar9 = iVar12 + -1;
          if (iVar9 < 0) {
            local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
            local_404 = local_404 + 2;
            iVar10 = local_3fc << (-(char)iVar9 & 0x1fU);
            iVar9 = iVar12 + 0xf;
          }
          if ((int)uVar13 < 0) {
            if ((local_3cc == 0x32fb) || (local_3cc == 0xb2fb)) {
              pbVar6 = param_1 + uVar14;
              bVar7 = 0;
              for (; param_1 < pbVar6; param_1 = param_1 + 1) {
                bVar7 = bVar7 + *param_1;
                *param_1 = bVar7;
              }
            }
            else if ((local_3cc == 0x34fb) || (local_3cc == 0xb4fb)) {
              pbVar6 = param_1 + uVar14;
              cVar5 = '\0';
              bVar7 = 0;
              if (param_1 < pbVar6) {
                do {
                  cVar5 = cVar5 + *param_1;
                  bVar7 = bVar7 + cVar5;
                  *param_1 = bVar7;
                  param_1 = param_1 + 1;
                } while (param_1 < pbVar6);
                return uVar14;
              }
            }
            return uVar14;
          }
          uVar13 = iVar10 << 8;
          iVar12 = iVar9 + -8;
          if (iVar12 < 0) {
            local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
            local_404 = local_404 + 2;
            uVar13 = local_3fc << (-(char)iVar12 & 0x1fU);
            iVar12 = iVar9 + 8;
          }
          *local_408 = (byte)((uint)iVar10 >> 0x18);
          local_408 = local_408 + 1;
        }
        else {
          pbVar6 = local_408 + iVar9;
          bVar7 = local_408[-1];
          do {
            *local_408 = bVar7;
            local_408 = local_408 + 1;
          } while (local_408 < pbVar6);
        }
      }
      else {
        *local_408 = bVar7;
        local_408 = local_408 + 1;
      }
      goto LAB_0064e4d0;
    }
    *local_408 = local_340[uVar13 >> 0x18];
    local_408 = local_408 + 1;
    local_3fc = (local_3fc << 8 | (uint)*local_404) << 8 | (uint)local_404[1];
    local_404 = local_404 + 2;
    uVar13 = local_3fc << (0x10U - (char)iVar12 & 0x1f);
  } while( true );
}

