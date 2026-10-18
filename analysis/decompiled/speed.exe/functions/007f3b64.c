/* speed.exe 007f3b64 FUN_007f3b64; analysis pseudocode, not buildable source.
 * calls 007f4cb7 FUN_007f4cb7
 * calls 007f3b25 FUN_007f3b25
 */

undefined4 * __thiscall
FUN_007f3b64(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007f3b25(0x304);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007f4cb7(param_2,param_3,param_4);
  }
  *param_1 = uVar2;
  return param_1;
}

