/* speed.exe 00506de0 FUN_00506de0; analysis pseudocode, not buildable source.
 * calls 00506d00 FUN_00506d00
 */

void FUN_00506de0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_4;
  
  puVar6 = DAT_0091a0d0;
  if ((undefined4 **)DAT_0091a0d0 != &DAT_0091a0d0) {
    do {
      if (*(short *)(puVar6 + 0x1f) == -1) {
        FUN_00506d00(puVar6);
      }
      for (puVar2 = (undefined4 *)puVar6[0x20]; puVar2 != puVar6 + 0x20;
          puVar2 = (undefined4 *)*puVar2) {
        if (param_1 == puVar2[2]) {
          local_4 = 0;
          if (0 < (int)puVar6[3]) {
            do {
              iVar3 = *(int *)(puVar6[0x1d] + 4 + local_4 * 8);
              if (iVar3 != 0) {
                if (param_2 == 0) {
                  iVar5 = 0;
                  if ('\0' < *(char *)(iVar3 + 0x19)) {
                    do {
                      iVar1 = *(int *)(iVar3 + 0x2c) + iVar5 * 8;
                      iVar4 = *(int *)(iVar1 + 4);
                      if (*(int *)(iVar4 + 0x68) == param_1) {
                        *(int *)(iVar1 + 4) = DAT_00925860 + iVar4;
                      }
                      iVar5 = iVar5 + 1;
                    } while (iVar5 < *(char *)(iVar3 + 0x19));
                  }
                }
                else {
                  iVar5 = 0;
                  if ('\0' < *(char *)(iVar3 + 0x19)) {
                    do {
                      if (*(int *)(*(int *)(iVar3 + 0x2c) + 4 + iVar5 * 8) == param_2) {
                        *(int *)(*(int *)(iVar3 + 0x2c) + iVar5 * 8 + 4) = DAT_00925860 + param_2;
                      }
                      iVar5 = iVar5 + 1;
                    } while (iVar5 < *(char *)(iVar3 + 0x19));
                  }
                }
              }
              local_4 = local_4 + 1;
            } while (local_4 < (int)puVar6[3]);
          }
          break;
        }
      }
      puVar6 = (undefined4 *)*puVar6;
    } while ((undefined4 **)puVar6 != &DAT_0091a0d0);
  }
  return;
}

