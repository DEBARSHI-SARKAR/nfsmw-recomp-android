/* speed.exe 00575710 FUN_00575710; analysis pseudocode, not buildable source.
 * calls 00515960 FUN_00515960
 * calls 00514fd0 FUN_00514fd0
 * calls 00515520 FUN_00515520
 */

void __fastcall FUN_00575710(char *param_1)

{
  byte bVar1;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_00515960(&local_18,&local_1c);
  if (*param_1 == '\0') {
    FUN_00514fd0(*(undefined4 *)(param_1 + 0x44),&local_c,local_4);
    if (local_c <= local_18) {
      FUN_00514fd0(*(undefined4 *)(param_1 + 0x44),&local_c,local_4);
      local_14 = local_c;
      FUN_00515520(*(undefined4 *)(param_1 + 0x44),&local_10,local_8);
      bVar1 = local_10 + local_14 < local_18 |
              (byte)((ushort)((ushort)(NAN(local_10 + local_14) || NAN(local_18)) << 10) >> 8);
      goto LAB_005757fa;
    }
  }
  else {
    FUN_00514fd0(*(undefined4 *)(param_1 + 0x44),&local_c,&local_14);
    if (local_14 <= local_1c) {
      FUN_00514fd0(*(undefined4 *)(param_1 + 0x44),local_8,&local_14);
      local_c = local_14;
      FUN_00515520(*(undefined4 *)(param_1 + 0x44),local_4,&local_10);
      bVar1 = local_10 + local_c < local_1c |
              (byte)((ushort)((ushort)(NAN(local_10 + local_c) || NAN(local_1c)) << 10) >> 8);
LAB_005757fa:
      if ((POPCOUNT(bVar1) & 1U) != 0) {
        param_1[0x58] = '\x10';
        param_1[0x59] = '\'';
        param_1[0x5a] = '\0';
        param_1[0x5b] = '\0';
      }
      return;
    }
  }
  param_1[0x58] = -0x10;
  param_1[0x59] = -0x28;
  param_1[0x5a] = -1;
  param_1[0x5b] = -1;
  return;
}

