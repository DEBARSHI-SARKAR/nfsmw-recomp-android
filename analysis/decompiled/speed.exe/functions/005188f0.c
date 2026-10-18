/* speed.exe 005188f0 FUN_005188f0; analysis pseudocode, not buildable source.
 * calls 007f3bd0 FUN_007f3bd0
 * calls 0057fd90 FUN_0057fd90
 * calls 006cbe40 FUN_006cbe40
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00461220 FUN_00461220
 * calls 00460ed0 FUN_00460ed0
 * calls 006cbe20 FUN_006cbe20
 * calls 00590150 FUN_00590150
 * calls 00465a70 FUN_00465a70
 */

void __thiscall FUN_005188f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0057fd90(0);
  if (DAT_0091cb20 != 0) {
    *(undefined4 *)(DAT_0091cb20 + 0x3c) = param_2;
    *(undefined4 *)(DAT_0091cb20 + 0xbc) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0xc0) = uVar1;
  }
  if (*(int *)(*(int *)(param_1 + 0xd0) + 8) == 0) {
    FUN_006cbe40(0,param_2,*(undefined4 *)(param_1 + 0xc0));
    uVar1 = FUN_006cbe20(param_2);
    FUN_00460ed0(param_1 + 0x5c,uVar1);
  }
  FUN_00461220(&DAT_0091c2b8,param_2,0x10);
  uVar1 = FUN_00465a70(*(undefined4 *)(param_1 + 0xc0),0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  FUN_00590150(uVar1,*(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0x54) = 0x10d;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x40) = 3;
  *(undefined2 *)(param_1 + 0x48) = 0;
  iVar2 = FUN_0064c9b0();
  if (iVar2 == 0) {
    FUN_007f3bd0(param_1 + 0x5c,(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x44),
                 *(undefined4 *)(*(int *)(param_1 + 0xd0) + 8),0);
  }
  return;
}

