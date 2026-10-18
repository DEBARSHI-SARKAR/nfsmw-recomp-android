/* speed.exe 007f6152 FUN_007f6152; analysis pseudocode, not buildable source.
 * calls 007f6046 FUN_007f6046
 * calls 007f5ffc FUN_007f5ffc
 */

void __thiscall FUN_007f6152(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2;
  *param_1 = 0x10;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = FUN_007f5ffc(param_2 * 0x60);
  param_1[4] = uVar2;
  param_2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_007f6046(*(undefined4 *)(param_2 * 8 + param_3),*(undefined4 *)(param_2 * 8 + 4 + param_3)
                   ,0,0,param_4);
      param_2 = param_2 + 1;
    } while (param_2 < uVar1);
  }
  return;
}

