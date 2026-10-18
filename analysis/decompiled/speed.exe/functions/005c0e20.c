/* speed.exe 005c0e20 FUN_005c0e20; analysis pseudocode, not buildable source.
 * calls 005b59c0 FUN_005b59c0
 * calls 005c0d00 FUN_005c0d00
 * calls 005b66c0 FUN_005b66c0
 * calls 005afcf0 FUN_005afcf0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005bccd0 FUN_005bccd0
 * calls 005afc80 FUN_005afc80
 * calls 005b6790 FUN_005b6790
 * calls 005bcd20 FUN_005bcd20
 * calls 007c94b0 __chkstk
 * calls 005afd60 FUN_005afd60
 * calls 0057e8c0 FUN_0057e8c0
 * calls 00652ad0 _malloc
 * calls 005afee0 FUN_005afee0
 * calls 005afda0 FUN_005afda0
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __thiscall FUN_005c0e20(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  ushort *puVar14;
  char *pcVar15;
  byte *pbVar16;
  uint uVar17;
  uint local_191c;
  undefined4 local_1918;
  int local_1914 [2];
  byte local_190c;
  byte local_190b [255];
  char local_180c [9];
  char local_1803;
  char local_1802 [2038];
  undefined4 local_100c;
  undefined1 local_1006 [10];
  undefined1 local_ffc [4];
  undefined1 local_ff8 [2];
  undefined1 local_ff6 [4070];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008744cb;
  local_c = ExceptionList;
  uStack_10 = 0x5c0e3f;
  local_1918 = 0;
  local_191c = 0;
  local_1914[0] = 0;
  local_1914[1] = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  cVar6 = FUN_005afee0(&local_100c,param_2,&local_1918,param_3);
  if ((cVar6 == '\0') || (iVar8 = FUN_005afc80(), iVar8 != 0)) {
LAB_005c0f15:
    uVar9 = 0;
  }
  else {
    do {
      cVar6 = FUN_005afee0(&local_100c,param_2,&local_1918,param_3);
      if (cVar6 == '\0') goto LAB_005c0f15;
      iVar8 = FUN_005afcf0();
    } while (iVar8 != 0);
    FUN_005afd60();
    iVar8 = 9;
    while ((local_1803 != '\0' && ((local_1803 < '0' || ('9' < local_1803))))) {
      iVar4 = iVar8 + 1;
      iVar8 = iVar8 + 1;
      local_1803 = local_180c[iVar4];
    }
    pcVar15 = local_180c + iVar8;
    iVar8 = 0;
    if (pcVar15 != (char *)0x0) {
      cVar6 = *pcVar15;
      while (((cVar6 != '\0' && ('/' < cVar6)) && (cVar6 < ':'))) {
        pcVar15 = pcVar15 + 1;
        iVar8 = cVar6 + -0x30 + iVar8 * 10;
        cVar6 = *pcVar15;
      }
    }
    FUN_005b6790(iVar8);
    uVar17 = 0;
    if (*param_1 != 0) {
      do {
        cVar6 = FUN_005afee0(&local_100c,param_2,&local_1918,param_3);
        if (cVar6 != '\0') {
          puVar14 = (ushort *)&local_100c;
          pcVar15 = local_180c;
          uVar10 = local_100c;
          uVar5 = (ushort)local_100c;
          while (uVar5 != 0) {
            if (((short)uVar10 < -0x80) || (0x7f < (short)uVar10)) goto LAB_005c0fe0;
            uVar5 = *puVar14;
            puVar14 = puVar14 + 1;
            *pcVar15 = (char)uVar5;
            uVar5 = *puVar14;
            uVar10 = (uint)uVar5;
            pcVar15 = pcVar15 + 1;
          }
          uVar10 = param_1[3];
          *pcVar15 = '\0';
          for (uVar11 = 0; (uVar10 != 0 && (uVar11 != uVar17)); uVar11 = uVar11 + 1) {
            uVar10 = *(uint *)(uVar10 + 4);
          }
          FUN_005b59c0(local_180c);
        }
LAB_005c0fe0:
        uVar17 = uVar17 + 1;
      } while (uVar17 < *param_1);
    }
    do {
      local_100c = local_100c & 0xffff0000;
      cVar6 = FUN_005afee0(&local_100c,param_2,&local_1918,param_3);
      if ((ushort)local_100c != 0) {
        iVar8 = FUN_005afcf0();
        if (iVar8 == 0) {
          FUN_005afda0(&local_190c,local_ffc);
          FUN_0057e8c0(0);
          FUN_005c0d00(&local_190c,0,local_1914);
          iVar8 = -1;
          pbVar16 = &local_190c;
          bVar7 = local_190c;
          while (bVar7 != 0) {
            if (('`' < (char)bVar7) && ((char)bVar7 < '{')) {
              bVar7 = bVar7 - 0x20;
            }
            iVar8 = iVar8 * 0x21 + (uint)bVar7;
            pbVar1 = pbVar16 + 1;
            pbVar16 = pbVar16 + 1;
            bVar7 = *pbVar1;
          }
          local_191c = 0;
          if (param_1[6] != 0) {
            piVar12 = (int *)(param_1[9] + 0x14);
            do {
              if (*piVar12 == iVar8) goto LAB_005c12a9;
              local_191c = local_191c + 1;
              piVar12 = piVar12 + 7;
            } while (local_191c < param_1[6]);
          }
          local_191c = 0xffffffff;
        }
        else {
          iVar8 = FUN_005afcf0();
          if (iVar8 == 0) {
            FUN_005afda0(local_180c,local_ff6);
            puVar2 = (undefined4 *)(local_191c * 0x1c + 4 + param_1[9]);
            thunk_FUN_007c7250(*(undefined4 *)(local_191c * 0x1c + 4 + param_1[9]));
            pcVar15 = local_180c;
            *puVar2 = 0;
            do {
              cVar3 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar3 != '\0');
            pcVar13 = _malloc((size_t)(pcVar15 + (1 - (int)(local_180c + 1))));
            *puVar2 = pcVar13;
            pcVar15 = local_180c;
            do {
              cVar3 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              *pcVar13 = cVar3;
              pcVar13 = pcVar13 + 1;
            } while (cVar3 != '\0');
          }
          else {
            iVar8 = FUN_005afcf0();
            if (iVar8 == 0) {
              FUN_005afda0(local_180c,local_ff8);
              puVar2 = (undefined4 *)(local_191c * 0x1c + 8 + param_1[9]);
              thunk_FUN_007c7250(*(undefined4 *)(local_191c * 0x1c + 8 + param_1[9]));
              pcVar15 = local_180c;
              *puVar2 = 0;
              do {
                cVar3 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar3 != '\0');
              pcVar13 = _malloc((size_t)(pcVar15 + (1 - (int)(local_180c + 1))));
              *puVar2 = pcVar13;
              pcVar15 = local_180c;
              do {
                cVar3 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                *pcVar13 = cVar3;
                pcVar13 = pcVar13 + 1;
              } while (cVar3 != '\0');
            }
            else {
              iVar8 = FUN_005afcf0();
              if (iVar8 == 0) {
                FUN_005afda0(local_180c,local_ffc);
                FUN_005b66c0();
              }
              else {
                iVar8 = FUN_005afcf0();
                if (iVar8 == 0) {
                  FUN_005afda0(local_180c,local_ff6);
                }
                else {
                  uVar17 = param_1[3];
                  if (uVar17 != 0) {
LAB_005c1251:
                    iVar8 = FUN_005afcf0();
                    if (iVar8 != 0) goto code_r0x005c1264;
                    pcVar13 = *(char **)(uVar17 + 0xc);
                    pcVar15 = pcVar13 + 1;
                    do {
                      cVar3 = *pcVar13;
                      pcVar13 = pcVar13 + 1;
                    } while (cVar3 != '\0');
                    FUN_005bcd20(local_1006 + ((int)pcVar13 - (int)pcVar15) * 2);
                    FUN_005bccd0(local_1914);
                  }
                }
              }
            }
          }
        }
      }
LAB_005c12a9:
    } while (cVar6 != '\0');
    if (local_1914[0] != 0) {
      thunk_FUN_007c7250(local_1914[0]);
    }
    uVar9 = 1;
  }
  ExceptionList = local_c;
  return uVar9;
code_r0x005c1264:
  uVar17 = *(uint *)(uVar17 + 4);
  if (uVar17 == 0) goto LAB_005c12a9;
  goto LAB_005c1251;
}

