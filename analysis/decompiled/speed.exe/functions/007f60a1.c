/* speed.exe 007f60a1 FUN_007f60a1; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007f608c FUN_007f608c
 */

void __thiscall FUN_007f60a1(char *param_1,char *param_2,undefined4 *param_3)

{
  FUN_007f608c();
  _strncpy(param_1,param_2,0x40);
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x40) = *param_3;
    *(undefined4 *)(param_1 + 0x44) = param_3[1];
    *(undefined4 *)(param_1 + 0x48) = param_3[2];
    *(undefined4 *)(param_1 + 0x4c) = param_3[3];
  }
  return;
}

