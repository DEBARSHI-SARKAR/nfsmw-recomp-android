/* speed.exe 00564070 FUN_00564070; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 00544370 FUN_00544370
 * calls 00460c70 FUN_00460c70
 * calls 00515d70 FUN_00515d70
 * calls 00516be0 FUN_00516be0
 * calls 00586550 FUN_00586550
 * calls 005195d0 FUN_005195d0
 * calls 00562c30 FUN_00562c30
 * calls 00562ff0 FUN_00562ff0
 * calls 0056da30 FUN_0056da30
 * calls 00563380 FUN_00563380
 * calls 00544270 FUN_00544270
 * calls 005275b0 FUN_005275b0
 * calls 0056dbb0 FUN_0056dbb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00564070(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_2 != 0xc407210) && (*(int *)(DAT_0091cb20 + 0x40) == 0)) {
    FUN_005275b0(param_2,param_3,param_4,param_5);
  }
  if (param_2 < 0xc98356bb) {
    if (param_2 == 0xc98356ba) {
      if (*(char *)(param_1 + 0x75) != '\0') {
        *(undefined1 *)(param_1 + 0x75) = 0;
        FUN_00516be0(0x8867412d,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
        return;
      }
    }
    else {
      if (param_2 < 0x3a2be558) {
        if (param_2 != 0x3a2be557) {
          if (param_2 == 0xc407210) {
            *(undefined1 *)(param_1 + 0x76) = 0;
            _DAT_0091cbd8 = param_4;
            FUN_00563380(0xc407210,param_3,param_4,param_5,0);
            return;
          }
          if (param_2 != 0x35f8620b) {
            return;
          }
        }
        FUN_00562c30();
        return;
      }
      if (param_2 == 0x54b3ac6c) {
        if (*(char *)(param_1 + 0x74) != '\0') {
          *(undefined1 *)(param_1 + 0x74) = 0;
          FUN_00516be0(0x4f3559b5,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
          *(undefined1 *)(DAT_0091cb20 + 0x26) = *(undefined1 *)(param_1 + 0x74);
        }
        FUN_005257f0();
        return;
      }
      if (param_2 == 0xc502df5d) {
        *(undefined1 *)(param_1 + 0x76) = 1;
        FUN_005195d0(param_3);
        return;
      }
    }
  }
  else if (param_2 < 0xe1fde1d2) {
    if (param_2 == 0xe1fde1d1) {
      FUN_00562ff0();
      return;
    }
    if (param_2 == 0xc9d30688) {
      if ((((byte)DAT_0091cbac & 0xf0) == 0x60) && (*(char *)(DAT_0091cf90 + 3) == '\0')) {
        FUN_00544370(2);
        return;
      }
      if (((DAT_0091cbac & 0x60) != 0) && (*(char *)(DAT_0091cf90 + 3) != '\0')) {
        FUN_00544370(1);
        return;
      }
      FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_00890978);
      *(undefined1 *)(param_1 + 0x75) = 1;
      return;
    }
    if (param_2 == 0xda5b8712) {
      uVar1 = FUN_00586550();
      FUN_00460c70(param_1 + 0x40,uVar1);
      FUN_0056da30(param_1 + 0x40,1);
      FUN_0056dbb0();
      *(undefined1 *)(DAT_0091cf90 + 3) = 1;
      FUN_00544370(4);
      return;
    }
  }
  else if (param_2 == 0xf35d144e) {
    FUN_00544270();
  }
  return;
}

