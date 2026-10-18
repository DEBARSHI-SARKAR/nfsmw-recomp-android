/* speed.exe 00723870 FUN_00723870; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00723870(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_3[1];
  param_2 = param_2 * 100;
  *(undefined4 *)(param_2 + 0xc0 + param_1) = *param_3;
  *(undefined4 *)(param_2 + 0xc4 + param_1) = uVar2;
  iVar1 = param_2 + 0xc0 + param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  *(undefined2 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x2b0) = 1;
  return;
}

