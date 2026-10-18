/* speed.exe 00854510 FUN_00854510; analysis pseudocode, not buildable source.
 * calls 00854470 FUN_00854470
 */

void FUN_00854510(void)

{
  byte *pbVar1;
  undefined **ppuVar2;
  byte *in_EAX;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  local_1c = 0xffffffff;
  local_18 = -1;
  local_14 = -1;
  local_10 = -1;
  local_c = -1;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  bVar4 = *in_EAX;
  while ((bVar4 != 0 && ((char)bVar4 < '!'))) {
    pbVar3 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    bVar4 = *pbVar3;
  }
  iVar5 = 0;
  if (PTR_DAT_0090d478 != (undefined *)0x0) {
    bVar4 = *in_EAX;
    pbVar3 = PTR_DAT_0090d478;
    do {
      if (((bVar4 == *pbVar3) && (in_EAX[1] == pbVar3[1])) && (in_EAX[2] == pbVar3[2])) {
        pbVar3 = in_EAX;
        if (bVar4 == 0x2c) goto LAB_008545e5;
        goto LAB_008545d2;
      }
      pbVar3 = (&PTR_DAT_0090d47c)[iVar5];
      iVar5 = iVar5 + 1;
    } while (pbVar3 != (byte *)0x0);
  }
  goto LAB_00854580;
joined_r0x008545fa:
  while ((bVar4 != 0 && (((char)bVar4 < '0' || ('9' < (char)bVar4))))) {
    pbVar3 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    bVar4 = *pbVar3;
  }
  bVar4 = *in_EAX;
  iVar6 = 0;
  local_14 = iVar5;
  if ('/' < (char)bVar4) {
    do {
      if ('9' < (char)bVar4) break;
      in_EAX = in_EAX + 1;
      iVar6 = (bVar4 & 0xf) + iVar6 * 10;
      bVar4 = *in_EAX;
    } while ('/' < (char)bVar4);
    if (0 < iVar6) {
      local_18 = iVar6;
    }
  }
  goto LAB_0085463f;
  while( true ) {
    bVar4 = in_EAX[1];
    in_EAX = in_EAX + 1;
    if (bVar4 == 0) break;
LAB_008546d0:
    if (bVar4 == 0x20) break;
  }
  goto LAB_008546dd;
  while( true ) {
    bVar4 = in_EAX[1];
    pbVar3 = in_EAX + 1;
    if (bVar4 == 0x2c) break;
LAB_008545d2:
    in_EAX = pbVar3;
    if ((bVar4 == 0x20) || (bVar4 == 0)) goto LAB_008545e5;
  }
  in_EAX = in_EAX + 2;
LAB_008545e5:
  for (; (*in_EAX == 0x2c || (local_c = iVar5, *in_EAX == 0x20)); in_EAX = in_EAX + 1) {
  }
LAB_00854580:
  bVar4 = *in_EAX;
  if (((char)bVar4 < '0') || ('9' < (char)bVar4)) {
    iVar5 = 0;
    pbVar3 = PTR_DAT_0090d498;
    while (pbVar3 != (byte *)0x0) {
      if (((bVar4 == *pbVar3) && (in_EAX[1] == pbVar3[1])) && (in_EAX[2] == pbVar3[2]))
      goto joined_r0x008545fa;
      ppuVar2 = &PTR_DAT_0090d49c + iVar5;
      iVar5 = iVar5 + 1;
      pbVar3 = *ppuVar2;
    }
  }
LAB_0085463f:
  if (local_14 < 0) {
    bVar4 = *in_EAX;
    if ('/' < (char)bVar4) {
      if (((char)bVar4 < ':') &&
         ((('@' < (char)in_EAX[1] || ('@' < (char)in_EAX[2])) || ('@' < (char)in_EAX[3])))) {
        local_18 = 0;
        do {
          if ('9' < (char)bVar4) break;
          in_EAX = in_EAX + 1;
          local_18 = (bVar4 & 0xf) + local_18 * 10;
          bVar4 = *in_EAX;
        } while ('/' < (char)bVar4);
        bVar4 = *in_EAX;
        while ((char)bVar4 < '@') {
          pbVar3 = in_EAX + 1;
          in_EAX = in_EAX + 1;
          bVar4 = *pbVar3;
        }
        iVar5 = 0;
        if (PTR_DAT_0090d498 != (undefined *)0x0) {
          bVar4 = *in_EAX;
          pbVar3 = PTR_DAT_0090d498;
          do {
            if (((bVar4 == *pbVar3) && (in_EAX[1] == pbVar3[1])) && (in_EAX[2] == pbVar3[2])) {
              local_14 = iVar5;
              if (bVar4 != 0) goto LAB_008546d0;
              break;
            }
            pbVar3 = (&PTR_DAT_0090d49c)[iVar5];
            iVar5 = iVar5 + 1;
          } while (pbVar3 != (byte *)0x0);
        }
      }
      goto LAB_008546dd;
    }
  }
  else {
LAB_008546dd:
    bVar4 = *in_EAX;
    if ((('/' < (char)bVar4) && ((char)bVar4 < ':')) && (local_14 < 0)) {
      local_14 = 0;
      do {
        if ('9' < (char)bVar4) break;
        in_EAX = in_EAX + 1;
        local_14 = (bVar4 & 0xf) + local_14 * 10;
        bVar4 = *in_EAX;
      } while ('/' < (char)bVar4);
      if (*in_EAX != 0) {
        in_EAX = in_EAX + 1;
      }
      local_18 = 0;
      bVar4 = *in_EAX;
      while (('/' < (char)bVar4 && ((char)bVar4 < ':'))) {
        in_EAX = in_EAX + 1;
        local_18 = (bVar4 & 0xf) + local_18 * 10;
        bVar4 = *in_EAX;
      }
      if (*in_EAX == 0) goto LAB_00854758;
      in_EAX = in_EAX + 1;
    }
  }
  bVar4 = *in_EAX;
  while ((bVar4 != 0 && (((char)bVar4 < '0' || ('9' < (char)bVar4))))) {
    pbVar3 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    bVar4 = *pbVar3;
  }
LAB_00854758:
  bVar4 = *in_EAX;
  pbVar3 = in_EAX;
  if ('/' < (char)bVar4) {
    if ((((char)bVar4 < ':') && (in_EAX[1] != 0x3a)) && (in_EAX[2] != 0x3a)) {
      local_10 = 0;
      do {
        if ('9' < (char)bVar4) break;
        in_EAX = in_EAX + 1;
        local_10 = (bVar4 & 0xf) + local_10 * 10;
        bVar4 = *in_EAX;
      } while ('/' < (char)bVar4);
      if (local_10 < 1000) {
        if (local_10 < 0x32) {
          local_10 = local_10 + 2000;
        }
        else {
          local_10 = local_10 + 0x76c;
        }
      }
      bVar4 = *in_EAX;
      while ((bVar4 != 0 && (((char)bVar4 < '0' || ('9' < (char)bVar4))))) {
        pbVar3 = in_EAX + 1;
        in_EAX = in_EAX + 1;
        bVar4 = *pbVar3;
      }
    }
    bVar4 = *in_EAX;
    pbVar3 = in_EAX;
    if ('/' < (char)bVar4) {
      if ((char)bVar4 < ':') {
        local_1c = bVar4 & 0xf;
        pbVar3 = in_EAX + 1;
        bVar4 = *pbVar3;
        if (('/' < (char)bVar4) && ((char)bVar4 < ':')) {
          local_1c = (bVar4 & 0xf) + local_1c * 10;
          pbVar3 = in_EAX + 2;
        }
        in_EAX = pbVar3;
        if (*in_EAX == 0x3a) {
          in_EAX = in_EAX + 1;
        }
      }
      bVar4 = *in_EAX;
      pbVar3 = in_EAX;
      if ('/' < (char)bVar4) {
        if ((char)bVar4 < ':') {
          local_20 = bVar4 & 0xf;
          pbVar3 = in_EAX + 1;
          bVar4 = *pbVar3;
          if (('/' < (char)bVar4) && ((char)bVar4 < ':')) {
            local_20 = (bVar4 & 0xf) + local_20 * 10;
            pbVar3 = in_EAX + 2;
          }
          in_EAX = pbVar3;
          if (*in_EAX == 0x3a) {
            in_EAX = in_EAX + 1;
          }
        }
        bVar4 = *in_EAX;
        pbVar3 = in_EAX;
        if (('/' < (char)bVar4) && ((char)bVar4 < ':')) {
          local_24 = bVar4 & 0xf;
          pbVar3 = in_EAX + 1;
          bVar4 = *pbVar3;
          if (('/' < (char)bVar4) && ((char)bVar4 < ':')) {
            local_24 = (bVar4 & 0xf) + local_24 * 10;
            pbVar3 = in_EAX + 2;
          }
        }
      }
    }
  }
  if (local_10 < 0) {
    bVar4 = *pbVar3;
    while (((bVar4 != 0 && ((char)bVar4 < '0')) && ('9' < (char)bVar4))) {
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + 1;
      bVar4 = *pbVar1;
    }
    bVar4 = *pbVar3;
    iVar5 = 0;
    if ('/' < (char)bVar4) {
      do {
        if ('9' < (char)bVar4) break;
        pbVar3 = pbVar3 + 1;
        iVar5 = (bVar4 & 0xf) + iVar5 * 10;
        bVar4 = *pbVar3;
      } while ('/' < (char)bVar4);
      if (999 < iVar5) {
        local_10 = iVar5;
      }
    }
  }
  if (0x76c < local_10) {
    local_10 = local_10 + -0x76c;
  }
  FUN_00854470(&local_24);
  return;
}

