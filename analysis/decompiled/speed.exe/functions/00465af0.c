/* speed.exe 00465af0 FUN_00465af0; analysis pseudocode, not buildable source.
 * calls 00461d00 FUN_00461d00
 * calls 0065d8b0 FUN_0065d8b0
 * calls 004655f0 FUN_004655f0
 * calls 0065f860 FUN_0065f860
 */

int __thiscall FUN_00465af0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x264) = 0;
  if (param_3 != 0) {
    *(undefined **)(param_1 + 0x264) = &DAT_00461b30;
  }
  param_3 = 0;
  uVar1 = FUN_0065f860(param_2,&param_3,0);
  FUN_0065d8b0();
  FUN_00461d00(param_2,uVar1,param_3);
  FUN_004655f0(uVar1);
  return param_1;
}

