/* speed.exe 0065b6e0 FUN_0065b6e0; analysis pseudocode, not buildable source.
 * calls 00650410 FUN_00650410
 * calls 00460c50 FUN_00460c50
 */

void __thiscall FUN_0065b6e0(int param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0x67452301;
    *(undefined4 *)(param_1 + 0xc) = 0xefcdab89;
    *(undefined4 *)(param_1 + 0x10) = 0x98badcfe;
    *(undefined4 *)(param_1 + 0x14) = 0x10325476;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if (param_3 < 0) {
    param_3 = FUN_00460c50(param_2);
  }
  uVar1 = *(uint *)(param_1 + 4) & 0x3f;
  if (0 < param_3) {
    do {
      *(undefined1 *)(param_1 + 0x18 + uVar1) = *param_2;
      uVar1 = uVar1 + 1;
      param_2 = param_2 + 1;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      if (uVar1 == 0x40) {
        FUN_00650410();
        uVar1 = 0;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

