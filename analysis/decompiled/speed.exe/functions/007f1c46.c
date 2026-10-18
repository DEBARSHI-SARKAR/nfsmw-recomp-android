/* speed.exe 007f1c46 FUN_007f1c46; analysis pseudocode, not buildable source.
 * calls 007f1bf7 FUN_007f1bf7
 * calls 007f1932 FUN_007f1932
 * calls 007f2f16 FUN_007f2f16
 * calls 007f191d FUN_007f191d
 */

undefined4 * __thiscall FUN_007f1c46(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 & 2) == 0) {
    FUN_007f2f16();
    puVar1 = param_1;
    if ((param_2 & 1) != 0) {
      FUN_007f1932(param_1,0x7c);
    }
  }
  else {
    puVar1 = param_1 + -1;
    FUN_007f1bf7(param_1,0x7c,*puVar1,FUN_007f2f16);
    if ((param_2 & 1) != 0) {
      FUN_007f191d(puVar1);
    }
  }
  return puVar1;
}

