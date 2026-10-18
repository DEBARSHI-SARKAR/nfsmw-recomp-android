/* speed.exe 00808896 FUN_00808896; analysis pseudocode, not buildable source.
 */

void FUN_00808896(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  int *local_8;
  
  (*DAT_009c6810)();
  iVar4 = param_1 + 0x546;
  param_1 = param_1 + 0x3a4;
  local_10 = 2;
  do {
    local_8 = &DAT_008c5484;
    local_c = 3;
    do {
      uVar2 = 0;
      piVar3 = local_8;
      do {
        iVar1 = ((int)((uint)*(byte *)(param_1 + uVar2) * piVar3[-1] + 0x80) >> 8) + *piVar3;
        if (0xff < iVar1) {
          iVar1 = 0xff;
        }
        if (iVar1 < 1) {
          iVar1 = 1;
        }
        *(char *)(iVar4 + uVar2) = (char)iVar1;
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (uVar2 < 5);
      local_8 = local_8 + 2;
      iVar4 = iVar4 + 5;
      local_c = local_c + -1;
    } while (local_c != 0);
    param_1 = param_1 + 0xb;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return;
}

