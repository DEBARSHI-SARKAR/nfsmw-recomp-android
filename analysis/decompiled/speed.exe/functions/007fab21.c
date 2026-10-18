/* speed.exe 007fab21 FUN_007fab21; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fab21(void)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *local_c;
  
  uVar5 = 0xffffff00;
  do {
    cVar2 = (char)uVar5;
    if ((int)uVar5 < -0x80) {
      cVar2 = -0x80;
    }
    else if (0x7f < (int)uVar5) {
      cVar2 = '\x7f';
    }
    uVar7 = uVar5 & 0x1ff;
    uVar5 = uVar5 + 1;
    (&DAT_009c1640)[uVar7] = cVar2 + -0x80;
  } while ((int)uVar5 < 0xff);
  _DAT_009c0a38 = 0xf;
  puVar3 = &DAT_009c0a3c;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 0x1f;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_009c0a58;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 0x2f;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_009c0e38;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 0x3f;
    puVar3 = puVar3 + 1;
  }
  local_c = &DAT_008c296c;
  do {
    uVar5 = local_c[-1];
    uVar7 = *local_c;
    uVar1 = local_c[2];
    if ((uVar1 & 0xfc00) == 0) {
      iVar6 = 1 << (0xeU - (char)uVar5 & 0x1f);
      uVar5 = (uVar7 & 0xfc00 | uVar7 << 0x10) << 6 | uVar5 - 6;
      if (0 < iVar6) {
        puVar4 = (uint *)(&DAT_009c1240 + ((int)uVar1 >> 2) * 4);
        goto code_r0x007fac09;
      }
    }
    else {
      iVar6 = 1 << (9U - (char)uVar5 & 0x1f);
      uVar5 = (uVar7 & 0xfc00 | uVar7 << 0x10) << 6 | uVar5;
      if (0 < iVar6) {
        puVar4 = (uint *)(&DAT_009c0a38 + ((int)uVar1 >> 7) * 4);
code_r0x007fac09:
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = uVar5;
          puVar4 = puVar4 + 1;
        }
      }
    }
    local_c = local_c + 4;
  } while ((int)local_c < 0x8c2f4c);
  local_c = &DAT_008c2f4c;
  do {
    uVar5 = local_c[-1];
    uVar7 = *local_c;
    uVar1 = local_c[2];
    cVar2 = (char)uVar5 + '\b';
    if ((char)(uVar1 >> 8) < '\0') {
      iVar6 = 1 << (0xeU - cVar2 & 0x1f);
      uVar5 = (uVar7 & 0xfc00 | uVar7 << 0x10) << 6 | uVar5 + 2;
      if (0 < iVar6) {
        puVar4 = (uint *)(&DAT_009c1240 + ((int)uVar1 >> 10) * 4);
        goto code_r0x007fac93;
      }
    }
    else {
      iVar6 = 1 << (0x11U - cVar2 & 0x1f);
      uVar5 = (uVar7 & 0xfc00 | uVar7 << 0x10) << 6 | uVar5 - 1;
      if (0 < iVar6) {
        puVar4 = (uint *)(&DAT_009c0530 + ((int)uVar1 >> 7) * 4);
code_r0x007fac93:
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = uVar5;
          puVar4 = puVar4 + 1;
        }
      }
    }
    local_c = local_c + 4;
    if (0x8c374b < (int)local_c) {
      puVar3 = &DAT_009c0930;
      do {
        *puVar3 = 1;
        puVar3 = puVar3 + 1;
      } while ((int)puVar3 < 0x9c09b0);
      puVar4 = &DAT_009c09f0;
      uVar5 = 0xfc000000;
      do {
        puVar4[-0x10] = uVar5 + 0x4400000 | 6;
        *puVar4 = uVar5 | 6;
        uVar5 = uVar5 + 0x400000;
        puVar4 = puVar4 + 1;
      } while ((int)uVar5 < 0);
      DAT_009c1238 = 1;
      return;
    }
  } while( true );
}

