/* speed.exe 00852570 FUN_00852570; analysis pseudocode, not buildable source.
 * calls 00852570 FUN_00852570
 */

void FUN_00852570(int param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (DAT_009c3e10 == 0) {
    DAT_009c3e10 = 1;
    FUN_00852570(&DAT_009c3d08,"hello world",0xffffffff,10);
  }
  if (param_4 < 0) {
    param_4 = -param_4;
  }
  else {
    iVar2 = 0;
    do {
      *(char *)(iVar2 + param_1) = (char)iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
    *(undefined1 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  bVar6 = false;
  if (param_3 < 0) {
    param_3 = 0;
    if (*param_2 == '\0') {
      return;
    }
    do {
      param_3 = param_3 + 1;
    } while (param_2[param_3] != '\0');
    bVar6 = param_3 < 0;
  }
  if (param_3 != 0 && !bVar6) {
    uVar5 = 0;
    uVar4 = 0;
    if (0 < param_4 * 0x100) {
      uVar3 = 0;
      do {
        uVar5 = uVar5 >> 8 ^
                *(uint *)(&DAT_008c7070 + ((byte)param_2[(int)uVar4 % param_3] ^ uVar3) * 4);
        bVar1 = *(byte *)((uVar4 & 0xff) + param_1);
        uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_008c7070 + (uVar5 & 0xff ^ (uint)bVar1) * 4);
        uVar3 = uVar5 & 0xff;
        *(undefined1 *)((uVar4 & 0xff) + param_1) = *(undefined1 *)(uVar3 + param_1);
        uVar4 = uVar4 + 1;
        *(byte *)(uVar3 + param_1) = bVar1;
      } while ((int)uVar4 < param_4 * 0x100);
    }
  }
  return;
}

