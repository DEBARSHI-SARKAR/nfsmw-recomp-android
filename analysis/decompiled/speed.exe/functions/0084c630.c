/* speed.exe 0084c630 FUN_0084c630; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084c5c0 FUN_0084c5c0
 * calls 0083f910 FUN_0083f910
 * calls 0084b770 FUN_0084b770
 * calls 007d6cb0 __security_check_cookie
 * calls 0084bd10 FUN_0084bd10
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084b110 FUN_0084b110
 * calls 0084c580 FUN_0084c580
 * calls 0084b1e0 FUN_0084b1e0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0084c630(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  char *pcVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 *puVar9;
  short *psVar10;
  int *piVar11;
  bool bVar12;
  uint local_1ac;
  undefined4 local_1a8;
  short local_1a4;
  short local_1a2;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  short local_194;
  short local_192;
  undefined1 local_190;
  undefined1 local_18f;
  undefined1 local_18e;
  undefined1 local_18d;
  char local_184;
  char local_183;
  char local_182;
  byte local_181;
  int local_180;
  char local_17c [32];
  char local_15c [32];
  char local_13c [192];
  char local_7c [120];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar4 = FUN_0084bd10(param_3);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_3 + 0x38);
    while (iVar4 != 0) {
      if (0 < *(int *)(param_3 + 0x30)) {
        *(undefined4 *)(param_3 + 0x30) = 0;
        FUN_0084c5c0();
      }
      local_17c[0] = '\0';
      local_1a8 = 0x10;
      iVar4 = FUN_0084b1e0(*(undefined4 *)(param_3 + 0x38),&local_184,0x180,0,&local_1a4,&local_1a8)
      ;
      if ((iVar4 < 1) || (local_17c[0] == '\0')) break;
      FUN_0084b770(&local_194,0x10,&local_1a4,0x10);
      local_1ac = 0;
      if ((local_194 == local_1a4) && (local_1a4 == 2)) {
        bVar12 = true;
        iVar4 = 3;
        psVar8 = &local_1a2;
        psVar10 = &local_192;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar12 = *psVar8 == *psVar10;
          psVar8 = psVar8 + 1;
          psVar10 = psVar10 + 1;
        } while (bVar12);
        local_1ac = (uint)bVar12;
      }
      if (((local_184 == 'g') && (local_183 == 'E')) && (local_182 == 'A')) {
        if ((local_17c[0] == '?') && (local_17c[1] == '\0')) {
          DVar5 = GetTickCount();
          for (iVar4 = *(int *)(param_3 + 0x24); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1a0)) {
            if (DVar5 + 1000 < *(uint *)(iVar4 + 0x180)) {
              *(DWORD *)(iVar4 + 0x180) = DVar5 + 1000;
            }
          }
        }
        else if (local_15c[0] != '\0') {
          puVar9 = *(undefined4 **)(param_3 + 0x28);
          puVar3 = *(undefined4 **)(param_3 + 0x2c);
          puVar7 = (undefined4 *)0x0;
          if (puVar9 == puVar3) {
LAB_0084c7ce:
            if (puVar7 != (undefined4 *)0x0) {
              puVar9 = puVar7;
              for (iVar4 = 0x69; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              }
              puVar7[1] = local_180;
              pcVar6 = local_17c;
              iVar4 = 8 - (int)pcVar6;
              do {
                cVar2 = *pcVar6;
                pcVar6[(int)puVar7 + iVar4] = cVar2;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              pcVar6 = local_15c;
              iVar4 = 0x28 - (int)pcVar6;
              do {
                cVar2 = *pcVar6;
                pcVar6[(int)puVar7 + iVar4] = cVar2;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              pcVar6 = local_13c;
              iVar4 = 0x48 - (int)pcVar6;
              do {
                cVar2 = *pcVar6;
                pcVar6[(int)puVar7 + iVar4] = cVar2;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
              puVar9 = puVar7;
            }
          }
          else {
            do {
              if ((puVar7 == (undefined4 *)0x0) && (*(char *)(puVar9 + 10) == '\0')) {
                puVar7 = puVar9;
              }
              iVar4 = FUN_0084c580();
            } while ((((iVar4 != 0) || (iVar4 = FUN_0084c580(), iVar4 != 0)) ||
                     (local_180 != puVar9[1])) &&
                    (puVar9 = puVar9 + 0x69, puVar9 != *(undefined4 **)(param_3 + 0x2c)));
            if (puVar9 == puVar3) goto LAB_0084c7ce;
          }
          if (puVar9 != *(undefined4 **)(param_3 + 0x2c)) {
            pcVar6 = local_7c;
            iVar4 = 0x108 - (int)pcVar6;
            do {
              cVar2 = *pcVar6;
              pcVar6[(int)puVar9 + iVar4] = cVar2;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            pcVar6 = local_13c;
            iVar4 = 0x48 - (int)pcVar6;
            do {
              cVar2 = *pcVar6;
              pcVar6[(int)puVar9 + iVar4] = cVar2;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            DVar5 = GetTickCount();
            puVar9[0x67] = local_1ac;
            puVar9[0x60] = DVar5 + 1000 + (uint)local_181 * 2000;
            puVar9[0x65] = CONCAT31(CONCAT21(CONCAT11(local_1a0,local_19f),local_19e),local_19d);
            puVar9[0x66] = CONCAT31(CONCAT21(CONCAT11(local_190,local_18f),local_18e),local_18d);
            FUN_0083f910(&local_1a4,puVar9 + 0x61,0x10);
            *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
          }
        }
      }
      iVar4 = *(int *)(param_3 + 0x38);
    }
    DVar5 = GetTickCount();
    iVar4 = *(int *)(param_3 + 0x28);
    if (iVar4 != *(int *)(param_3 + 0x2c)) {
      do {
        if ((*(char *)(iVar4 + 0x28) != '\0') &&
           (((*(char *)(iVar4 + 0x108) == '\0' || (*(uint *)(iVar4 + 0x180) == 0)) ||
            (*(uint *)(iVar4 + 0x180) < DVar5)))) {
          *(undefined1 *)(iVar4 + 0x28) = 0;
          *(undefined1 *)(iVar4 + 8) = 0;
          *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
        }
        iVar4 = iVar4 + 0x1a4;
      } while (iVar4 != *(int *)(param_3 + 0x2c));
    }
    piVar1 = (int *)(param_3 + 0x24);
    iVar4 = *piVar1;
    piVar11 = piVar1;
    while (iVar4 != 0) {
      iVar4 = *piVar11;
      if (*(int *)(iVar4 + 0x180) == 0) {
        *piVar11 = *(int *)(iVar4 + 0x1a0);
        *(undefined1 *)(iVar4 + 0x108) = 0;
        FUN_0084b110(*(undefined4 *)(param_3 + 0x38),iVar4,0x180,0,param_3 + 0x3c,0x10);
        thunk_FUN_004655f0(iVar4);
      }
      else {
        piVar11 = (int *)(iVar4 + 0x1a0);
      }
      iVar4 = *piVar11;
    }
    DVar5 = GetTickCount();
    for (iVar4 = *piVar1; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1a0)) {
      if (*(uint *)(iVar4 + 0x180) < DVar5) {
        FUN_0084b110(*(undefined4 *)(param_3 + 0x38),iVar4,0x180,0,param_3 + 0x3c,0x10);
        *(uint *)(iVar4 + 0x180) = (uint)*(byte *)(iVar4 + 3) * 1000 + DVar5;
      }
    }
    FUN_0084bdf0(param_3);
  }
  return 0;
}

