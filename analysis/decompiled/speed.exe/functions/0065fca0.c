/* speed.exe 0065fca0 FUN_0065fca0; analysis pseudocode, not buildable source.
 * calls 0065f740 FUN_0065f740
 * calls 00461970 FUN_00461970
 */

int __thiscall
FUN_0065fca0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  uVar1 = FUN_00461970(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x2000;
  uVar1 = FUN_00461970(param_2);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar2 = FUN_0065f740(*(undefined4 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x40) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x18);
  }
  return param_1;
}

