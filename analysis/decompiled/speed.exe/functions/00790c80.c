/* speed.exe 00790c80 FUN_00790c80; analysis pseudocode, not buildable source.
 * calls 00837100 FUN_00837100
 * calls 00837090 FUN_00837090
 * calls 00836fd0 FUN_00836fd0
 * calls 00837130 FUN_00837130
 * calls 00460c70 FUN_00460c70
 * calls 00839440 FUN_00839440
 * calls 00837190 FUN_00837190
 * calls 008370d0 FUN_008370d0
 * calls 00838260 FUN_00838260
 * calls 008376d0 FUN_008376d0
 * calls 00572e80 FUN_00572e80
 * calls 0083d7e0 FUN_0083d7e0
 * calls 00838160 FUN_00838160
 * calls 0083d9c0 FUN_0083d9c0
 */

void __fastcall FUN_00790c80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  if (*(char *)(param_1 + 0x975) == '\0') {
    iVar4 = 0;
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
    local_8 = 0;
    if (0 < local_4) {
      iVar5 = param_1 + 0x55;
      do {
        if ((((*(int *)(param_1 + 0xf8) != 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) &&
            (iVar1 = FUN_008376d0(*(int *)(param_1 + 0xf8),iVar4), iVar1 != 0)) &&
           ((iVar2 = FUN_00838160(iVar1), iVar2 != 0 && (local_8 < 10)))) {
          uVar3 = FUN_00837190(iVar1);
          FUN_00460c70(iVar5,uVar3);
          local_8 = local_8 + 1;
          iVar5 = iVar5 + 0x10;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_4);
    }
    FUN_00837090(*(undefined4 *)(param_1 + 0xf8));
    FUN_00837100(*(undefined4 *)(param_1 + 0xf8),0,0);
    FUN_00836fd0(*(undefined4 *)(param_1 + 0xf8),0,0);
    FUN_00837130(*(undefined4 *)(param_1 + 0xf8),0,0);
    FUN_008370d0(*(undefined4 *)(param_1 + 0xf8),0,0);
    *(undefined1 *)(param_1 + 0x968) = 0;
    DAT_0091ca8c = 0;
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_0083d9c0(*(int *)(param_1 + 0x108),0);
      FUN_0083d7e0(*(undefined4 *)(param_1 + 0x108));
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_00839440(*(undefined4 *)(param_1 + 0xf8));
    *(undefined1 *)(param_1 + 0x975) = 1;
  }
  return;
}

