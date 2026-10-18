/* speed.exe 007b7080 FUN_007b7080; analysis pseudocode, not buildable source.
 * calls 00516c50 FUN_00516c50
 * calls 0045d3a0 FUN_0045d3a0
 * calls 005257f0 FUN_005257f0
 * calls 007a60e0 FUN_007a60e0
 * calls 007aeb60 FUN_007aeb60
 * calls 007b5870 FUN_007b5870
 * calls 007aa320 FUN_007aa320
 * calls 007aa350 FUN_007aa350
 * calls 007aeb90 FUN_007aeb90
 * calls 00587d30 FUN_00587d30
 * calls 007aa380 FUN_007aa380
 * calls 00525940 FUN_00525940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_007b7080(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0x35f8620b) {
    *(undefined1 *)((int)param_1 + 0x161) = 1;
    (**(code **)(*param_1 + 0xc))();
  }
  else if ((param_2 == 0x9120409e) || (param_2 == 0xb5971bf1)) {
    param_1[0x6e] = DAT_00925b14;
  }
  FUN_00587d30(param_2,param_3,param_4,param_5);
  if (param_2 < 0xb5af2462) {
    if (param_2 == 0xb5af2461) {
      PTR_DAT_00905ed4 = (undefined *)param_1[4];
      FUN_005257f0();
      return;
    }
    if (param_2 == 0x406415e3) {
      iVar3 = FUN_0045d3a0(0);
      if (iVar3 != param_1[0x3b]) {
        iVar3 = (**(code **)(*param_1 + 0x14))();
        if (iVar3 != 0) {
          if (((byte)*(uint *)(iVar3 + 0x20) & 0xf) == 2) {
            FUN_007aa320();
            return;
          }
          uVar4 = *(uint *)(iVar3 + 0x20) & 0xf0;
          if (uVar4 == 0x20) {
            FUN_007aa350();
            return;
          }
          if (uVar4 == 0x10) {
            uVar2 = (**(code **)(*param_1 + 0x14))();
            iVar3 = FUN_007aeb90(uVar2);
            if (iVar3 != 0) {
              FUN_007aeb60(iVar3);
              iVar3 = (**(code **)(*param_1 + 0x18))();
              if (iVar3 != 0) {
                *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) & 0xf;
              }
            }
            FUN_007aa380();
            return;
          }
        }
        uVar2 = (**(code **)(*param_1 + 0x14))();
        iVar3 = FUN_007aeb90(uVar2);
        if (iVar3 != 0) {
          iVar3 = (**(code **)(*param_1 + 0x1c))(*(undefined4 *)(iVar3 + 0xc));
          param_1[0x54] = iVar3;
        }
        FUN_00516c50(0x91dfdf84,param_1[4],0xff);
        return;
      }
    }
    else {
      if (param_2 == 0x5e6ea975) {
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined1 *)((int)param_1 + 0x119) = 1;
        *(undefined1 *)((int)param_1 + 0x11a) = 0;
        param_1[0x44] = 0;
        return;
      }
      if (param_2 == 0x91dfdf84) {
        if (param_1[0x54] != 0) {
          puVar1 = (uint *)(*(int *)(param_1[0x54] + 0x4c) + 0x20);
          *puVar1 = *puVar1 & 0xf;
          param_1[0x54] = 0;
        }
        uVar2 = (**(code **)(*param_1 + 0x14))();
        FUN_007b5870(uVar2);
        iVar3 = (**(code **)(*param_1 + 0x14))();
        *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) & 0xf | 0x20;
        (**(code **)(*param_1 + 0xc))();
      }
    }
  }
  else if (param_2 == 0xc519bfbf) {
    uVar4 = param_1[0x52];
    if ((uVar4 < 0x201) || ((0x207 < uVar4 && (uVar4 != 0x307)))) {
      if (param_1[0xe] == 0) {
        DAT_009b9e84 = 0;
      }
      else {
        DAT_009b9e84 = (**(code **)(param_1[0xb] + 0x24))(param_1[0xe]);
      }
      _DAT_009b9e80 = param_1[0x53] << 0x10 | param_1[0x52];
      PTR_DAT_00905e34 = (undefined *)param_1[4];
      FUN_00525940();
      return;
    }
  }
  else if (param_2 == 0xc98356ba) {
    if (((char)param_1[0x6d] != '\0') &&
       (_DAT_00894b58 < (float)(DAT_00925b14 - param_1[0x6e]) * _DAT_00890984)) {
      *(undefined1 *)(param_1 + 0x6d) = 0;
      (**(code **)(*param_1 + 0xc))();
      return;
    }
  }
  else if (param_2 == 0xcf91aacd) {
    FUN_007a60e0();
    return;
  }
  return;
}

