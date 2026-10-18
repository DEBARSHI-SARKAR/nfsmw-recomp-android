/* speed.exe 0057f1d0 FUN_0057f1d0; analysis pseudocode, not buildable source.
 * calls 00461160 FUN_00461160
 * calls 0056be80 FUN_0056be80
 * calls 004611c0 FUN_004611c0
 * calls 0056bfc0 FUN_0056bfc0
 * calls 00460ca0 FUN_00460ca0
 */

void __thiscall
FUN_0057f1d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x414) = param_2;
  *(undefined4 *)(param_1 + 0x404) = param_3;
  if (0x9b < param_5) {
    param_5 = 0x9b;
  }
  *(int *)(param_1 + 0x40c) = param_5;
  iVar1 = param_1 + 0x100;
  if (DAT_0091cf84 == 0) {
    FUN_004611c0(iVar1);
  }
  else {
    FUN_0056bfc0(iVar1,0x200,param_4);
  }
  FUN_0056be80(param_1 + 0x304,0x100,iVar1);
  FUN_00460ca0(param_1,param_4,0x100);
  uVar2 = FUN_00461160(iVar1);
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 0x410) = 1;
  return;
}

