/* speed.exe 006609f0 FUN_006609f0; analysis pseudocode, not buildable source.
 * calls 00660190 FUN_00660190
 * calls 00460dd0 FUN_00460dd0
 * calls 00660100 FUN_00660100
 * calls 0045cd20 __break
 * calls 00461970 FUN_00461970
 * calls 00460c50 FUN_00460c50
 * calls 00660230 FUN_00660230
 * calls 0065fe90 FUN_0065fe90
 */

int __thiscall
FUN_006609f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  *(undefined4 *)(param_1 + 0x1c) = DAT_008f815c;
  *(undefined4 *)(param_1 + 0x20) = 0x7ffffff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_8 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = *param_8;
    *(undefined4 *)(param_1 + 0x20) = param_8[1];
    *(undefined4 *)(param_1 + 0x24) = param_8[2];
    *(undefined4 *)(param_1 + 0x28) = param_8[3];
  }
  uVar1 = FUN_00461970(param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(int *)(param_1 + 0x3c) = DAT_008f8164;
  *(undefined4 *)(param_1 + 0x44) = 0;
  DAT_008f8164 = DAT_008f8164 + 1;
  if (100000 < DAT_008f8164) {
    DAT_008f8164 = 1;
  }
  if (DAT_009258d8 != 0) {
    iVar2 = FUN_00460c50(param_3);
    if (DAT_009258d8 != 0) {
      FUN_0065fe90(iVar2 + 1,8,7);
    }
    FUN_00660230(param_3,iVar2 + 1,7);
    return param_1;
  }
  if (DAT_009258d4 != 0) {
    uVar1 = FUN_00660100(8,7);
    FUN_00660190(local_80,uVar1,7);
    iVar2 = FUN_00460dd0(local_80,param_3);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __break();
    }
  }
  return param_1;
}

