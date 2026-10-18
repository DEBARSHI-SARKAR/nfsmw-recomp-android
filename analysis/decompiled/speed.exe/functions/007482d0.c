/* speed.exe 007482d0 FUN_007482d0; analysis pseudocode, not buildable source.
 * calls 00461970 FUN_00461970
 * calls 0065f740 FUN_0065f740
 */

int __thiscall FUN_007482d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00461970(param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar2 = FUN_0065f740(uVar1);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
  return param_1;
}

