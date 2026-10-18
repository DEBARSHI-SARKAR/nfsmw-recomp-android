/* speed.exe 007aed20 FUN_007aed20; analysis pseudocode, not buildable source.
 * calls 0056f250 FUN_0056f250
 * calls 007aec00 FUN_007aec00
 * calls 005816b0 FUN_005816b0
 * calls 0056f100 FUN_0056f100
 */

undefined4 FUN_007aed20(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007aec00(param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xc);
  }
  FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
  uVar2 = FUN_005816b0(param_1);
  uVar2 = FUN_0056f250(uVar2,param_1);
  return uVar2;
}

