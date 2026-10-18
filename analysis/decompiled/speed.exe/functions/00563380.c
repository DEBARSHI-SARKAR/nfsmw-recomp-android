/* speed.exe 00563380 FUN_00563380; analysis pseudocode, not buildable source.
 * calls 00544370 FUN_00544370
 * calls 005b7780 FUN_005b7780
 * calls 00559d60 FUN_00559d60
 * calls 00516be0 FUN_00516be0
 * calls 0054f9a0 FUN_0054f9a0
 * calls 005ab9c0 FUN_005ab9c0
 * calls 005ace40 FUN_005ace40
 * calls 00599500 FUN_00599500
 * calls 00562c30 FUN_00562c30
 * calls 00519730 FUN_00519730
 * calls 005268b0 FUN_005268b0
 * calls 005a3950 FUN_005a3950
 * calls 00559e40 FUN_00559e40
 */

void __thiscall
FUN_00563380(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_3 + 0x10) == -0x47583933) && (param_6 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar2 = DAT_0091cbac & 0xf000000;
  DAT_0091cbac = DAT_0091cbac & 0xf0ffffff;
  DAT_0091cbcc = uVar2;
  FUN_0054f9a0();
  if (uVar2 < 0x8000001) {
    if (uVar2 == 0x8000000) {
      FUN_00544370(0xb);
      return;
    }
    if (uVar2 < 0x5000001) {
      if (uVar2 == 0x5000000) {
        if (!bVar1) {
          FUN_005ace40();
          FUN_00519730(0x8867412d);
          return;
        }
        FUN_00599500(1);
        if ((DAT_0091cbac & 0x240000) == 0) {
          FUN_005ab9c0();
        }
        FUN_00544370(10);
        return;
      }
      if (uVar2 == 0x1000000) {
        if (bVar1) {
          FUN_00599500(1);
          if ((DAT_0091cbac & 0x240000) == 0) {
            FUN_005ab9c0();
          }
          if ((DAT_0091cbac & 0x80000) != 0) {
            FUN_005a3950(0);
          }
          if (((byte)DAT_0091cbac & 0xf0) == 0x20) {
            DAT_0091cbac = DAT_0091cbac & 0xffffff6f | 0x60;
            DAT_0091cbc8 = 0x20;
          }
          FUN_00544370(10);
          return;
        }
        if ((DAT_0091cbac & 0x80000) != 0) {
          FUN_005ace40();
        }
      }
      else if (uVar2 != 0x3000000) {
        if (uVar2 == 0x4000000) {
          if (!bVar1) {
            if (((byte)DAT_0091cbac & 0xf0) == 0x60) {
              *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
            }
            FUN_00516be0(0xdc12af2e,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
            return;
          }
          FUN_00544370(0xc);
          return;
        }
        goto LAB_00563710;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      goto LAB_005635e8;
    }
    if (uVar2 != 0x6000000) {
      if (uVar2 == 0x7000000) {
        FUN_00516be0(0x461a18ee,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
        return;
      }
      goto LAB_00563710;
    }
    if (bVar1) {
      FUN_00559d60();
      return;
    }
  }
  else {
    if (0xb000000 < uVar2) {
      if (uVar2 == 0xc000000) {
        if (bVar1) {
          FUN_005268b0(1);
          return;
        }
        *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
        if (*DAT_0091cadc != -0xd8) {
          for (iVar3 = *(int *)(*DAT_0091cadc + 0xe0); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
            FUN_005b7780(0x7e998e5e,0,iVar3,0xffffffff,0);
          }
        }
        if (*DAT_0091cadc == -0xd8) {
          return;
        }
        for (iVar3 = *(int *)(*DAT_0091cadc + 0xe0); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
          FUN_005b7780(0x461a18ee,0,iVar3,0xffffffff,0);
        }
        return;
      }
      if (uVar2 == 0xd000000) {
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        goto LAB_005635e8;
      }
LAB_00563710:
      FUN_0054f9a0();
      *(undefined1 *)(param_1 + 0x68) = 0;
      if (*(int *)(DAT_0091cb20 + 0x30) == 0) {
        return;
      }
      FUN_00559e40(*(int *)(DAT_0091cb20 + 0x30));
      return;
    }
    if (uVar2 == 0xb000000) {
      if ((((byte)DAT_0091cbac & 0xf0) == 0xa0) && (-1 < (char)(DAT_0091cbac >> 8))) {
        DAT_0091cbac = DAT_0091cbac & 0xfffffff1 | 1;
      }
      if (*DAT_0091cadc != -0xd8) {
        for (iVar3 = *(int *)(*DAT_0091cadc + 0xe0); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
          FUN_005b7780(0x7e998e5e,0,iVar3,0xffffffff,0);
        }
      }
      if (*DAT_0091cadc == -0xd8) {
        return;
      }
      iVar3 = *(int *)(*DAT_0091cadc + 0xe0);
      if (iVar3 == 0) {
        return;
      }
      do {
        FUN_005b7780(0x461a18ee,0,iVar3,0xffffffff,0);
        iVar3 = *(int *)(iVar3 + 4);
      } while (iVar3 != 0);
      return;
    }
    if (uVar2 == 0x9000000) {
      FUN_00516be0(0x40e73793,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
      FUN_00544370(3);
      return;
    }
    if (uVar2 != 0xa000000) goto LAB_00563710;
    if (bVar1) {
      *(undefined1 *)(DAT_0091cb20 + 0x25) = 1;
      *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 1;
      DAT_0091cbc8 = DAT_0091cbac & 0xf0;
      DAT_0091cbac = DAT_0091cbac & 0xffffffbf | 0xb0;
      FUN_00562c30();
      return;
    }
    *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
LAB_005635e8:
  FUN_00516be0(0x8867412d,uVar4,0xffffffff,0xff);
  return;
}

