/* speed.exe 007f6d8c FUN_007f6d8c; analysis pseudocode, not buildable source.
 * calls 007f60d5 FUN_007f60d5
 * calls 007f60a1 FUN_007f60a1
 * calls 007f6337 FUN_007f6337
 * calls 007f6455 FUN_007f6455
 * calls 007f6152 FUN_007f6152
 */

void __thiscall FUN_007f6d8c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 0x108) = 2;
  FUN_007f6337();
  FUN_007f60d5(param_2);
  puVar1 = PTR_DAT_00908240;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0x40;
    FUN_007f60a1(puVar1,0);
    FUN_007f6152(param_3,param_4,0);
  }
  FUN_007f6455();
  return;
}

