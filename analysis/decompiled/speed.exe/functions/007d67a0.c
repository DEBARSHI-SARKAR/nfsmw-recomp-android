/* speed.exe 007d67a0 ___sbh_heap_check; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000054 IsBadWritePtr
 */

/* Library Function - Single Match
    ___sbh_heap_check
   
   Library: Visual Studio 2003 Debug */

undefined4 ___sbh_heap_check(void)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  byte bVar4;
  int local_170;
  int local_16c;
  int local_168;
  uint local_160;
  int aiStack_15c [65];
  int local_58;
  uint local_54;
  uint local_50;
  LPVOID local_4c;
  uint *local_48;
  uint *local_44;
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = IsBadWritePtr(DAT_009c52ec,DAT_009c52e8 * 0x14);
  if (BVar2 == 0) {
    local_3c = DAT_009c52ec;
    for (local_170 = 0; local_170 < DAT_009c52e8; local_170 = local_170 + 1) {
      local_4c = (LPVOID)local_3c[4];
      BVar2 = IsBadWritePtr(local_4c,0x41c4);
      if (BVar2 != 0) {
        return 0xfffffffe;
      }
      local_14 = (uint *)local_3c[3];
      local_48 = (uint *)((int)local_4c + 0x144);
      local_160 = local_3c[2];
      local_38 = 0;
      local_54 = 0;
      for (local_20 = 0; local_20 < 0x20; local_20 = local_20 + 1) {
        local_10 = 0;
        local_8 = 0;
        local_18 = 0;
        for (local_16c = 0; local_16c < 0x40; local_16c = local_16c + 1) {
          aiStack_15c[local_16c] = 0;
        }
        if (-1 < (int)local_160) {
          BVar2 = IsBadWritePtr(local_14,0x8000);
          if (BVar2 != 0) {
            return 0xfffffffc;
          }
          local_2c = local_14;
          for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
            local_28 = local_2c + 3;
            local_34 = local_2c + 0x3ff;
            if ((local_2c[2] != 0xffffffff) || (local_2c[0x3ff] != 0xffffffff)) {
              return 0xfffffffb;
            }
            do {
              uVar1 = *local_28;
              local_40 = uVar1;
              if ((uVar1 & 1) == 0) {
                local_16c = ((int)uVar1 >> 4) + -1;
                if (0x3f < local_16c) {
                  local_16c = 0x3f;
                }
                aiStack_15c[local_16c] = aiStack_15c[local_16c] + 1;
              }
              else {
                local_40 = uVar1 - 1;
                if (0x400 < (int)(uVar1 - 1)) {
                  return 0xfffffffa;
                }
                local_18 = local_18 + 1;
              }
              if ((((int)local_40 < 0x10) || ((local_40 & 0xf) != 0)) || (0xff0 < (int)local_40)) {
                return 0xfffffff9;
              }
              if (*(uint *)((int)local_28 + (local_40 - 4)) != uVar1) {
                return 0xfffffff8;
              }
              local_28 = (uint *)((int)local_28 + local_40);
            } while (local_28 < local_34);
            if (local_28 != local_34) {
              return 0xfffffff8;
            }
            local_2c = local_2c + 0x400;
          }
          if (*local_48 != local_18) {
            return 0xfffffff7;
          }
          local_44 = local_48;
          for (local_168 = 0; local_168 < 0x40; local_168 = local_168 + 1) {
            local_58 = 0;
            local_28 = local_44;
            while( true ) {
              local_c = (uint *)local_28[1];
              if ((local_c == local_44) || (local_58 == aiStack_15c[local_168])) break;
              if ((local_c < local_14) || (local_14 + 0x2000 <= local_c)) {
                return 0xfffffff6;
              }
              local_50 = (uint)local_c & 0xfffff000;
              local_24 = (uint *)(local_50 + 0xffc);
              for (local_30 = (uint *)(local_50 + 0xc);
                  (local_30 != local_24 && (local_30 != local_c));
                  local_30 = (uint *)((*local_30 & 0xfffffffe) + (int)local_30)) {
              }
              if (local_30 == local_24) {
                return 0xfffffff5;
              }
              local_16c = ((int)*local_c >> 4) + -1;
              if (0x3f < local_16c) {
                local_16c = 0x3f;
              }
              if (local_16c != local_168) {
                return 0xfffffff4;
              }
              if ((uint *)local_c[2] != local_28) {
                return 0xfffffff3;
              }
              local_28 = local_c;
              local_58 = local_58 + 1;
            }
            if (local_58 != 0) {
              bVar4 = (byte)local_168;
              if (local_168 < 0x20) {
                local_10 = 0x80000000U >> (bVar4 & 0x1f) | local_10;
                local_38 = 0x80000000U >> (bVar4 & 0x1f) | local_38;
              }
              else {
                local_8 = 0x80000000U >> (bVar4 - 0x20 & 0x1f) | local_8;
                local_54 = 0x80000000U >> (bVar4 - 0x20 & 0x1f) | local_54;
              }
            }
            if (((uint *)local_28[1] != local_44) || (local_58 != aiStack_15c[local_168])) {
              return 0xfffffff2;
            }
            if ((uint *)local_44[2] != local_28) {
              return 0xfffffff1;
            }
            local_44 = local_44 + 2;
          }
        }
        if ((local_10 != *(uint *)((int)local_4c + local_20 * 4 + 0x44)) ||
           (local_8 != *(uint *)((int)local_4c + local_20 * 4 + 0xc4))) {
          return 0xfffffff0;
        }
        local_14 = local_14 + 0x2000;
        local_48 = local_48 + 0x81;
        local_160 = local_160 << 1;
      }
      if ((local_38 != *local_3c) || (local_54 != local_3c[1])) {
        return 0xffffffef;
      }
      local_3c = local_3c + 5;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

