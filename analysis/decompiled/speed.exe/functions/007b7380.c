/* speed.exe 007b7380 FUN_007b7380; analysis pseudocode, not buildable source.
 * calls 007a9e60 FUN_007a9e60
 * calls 007a4ac0 FUN_007a4ac0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 007b7080 FUN_007b7080
 * calls 007aa320 FUN_007aa320
 * calls 007aeca0 FUN_007aeca0
 * calls 00747ae0 FUN_00747ae0
 * calls 00525940 FUN_00525940
 * calls 007a4af0 FUN_007a4af0
 * calls 00652ad0 _malloc
 */

void __thiscall
FUN_007b7380(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  if (param_2 != 0x406415e3) {
    FUN_007b7080(param_2,param_3,param_4,param_5);
  }
  if (param_2 < 0x911ab365) {
    if (param_2 == 0x911ab364) {
      uVar1 = param_1[0x52];
      if (uVar1 != 0x307) {
        if ((0x401 < uVar1) && (uVar1 < 0x40a)) {
          FUN_007a4af0();
          FUN_00525940(PTR_s_CustomizeGenericTop_fng_00905eac,param_1[0x52] << 0x10 | param_1[0x53],
                       0,0);
          return;
        }
        FUN_00525940(PTR_s_CustomizeCategory_fng_00905ea8,uVar1 << 0x10 | param_1[0x53],0,0);
        return;
      }
      if (DAT_009b9eb0 != '\0') {
        *(undefined1 *)(param_1 + 0x72) = 1;
        FUN_00525940(PTR_s_CustomizeCategory_fng_00905ea8,param_1[0x53] | 0x3070000,0,0);
        return;
      }
    }
    else if (param_2 == 0x406415e3) {
      iVar2 = FUN_0045d3a0(0);
      if (iVar2 != param_1[0x3b]) {
        uVar1 = param_1[0x52];
        if (uVar1 == 0x307) {
          if (DAT_009b9eb0 == '\0') {
            return;
          }
          iVar2 = (**(code **)(*param_1 + 0x14))();
          if ((iVar2 == 0) || (((byte)*(undefined4 *)(iVar2 + 0x20) & 0xf) != 2)) {
            if (DAT_009ba080 != 0) {
              FUN_007a4af0();
            }
            pvVar4 = _malloc(0x2c);
            if (pvVar4 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_007a9e60(iVar2);
            }
            FUN_007a4ac0(uVar5);
            FUN_00525940(PTR_s_CustomHUDColor_fng_00905ec8,param_1[0x53] << 0x10 | param_1[0x52],0,0
                        );
            return;
          }
        }
        else {
          if ((uVar1 < 0x402) || (0x409 < uVar1)) {
            FUN_007b7080(0x406415e3,param_3,param_4,param_5);
            return;
          }
          iVar2 = (**(code **)(*param_1 + 0x14))();
          if ((iVar2 == 0) || (((byte)*(undefined4 *)(iVar2 + 0x20) & 0xf) != 2)) {
            iVar3 = FUN_00747ae0(0x6212682b,0);
            if (iVar3 == 0) {
              FUN_007b7080(0x406415e3,param_3,param_4,param_5);
              return;
            }
            pvVar4 = _malloc(0x2c);
            if (pvVar4 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_007a9e60(iVar2);
            }
            FUN_007a4ac0(uVar5);
            FUN_00525940(PTR_s_Paint_fng_00905ebc,param_1[0x53] << 0x10 | param_1[0x52],0,0);
            return;
          }
        }
        FUN_007aa320();
        return;
      }
    }
    else if (((param_2 == 0x5a928018) && (iVar2 = (**(code **)(*param_1 + 0x18))(), iVar2 != 0)) &&
            (iVar3 = FUN_007aeca0(iVar2), iVar3 == 0)) {
      *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) & 0xf;
      (**(code **)(*param_1 + 0xc))();
      return;
    }
  }
  else if (((param_2 == 0xcf91aacd) && (param_1[0x52] == 0x307)) && (DAT_009b9eb0 != '\0')) {
    *(undefined1 *)(param_1 + 0x72) = 1;
  }
  return;
}

