/* speed.exe 00841220 FUN_00841220; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 00841010 FUN_00841010
 * calls 008401f0 FUN_008401f0
 */

int FUN_00841220(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5,
                uint param_6)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_6 < 5000) {
    param_6 = 5000;
  }
  *(uint *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0x183c) = 0;
  *(undefined4 *)(param_1 + 0x1838) = param_3;
  *(undefined4 *)(param_1 + 0x1840) = param_3;
  FUN_008401f0();
  *(undefined4 *)(param_1 + 0x1898) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((param_4 != 0) && (iVar1 = FUN_00841010(3,param_4,param_5), iVar1 < 0)) {
    return iVar1;
  }
  _strncpy((char *)(param_1 + 0x20b8),param_2,0x40);
  *(undefined1 *)(param_1 + 0x20f7) = 0;
  *(undefined4 *)(param_1 + 8) = 0x696e6974;
  return iVar1;
}

