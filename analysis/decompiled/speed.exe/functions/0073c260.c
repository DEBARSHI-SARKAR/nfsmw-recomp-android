/* speed.exe 0073c260 FUN_0073c260; analysis pseudocode, not buildable source.
 * calls 0073c0b0 FUN_0073c0b0
 * calls 0073c020 FUN_0073c020
 * calls 0073bf20 FUN_0073bf20
 */

int FUN_0073c260(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  DAT_009af27c = (DAT_009af280 + -1) / 3 + 0x1e;
  pbVar1 = DAT_009b0788 + DAT_009af284;
  iVar3 = DAT_009af284 / (DAT_009af280 << 2);
  local_2c = DAT_009b0788;
  if (iVar3 < 0x65) {
    local_18 = 1;
  }
  else {
    local_18 = iVar3 / 100;
  }
  local_14 = (DAT_00904a10 >> 3) << 6;
  iVar5 = local_14 >> 6;
  local_24 = 0x400;
  if (iVar5 < 2) {
    iVar5 = 0;
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      (&DAT_009ae8b0)[iVar6] = ((iVar5 * iVar5 - iVar6 * iVar6) * 0x100) / (iVar5 * iVar5) << 10;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  iVar6 = DAT_009af284 / 499;
  if (DAT_009af284 % 499 == 0) {
    iVar6 = DAT_009af284 / 0x1eb;
    if (DAT_009af284 % 0x1eb == 0) {
      iVar6 = DAT_009af284 / 0x1e7;
      local_28 = (-(uint)(DAT_009af284 % 0x1e7 != 0) & 0xffffffc0) + 0x7dc;
    }
    else {
      local_28 = 0x7ac;
    }
  }
  else {
    local_28 = 0x7cc;
  }
  local_1c = 0;
  if (0 < iVar3) {
    do {
      bVar2 = *local_2c;
      iVar6 = (uint)local_2c[3] << 4;
      iVar7 = (uint)local_2c[2] << 4;
      iVar4 = (uint)local_2c[1] << 4;
      FUN_0073bf20((uint)bVar2 << 4,iVar4,iVar7,iVar6);
      FUN_0073c020(iVar4,iVar7,iVar6);
      if (iVar5 != 0) {
        FUN_0073c0b0((uint)bVar2 << 4,iVar4,iVar7,iVar6);
      }
      for (local_2c = local_2c + local_28; pbVar1 <= local_2c; local_2c = local_2c + -DAT_009af284)
      {
      }
      local_1c = local_1c + 1;
      iVar6 = local_1c / local_18;
      if (local_1c % local_18 == 0) {
        local_24 = local_24 - local_24 / DAT_009af27c;
        iVar6 = (int)((longlong)local_14 * 0x77777777);
        iVar5 = (int)((ulonglong)((longlong)local_14 * 0x77777777) >> 0x20) - local_14;
        local_14 = local_14 + ((iVar5 >> 4) - (iVar5 >> 0x1f));
        iVar5 = local_14 >> 6;
        if (iVar5 < 2) {
          iVar5 = 0;
        }
        iVar4 = 0;
        if (0 < iVar5) {
          do {
            iVar6 = (((iVar5 * iVar5 - iVar4 * iVar4) * 0x100) / (iVar5 * iVar5)) * local_24;
            (&DAT_009ae8b0)[iVar4] = iVar6;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar5);
        }
      }
    } while (local_1c < iVar3);
  }
  return iVar6;
}

