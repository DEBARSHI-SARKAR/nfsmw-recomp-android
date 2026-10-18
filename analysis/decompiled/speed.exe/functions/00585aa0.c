/* speed.exe 00585aa0 FUN_00585aa0; analysis pseudocode, not buildable source.
 * calls 005859e0 FUN_005859e0
 * calls 0064ad70 FUN_0064ad70
 */

undefined4 FUN_00585aa0(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 != 0x30203) && (*param_1 != 0x30210)) {
    return 0;
  }
  uVar1 = FUN_0064ad70();
  FUN_005859e0(param_1,uVar1);
  return 1;
}

