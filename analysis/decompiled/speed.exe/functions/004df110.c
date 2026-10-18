/* speed.exe 004df110 FUN_004df110; analysis pseudocode, not buildable source.
 * calls 004b1ec0 FUN_004b1ec0
 * calls 00829140 FUN_00829140
 * calls 0082c730 FUN_0082c730
 * calls 004bad20 FUN_004bad20
 */

void __thiscall FUN_004df110(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x148) = 2;
  FUN_0082c730(0xf000000);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if (((&DAT_009121d8)[*(int *)(param_1 + 0x13c)] != 0) &&
     (*(int *)((&DAT_009121d8)[*(int *)(param_1 + 0x13c)] + 0x38) == 3)) {
    FUN_00829140(*(undefined4 *)(*(int *)(param_1 + 0x13c) * 0x74 + 0x4c + param_1),0);
  }
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined1 *)(param_1 + 0x119) = 0;
  iVar1 = FUN_004b1ec0(1);
  if (iVar1 != 0) {
    FUN_004bad20(0,0);
  }
  return;
}

