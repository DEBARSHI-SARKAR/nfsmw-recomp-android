/* speed.exe 0071dff0 FUN_0071dff0; analysis pseudocode, not buildable source.
 * calls 004bad20 FUN_004bad20
 * calls 0070ae00 FUN_0070ae00
 * calls 0070ae40 FUN_0070ae40
 * calls 007075c0 FUN_007075c0
 * calls 004eb7d0 FUN_004eb7d0
 * calls 00708e60 FUN_00708e60
 * calls 006ffa30 FUN_006ffa30
 * calls 006ff9e0 FUN_006ff9e0
 * calls 006ff8e0 FUN_006ff8e0
 * calls 00704390 FUN_00704390
 * calls 004b1ce0 FUN_004b1ce0
 * calls 007c4b80 FUN_007c4b80
 * calls 00716e30 FUN_00716e30
 * calls 00712bf0 FUN_00712bf0
 * calls 004b2480 FUN_004b2480
 * calls 007021e0 FUN_007021e0
 * calls 004ccab0 FUN_004ccab0
 * calls 004b2420 FUN_004b2420
 * calls 004b2450 FUN_004b2450
 * calls 004b22a0 FUN_004b22a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071dff0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_10;
  int local_c;
  
  if (((((*(uint *)(param_1 + 0x28) >> 1 & 1) == 0) &&
       (FUN_006ff9e0(), *(int *)(param_1 + 0x2c) != 0)) && (DAT_008f8700 != 0)) &&
     (*(int *)(param_1 + 0x44) != 0)) {
    uVar1 = FUN_004eb7d0(0xc,2);
    FUN_004b2420(uVar1);
    FUN_004b2450(&local_1c);
    if ((_DAT_00993f58 & 1) == 0) {
      _DAT_00993f58 = _DAT_00993f58 | 1;
      DAT_00993f54 = local_1c;
    }
    if (0 < local_1c) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
      DAT_00993f54 = local_1c;
      iVar2 = FUN_004b2480(local_18,&local_10);
      if (-1 < iVar2) {
        iVar2 = FUN_007021e0();
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_007075c0(local_18);
        }
        switch(local_10) {
        case 0:
        case 1:
          *(uint *)(*(int *)(*(int *)(param_1 + 0x44) + 0xc) + 8) =
               -(uint)((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) & 0x7fff;
          break;
        case 2:
          uVar4 = *(int *)(param_1 + 0x8c) + (local_c - DAT_00993f50);
          DAT_00993f50 = local_c;
          *(uint *)(param_1 + 0x8c) = uVar4;
          if ((3000 < uVar4) && ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0)) {
            FUN_00712bf0(*(undefined4 *)(param_1 + 0x88),0);
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
          }
          if ((*(uint *)(param_1 + 0x28) >> 5 & 1) == 0) {
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0xc) + 8) = 0;
            uVar1 = 0;
          }
          else {
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0xc) + 8) = 0x7fff;
            uVar1 = FUN_004eb7d0(0,3);
          }
          FUN_004b22a0(uVar1);
          local_20 = FUN_006ffa30((int)*(short *)(param_1 + 0x94));
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 0xc) + 0xc) =
               *(undefined4 *)(param_1 + 0x90);
          if (*(char *)(param_1 + 4) == '\0') {
            uVar1 = 0;
          }
          else {
            uVar1 = FUN_007c4b80();
          }
          FUN_004bad20(uVar1,0);
          FUN_00716e30();
          break;
        case 3:
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x24) = DAT_00925ae8;
            *(undefined1 *)(iVar2 + 0x18) = 0;
          }
          DAT_00993f50 = 0;
        }
      }
      iVar2 = FUN_007021e0();
      if (iVar2 != 0) {
        FUN_00708e60(&local_20,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                     &LAB_0070e680);
        FUN_0070ae00(&local_20,local_20,*(undefined4 *)(param_1 + 0x80));
      }
      *(undefined4 *)(param_1 + 0x40) = DAT_00925ae8;
      return;
    }
    if (local_1c == 0) {
      if (0 < DAT_00993f54) {
        iVar2 = *(int *)(param_1 + 0x88);
        if (iVar2 == 0) {
          DAT_00993f54 = 0;
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffff3;
          return;
        }
        if (*(int *)(iVar2 + 0x18) == 0) {
          *(undefined4 *)(iVar2 + 0x18) = DAT_00925ae8;
          if ((*(uint *)(param_1 + 0x28) >> 4 & 1) == 0) {
            FUN_00712bf0(*(undefined4 *)(param_1 + 0x88),0);
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
          }
          FUN_00712bf0(*(undefined4 *)(param_1 + 0x88),1);
          FUN_006ff8e0(1);
        }
        fVar5 = (float10)FUN_00704390(*(undefined4 *)(param_1 + 0x88));
        if (fVar5 < (float10)_DAT_00890968) {
          *(undefined4 *)(param_1 + 0x40) = DAT_00925ae8;
          iVar2 = *(int *)(param_1 + 0x88);
          DAT_00993f54 = local_1c;
          if (iVar2 == 0) {
            return;
          }
          FUN_004ccab0();
          FUN_004b1ce0(iVar2);
          *(undefined4 *)(param_1 + 0x88) = 0;
          uVar4 = 0;
          iVar2 = FUN_007021e0();
          if (iVar2 != 0) {
            do {
              *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x7c) + uVar4 * 4) + 0x18) = 0;
              uVar4 = uVar4 + 1;
              uVar3 = FUN_007021e0();
            } while (uVar4 < uVar3);
          }
          FUN_0070ae40();
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffff3;
          return;
        }
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0xc;
      }
      FUN_00716e30();
    }
  }
  return;
}

