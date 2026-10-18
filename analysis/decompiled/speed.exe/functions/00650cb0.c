/* speed.exe 00650cb0 FUN_00650cb0; analysis pseudocode, not buildable source.
 * calls 00650410 FUN_00650410
 */

void __fastcall FUN_00650cb0(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 local_1;
  
  uVar4 = 0;
  local_1 = 0x80;
  uVar2 = *(uint *)(param_1 + 4) & 0x3f;
  do {
    while( true ) {
      *(undefined1 *)(param_1 + 0x18 + uVar2) = local_1;
      uVar2 = uVar2 + 1;
      local_1 = 0;
      uVar1 = local_1;
      local_1 = 0;
      if (uVar2 != 0x40) break;
      FUN_00650410();
      uVar2 = 0;
    }
    local_1 = uVar1;
  } while (uVar2 != 0x38);
  uVar2 = *(uint *)(param_1 + 4);
  *(char *)(param_1 + 0x51) = (char)(uVar2 >> 5);
  *(char *)(param_1 + 0x50) = *(char *)(param_1 + 4) << 3;
  *(char *)(param_1 + 0x53) = (char)(uVar2 >> 0x15);
  *(char *)(param_1 + 0x52) = (char)(uVar2 >> 0xd);
  *(byte *)(param_1 + 0x54) = (byte)(uVar2 >> 0x1d);
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  FUN_00650410();
  pcVar3 = (char *)(param_1 + 0x69);
  uVar2 = 0;
  do {
    if ((uVar2 & 3) == 0) {
      uVar4 = *(uint *)(param_1 + 8 + ((int)uVar2 >> 2) * 4);
    }
    *(char *)(param_1 + 0x59 + uVar2) = (char)uVar4;
    *pcVar3 = s_<0123456789abcdef_008f850b[(uVar4 >> 4 & 0xf) + 1];
    pcVar3[1] = s_<0123456789abcdef_008f850b[(uVar4 & 0xf) + 1];
    pcVar3 = pcVar3 + 2;
    uVar4 = uVar4 >> 8;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  *pcVar3 = '\0';
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}

