/* speed.exe 00504210 FUN_00504210; analysis pseudocode, not buildable source.
 * calls 0045d9a0 FUN_0045d9a0
 */

int FUN_00504210(float *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  puVar5 = DAT_00916a40;
  if ((undefined4 **)DAT_00916a40 != &DAT_00916a40) {
    do {
      uVar1 = puVar5[2];
      bVar2 = false;
      if (*(char *)((int)puVar5 + 0x26) == '\x01') {
        if ((float)puVar5[3] * (float)puVar5[3] <=
            ABS(*param_1 - (float)puVar5[4]) * ABS(*param_1 - (float)puVar5[4]) +
            ABS(param_1[1] - (float)puVar5[5]) * ABS(param_1[1] - (float)puVar5[5]) +
            ABS(param_1[2] - (float)puVar5[6]) * ABS(param_1[2] - (float)puVar5[6])) {
          *(byte *)((int)puVar5 + 0x27) = *(byte *)((int)puVar5 + 0x27) & 0xfc;
        }
        else if ((*(byte *)((int)puVar5 + 0x27) & 1) == 0) {
          if (*(short *)(puVar5 + 9) != 0) {
            if (*(short *)(puVar5 + 9) != -1) {
              uVar3 = FUN_0045d9a0(0xffff,&DAT_008f3218);
              if (uVar3 <= *(ushort *)(puVar5 + 9)) {
                *(byte *)((int)puVar5 + 0x27) = *(byte *)((int)puVar5 + 0x27) & 0xfd;
                goto LAB_005042b9;
              }
              *(byte *)((int)puVar5 + 0x27) = *(byte *)((int)puVar5 + 0x27) | 2;
            }
            bVar2 = true;
            *(undefined1 *)((int)puVar5 + 0x26) = 2;
          }
LAB_005042b9:
          *(byte *)((int)puVar5 + 0x27) = *(byte *)((int)puVar5 + 0x27) | 1;
          if (bVar2) {
            *(undefined4 *)(param_2 + iVar4 * 4) = uVar1;
            iVar4 = iVar4 + 1;
          }
        }
      }
      puVar5 = (undefined4 *)*puVar5;
    } while ((undefined4 **)puVar5 != &DAT_00916a40);
  }
  return iVar4;
}

