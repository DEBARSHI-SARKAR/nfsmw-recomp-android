/* speed.exe 0084caf0 FUN_0084caf0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084b110 FUN_0084b110
 * calls 0084bd60 FUN_0084bd60
 * calls 0084c580 FUN_0084c580
 * calls 0078af30 FUN_0078af30
 */

undefined4
FUN_0084caf0(int param_1,char *param_2,char *param_3,char *param_4,char *param_5,int param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  DWORD DVar6;
  
  if (param_6 == 0) {
    param_6 = 0x1e;
  }
  else if (param_6 < 2) {
    param_6 = 2;
  }
  else if (0xfa < param_6) {
    param_6 = 0xfa;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)(param_2 + 1)) < 0x20) {
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        pcVar3 = param_3;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if ((uint)((int)pcVar3 - (int)(param_3 + 1)) < 0x20) {
          if (param_4 != (char *)0x0) {
            pcVar3 = param_4;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if ((uint)((int)pcVar3 - (int)(param_4 + 1)) < 0xc0) {
              if (param_5 != (char *)0x0) {
                pcVar3 = param_5;
                do {
                  cVar1 = *pcVar3;
                  pcVar3 = pcVar3 + 1;
                } while (cVar1 != '\0');
                if ((uint)((int)pcVar3 - (int)(param_5 + 1)) < 0x78) {
                  iVar2 = *(int *)(param_1 + 0x24);
                  while( true ) {
                    if (iVar2 == 0) {
                      puVar5 = (undefined1 *)FUN_0078af30(0x1a4);
                      DVar6 = GetTickCount();
                      *(DWORD *)(puVar5 + 0x180) = DVar6;
                      puVar5[3] = (undefined1)param_6;
                      puVar5[4] = (char)(DVar6 >> 0x18);
                      puVar5[7] = puVar5[0x180];
                      puVar5[6] = (char)(DVar6 >> 8);
                      *puVar5 = 0x67;
                      puVar5[1] = 0x45;
                      puVar5[2] = 0x41;
                      puVar5[5] = (char)(DVar6 >> 0x10);
                      iVar2 = 8 - (int)param_2;
                      do {
                        cVar1 = *param_2;
                        param_2[(int)(puVar5 + iVar2)] = cVar1;
                        param_2 = param_2 + 1;
                      } while (cVar1 != '\0');
                      iVar2 = 0x28 - (int)param_3;
                      do {
                        cVar1 = *param_3;
                        param_3[(int)(puVar5 + iVar2)] = cVar1;
                        param_3 = param_3 + 1;
                      } while (cVar1 != '\0');
                      iVar2 = 0x108 - (int)param_5;
                      do {
                        cVar1 = *param_5;
                        param_5[(int)(puVar5 + iVar2)] = cVar1;
                        param_5 = param_5 + 1;
                      } while (cVar1 != '\0');
                      iVar2 = 0x48 - (int)param_4;
                      do {
                        cVar1 = *param_4;
                        param_4[(int)(puVar5 + iVar2)] = cVar1;
                        param_4 = param_4 + 1;
                      } while (cVar1 != '\0');
                      FUN_0084b110(*(undefined4 *)(param_1 + 0x38),puVar5,0x180,0,param_1 + 0x3c,
                                   0x10);
                      DVar6 = GetTickCount();
                      *(DWORD *)(puVar5 + 0x180) = DVar6 + 0xfa;
                      FUN_0084bd60(param_1);
                      *(undefined4 *)(puVar5 + 0x1a0) = *(undefined4 *)(param_1 + 0x24);
                      *(undefined1 **)(param_1 + 0x24) = puVar5;
                      FUN_0084bdf0(param_1);
                      return 0;
                    }
                    iVar4 = FUN_0084c580();
                    if ((iVar4 == 0) && (iVar4 = FUN_0084c580(), iVar4 == 0)) break;
                    iVar2 = *(int *)(iVar2 + 0x1a0);
                  }
                  iVar4 = FUN_0084c580();
                  if (iVar4 != 0) {
                    iVar4 = (iVar2 + 0x108) - (int)param_5;
                    do {
                      cVar1 = *param_5;
                      param_5[iVar4] = cVar1;
                      param_5 = param_5 + 1;
                    } while (cVar1 != '\0');
                    DVar6 = GetTickCount();
                    *(DWORD *)(iVar2 + 0x180) = DVar6 - 1;
                  }
                  iVar4 = FUN_0084c580();
                  if (iVar4 == 0) {
                    return 0;
                  }
                  iVar4 = (iVar2 + 0x48) - (int)param_4;
                  do {
                    cVar1 = *param_4;
                    param_4[iVar4] = cVar1;
                    param_4 = param_4 + 1;
                  } while (cVar1 != '\0');
                  DVar6 = GetTickCount();
                  *(DWORD *)(iVar2 + 0x180) = DVar6 - 1;
                  return 0;
                }
              }
              return 0xfffffffc;
            }
          }
          return 0xfffffffd;
        }
      }
      return 0xfffffffe;
    }
  }
  return 0xffffffff;
}

