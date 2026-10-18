/* speed.exe 007f60f4 FUN_007f60f4; analysis pseudocode, not buildable source.
 * calls 007f6046 FUN_007f6046
 * calls 007f5ffc FUN_007f5ffc
 */

void __thiscall
FUN_007f60f4(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_1 = 0x10;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = FUN_007f5ffc(param_2 * 0x60);
  param_1[4] = uVar1;
  if (param_2 != 0) {
    do {
      FUN_007f6046(*(undefined4 *)(param_3 + uVar2 * 4),param_4,0,0,param_5);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return;
}

