/* speed.exe 00517f80 FUN_00517f80; analysis pseudocode, not buildable source.
 * calls 00461180 FUN_00461180
 */

int __thiscall FUN_00517f80(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_00461180(param_1,param_2);
  uVar1 = 0;
  *(uint *)(param_1 + 0x800) = param_3;
  if (param_3 != 0) {
    iVar2 = param_1 + 0x804;
    do {
      FUN_00461180(iVar2,*(undefined4 *)(param_4 + uVar1 * 4));
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x100;
    } while (uVar1 < param_3);
    return param_1;
  }
  return param_1;
}

