/* speed.exe 0055fef0 FUN_0055fef0; analysis pseudocode, not buildable source.
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00598970 FUN_00598970
 * calls 00524920 FUN_00524920
 * calls 00460c70 FUN_00460c70
 * calls 00516be0 FUN_00516be0
 * calls 005582f0 FUN_005582f0
 * calls 0056bc10 FUN_0056bc10
 * calls 005258b0 FUN_005258b0
 * calls 00460d20 FUN_00460d20
 * calls 00541740 FUN_00541740
 * calls 00541140 FUN_00541140
 */

void __thiscall FUN_0055fef0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (param_2 < 0xc98356bb) {
      if (((param_2 != 0xc98356ba) && (param_2 != 0x34dc1bec)) && (param_2 != 0x35f8620b)) {
        return;
      }
    }
    else if (param_2 != 0xe1fde1d1) {
      return;
    }
  }
  if (param_2 < 0x72619779) {
    if (param_2 != 0x72619778) {
      if (param_2 < 0x34dc1bed) {
        if (param_2 == 0x34dc1bec) {
          FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x47ff4e7c,0xde6eff34,1);
          return;
        }
        if (param_2 == 0x226ec1f) {
          if (*(int *)(param_1 + 0x2c) != 0) {
            FUN_0056c6e0(*(int *)(param_1 + 0x2c));
            *(undefined4 *)(param_1 + 0x2c) = 0;
          }
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          if (*(int *)(param_1 + 0xf0) == 0) {
            uVar3 = 0xa19617bd;
          }
          else {
            uVar3 = 0x4984589;
          }
          uVar3 = FUN_0056bc10(uVar3);
          FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0x34dc1bec,0x34dc1bec,uVar3);
          return;
        }
        if (param_2 != 0xc407210) {
          return;
        }
      }
      else if (param_2 != 0x406415e3) {
        if (param_2 != 0x4b52b8a1) {
          return;
        }
        FUN_00516be0(0x226ec1f,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
        return;
      }
      FUN_00541740();
      return;
    }
    FUN_00541140(0xffffffff);
  }
  else if (param_2 < 0x9803f6e3) {
    if (param_2 == 0x9803f6e2) {
      FUN_005582f0();
      return;
    }
    if (param_2 == 0x911ab364) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x47ff4e7c,0xde6eff34,1);
      return;
    }
    if (param_2 == 0x911c0a4b) {
      FUN_00541140(1);
      return;
    }
  }
  else if (param_2 == 0xc98356ba) {
    if (*(char *)(param_1 + 0xe8) != '\0') {
      FUN_005258b0(1);
      *(undefined1 *)(param_1 + 0xe8) = 0;
      iVar2 = FUN_00460d20(&DAT_0091caac,&DAT_00890978);
      if (iVar2 != 0) {
        FUN_00460c70(&DAT_0091caac,&DAT_00890978);
      }
      FUN_00516be0();
      return;
    }
  }
  else if (param_2 == 0xe1fde1d1) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
    return;
  }
  return;
}

