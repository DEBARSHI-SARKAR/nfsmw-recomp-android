/* speed.exe 00820907 FUN_00820907; analysis pseudocode, not buildable source.
 * calls 008201ae FUN_008201ae
 * calls 0082049e FUN_0082049e
 * calls EXTERNAL:000000e9 timeGetTime
 * calls 007c4b80 FUN_007c4b80
 * calls 00820762 FUN_00820762
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00820907(void)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  int local_28 [2];
  undefined1 local_20 [4];
  uint local_1c;
  undefined4 local_18;
  byte local_14 [4];
  int local_10;
  uint local_c;
  char local_5;
  
  if (DAT_009c22a8 != 0) {
    (**(code **)(*DAT_009c22b0 + 0x24))(DAT_009c22b0,local_14);
    if (((local_14[0] & 2) == 0) && (DAT_009c22f0 < 0x65)) {
      if ((local_14[0] & 1) != 0) {
        local_5 = '\0';
        while( true ) {
          iVar1 = (**(code **)(*DAT_009c22b0 + 0x10))(DAT_009c22b0,0,&local_c);
          if (iVar1 < 0) {
            return;
          }
          if (DAT_009c22a0 != local_c) break;
          DAT_009c229c = DAT_009c229c + 1;
          if (99 < DAT_009c229c) {
            FUN_008201ae(1,0);
            FUN_00820762(1,0);
            local_5 = '\x01';
          }
          if (local_5 != '\x01') {
LAB_008209b0:
            local_c = local_c / DAT_009c228c;
            local_1c = (uint)DAT_009c2046;
            iVar1 = FUN_007c4b80();
            uVar4 = iVar1 + local_c & 0xffffff0;
            if (DAT_009c22b8 <= (int)uVar4) {
              uVar4 = uVar4 - DAT_009c22b8;
            }
            local_28[0] = uVar4 - DAT_009c2298;
            if ((local_28[0] < 0) && (-DAT_009c2288 < local_28[0])) {
              return;
            }
            if (DAT_009c2288 < local_28[0]) {
              return;
            }
            if (local_28[0] < 0) {
              local_28[0] = DAT_009c22b8 - DAT_009c2298;
              local_28[1] = uVar4;
            }
            else {
              local_28[1] = 0;
            }
            local_1c = DAT_009c2298;
            local_10 = 0;
            do {
              iVar1 = local_28[local_10];
              if (iVar1 != 0) {
                (**(code **)(*DAT_009c22b0 + 0x2c))
                          (DAT_009c22b0,((uint)DAT_009c2060 + (uint)DAT_009c205f) * local_1c * 2,
                           ((uint)DAT_009c2060 + (uint)DAT_009c205f) * iVar1 * 2,&local_18,local_20,
                           0,0,0);
                FUN_0082049e(&local_18,iVar1);
                (**(code **)(*DAT_009c22b0 + 0x4c))
                          (DAT_009c22b0,local_18,
                           ((uint)DAT_009c2060 + (uint)DAT_009c205f) * iVar1 * 2,0,0);
                local_1c = 0;
              }
              local_10 = local_10 + 1;
            } while (local_10 < 2);
            DVar2 = timeGetTime();
            uVar3 = DVar2 - _DAT_009c2290;
            if (300 < DVar2 - _DAT_009c2290) {
              uVar3 = DAT_0090bf54;
            }
            if (DAT_0090bf54 < uVar3) {
              DAT_0090bf54 = uVar3;
            }
            if (DAT_0090bf40 < uVar3) {
              DAT_0090bf40 = (ushort)uVar3;
              _DAT_0090bf4c = (float)(int)uVar3;
              if ((int)uVar3 < 0) {
                _DAT_0090bf4c = _DAT_0090bf4c + _DAT_00891214;
              }
            }
            DAT_0090bf44 = DAT_0090bf44 + -1;
            if (DAT_0090bf44 < 1) {
              if (DAT_0090bf54 < DAT_0090bf40) {
                DAT_0090bf40 = (ushort)DAT_0090bf54;
              }
              DAT_0090bf44 = 3000;
              DAT_0090bf54 = 10;
              _DAT_0090bf4c = (float)DAT_0090bf40;
              if (_DAT_0090bf4c < _DAT_00890bf8) {
                _DAT_0090bf4c = _DAT_00890bf8;
              }
            }
            if (_DAT_0090bf4c <= _DAT_0090bf48) {
              DAT_009c2298 = uVar4;
              return;
            }
            _DAT_0090bf4c = _DAT_0090bf48;
            DAT_009c2298 = uVar4;
            return;
          }
        }
        DAT_009c22a0 = local_c;
        DAT_009c229c = 0;
        goto LAB_008209b0;
      }
      (**(code **)(*DAT_009c22b0 + 0x30))(DAT_009c22b0,0,0,1);
    }
    else {
      (**(code **)(*DAT_009c22b0 + 0x50))(DAT_009c22b0);
    }
    DAT_009c22f0 = 0;
  }
  return;
}

