/* speed.exe 00562b80 FUN_00562b80; analysis pseudocode, not buildable source.
 * calls 00660100 FUN_00660100
 * calls 006cbe20 FUN_006cbe20
 * calls 00560dc0 FUN_00560dc0
 * calls 007f3c41 FUN_007f3c41
 * calls 00460ed0 FUN_00460ed0
 * calls 0064c9b0 FUN_0064c9b0
 */

void __thiscall FUN_00562b80(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0091cb20 != 0) {
    *(undefined4 *)(DAT_0091cb20 + 0x3c) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0xbc) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0xc0) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar1 = FUN_006cbe20(&DAT_0089b6d8);
  FUN_00460ed0(param_1 + 0x5c,uVar1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x40) = 7;
  *(undefined2 *)(param_1 + 0x48) = 0;
  iVar2 = FUN_0064c9b0();
  if (iVar2 == 0) {
    iVar2 = param_1 + 0x5c;
    if (param_2 != 0) {
      iVar2 = param_2;
    }
    FUN_007f3c41(iVar2,param_3);
    return;
  }
  uVar1 = FUN_00660100(8,9);
  FUN_00560dc0(uVar1);
  return;
}

