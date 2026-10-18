/* speed.exe 007f6046 FUN_007f6046; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007f6021 FUN_007f6021
 */

void __thiscall
FUN_007f6046(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  FUN_007f6021();
  _strncpy(param_1,param_2,0x40);
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  *(undefined4 *)(param_1 + 0x48) = param_5;
  if (param_6 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x4c) = *param_6;
    *(undefined4 *)(param_1 + 0x50) = param_6[1];
    *(undefined4 *)(param_1 + 0x54) = param_6[2];
    *(undefined4 *)(param_1 + 0x58) = param_6[3];
  }
  param_1[0x5c] = '\0';
  return;
}

