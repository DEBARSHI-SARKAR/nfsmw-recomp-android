/* speed.exe 00790df0 FUN_00790df0; analysis pseudocode, not buildable source.
 * calls 00837b70 FUN_00837b70
 * calls 00837100 FUN_00837100
 * calls 00837090 FUN_00837090
 * calls 00836fd0 FUN_00836fd0
 * calls 00839320 FUN_00839320
 * calls 00837130 FUN_00837130
 * calls 00837190 FUN_00837190
 * calls 00838260 FUN_00838260
 * calls 008392e0 FUN_008392e0
 * calls 008376d0 FUN_008376d0
 * calls 00838360 FUN_00838360
 * calls 00572e80 FUN_00572e80
 * calls 0083d7e0 FUN_0083d7e0
 * calls 007ec1b2 FUN_007ec1b2
 * calls 0083d9c0 FUN_0083d9c0
 */

void __fastcall FUN_00790df0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  *(undefined1 *)(param_1 + 0x975) = 0;
  if (*(int *)(param_1 + 0xf8) != 0) {
    *(undefined1 *)(param_1 + 0x968) = 0;
    DAT_0091ca8c = 0;
    FUN_00572e80(0,0);
    FUN_00572e80(1,0);
    FUN_00572e80(2,0);
    FUN_00572e80(3,0);
    if (*(int *)(param_1 + 0xf8) == 0) {
      local_4 = 0;
    }
    else {
      local_4 = FUN_00838260(*(int *)(param_1 + 0xf8));
    }
    iVar4 = 0;
    if (0 < local_4) {
      do {
        if ((*(int *)(param_1 + 0xf8) != 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) {
          iVar1 = FUN_008376d0(*(int *)(param_1 + 0xf8),iVar4);
          if (iVar1 != 0) {
            uVar2 = FUN_00837b70(iVar1);
            if ((uVar2 & 0x400000) != 0) {
              uVar3 = FUN_00837190(iVar1,1,0,0);
              FUN_00838360(*(undefined4 *)(param_1 + 0xf8),uVar3);
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_4);
    }
    if (*(int *)(param_1 + 0xf8) != 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
      FUN_00837090(*(int *)(param_1 + 0xf8));
    }
    FUN_00837100(*(undefined4 *)(param_1 + 0xf8),0,0);
    FUN_00836fd0(*(undefined4 *)(param_1 + 0xf8),0,0);
    FUN_00837130(*(undefined4 *)(param_1 + 0xf8),0,0);
    FUN_008392e0(*(undefined4 *)(param_1 + 0xf8));
    FUN_00839320(*(undefined4 *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)(param_1 + 0x968) = 0;
    DAT_0091ca8c = 0;
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_0083d9c0(*(int *)(param_1 + 0x108),0);
      FUN_0083d7e0(*(undefined4 *)(param_1 + 0x108));
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    puVar5 = (undefined4 *)(param_1 + 0x55);
    for (iVar4 = 0x28; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_007ec1b2();
    return;
  }
  return;
}

