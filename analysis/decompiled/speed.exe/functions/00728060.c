/* speed.exe 00728060 FUN_00728060; analysis pseudocode, not buildable source.
 * calls 007242a0 FUN_007242a0
 */

void __thiscall FUN_00728060(int *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_3) {
    do {
      sVar1 = *(short *)(param_2 + iVar6 * 2);
      pbVar3 = (byte *)(((int)sVar1 >> 3) + param_1[0x213]);
      *pbVar3 = *pbVar3 | '\x01' << ((byte)sVar1 & 7);
      if ((char)param_1[0x2c] != '\0') {
        uVar2 = FUN_007242a0((int)*(short *)(param_2 + iVar6 * 2),&DAT_008a87a4);
        *(undefined2 *)(param_2 + iVar6 * 2) = uVar2;
      }
      iVar5 = 0;
      if (0 < param_1[1]) {
        iVar4 = *param_1;
        do {
          if (*(short *)(iVar4 + 8) == *(short *)(param_2 + iVar6 * 2)) {
            *(undefined4 *)(iVar4 + 0x38) = DAT_008f82f4;
            if (*(char *)(iVar4 + 0xb) == '\0') {
              param_1[param_1[0xb0] + 0xb1] = iVar4;
              param_1[0xb0] = param_1[0xb0] + 1;
            }
            if ((((int)(char)*(byte *)(iVar4 + 0xb) & 1 << ((byte)param_4 & 0x1f)) == 0) &&
               (*(byte *)(iVar4 + 0xb) = '\x01' << ((byte)param_4 & 0x1f) | *(byte *)(iVar4 + 0xb),
               *(int *)(iVar4 + 0xc) < 3)) {
              param_1[param_4 * 0x19 + 0x3d] = param_1[param_4 * 0x19 + 0x3d] + 1;
              param_1[param_4 * 0x19 + 0x3f] =
                   param_1[param_4 * 0x19 + 0x3f] + *(int *)(iVar4 + 0x18);
            }
            break;
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x5c;
        } while (iVar5 < param_1[1]);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3);
  }
  return;
}

