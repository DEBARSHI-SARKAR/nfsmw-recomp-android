/* speed.exe 00730460 FUN_00730460; analysis pseudocode, not buildable source.
 * calls 0064cb90 FUN_0064cb90
 * calls 00723ad0 FUN_00723ad0
 * calls 004647c0 FUN_004647c0
 * calls 00728620 FUN_00728620
 * calls 0072dd70 FUN_0072dd70
 * calls 00727e60 FUN_00727e60
 * calls 007239b0 FUN_007239b0
 * calls 0065c770 FUN_0065c770
 * calls 00658a00 FUN_00658a00
 * calls 0064ab60 FUN_0064ab60
 * calls 007247e0 FUN_007247e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00730460(int *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 *local_14;
  undefined4 *local_10;
  float local_c;
  int local_4;
  
  fVar9 = (float10)FUN_0065c770();
  param_1[0x67] = (int)(float)fVar9;
  *(undefined1 *)(param_1 + 0xac) = 0;
  local_4 = 0;
  do {
    sVar1 = *(short *)(param_2 + local_4 * 2);
    iVar4 = (int)sVar1;
    iVar3 = (int)*(short *)(local_4 * 100 + 0xde + (int)param_1);
    piVar8 = param_1 + local_4 * 0x19 + 0x30;
    if (iVar3 != iVar4) {
      local_14 = DAT_009a3b50;
      puVar5 = DAT_009a3b58;
      if ((undefined4 **)DAT_009a3b50 != &DAT_009a3b50) {
        do {
          if (*(short *)(local_14 + 2) == iVar3) goto LAB_00730502;
          local_14 = (undefined4 *)*local_14;
          puVar5 = DAT_009a3b58;
        } while ((undefined4 **)local_14 != &DAT_009a3b50);
      }
      while (local_14 = puVar5, (undefined4 **)local_14 != &DAT_009a3b58) {
        if (*(short *)(local_14 + 2) == iVar3) goto LAB_00730502;
        puVar5 = (undefined4 *)*local_14;
      }
      local_14 = (undefined4 *)0x0;
LAB_00730502:
      local_10 = DAT_009a3b50;
      puVar5 = DAT_009a3b58;
      if ((undefined4 **)DAT_009a3b50 != &DAT_009a3b50) {
        do {
          if (*(short *)(local_10 + 2) == iVar4) goto LAB_0073054a;
          local_10 = (undefined4 *)*local_10;
          puVar5 = DAT_009a3b58;
        } while ((undefined4 **)local_10 != &DAT_009a3b50);
      }
      while (local_10 = puVar5, (undefined4 **)local_10 != &DAT_009a3b58) {
        if (*(short *)(local_10 + 2) == iVar4) goto LAB_0073054a;
        puVar5 = (undefined4 *)*local_10;
      }
      local_10 = (undefined4 *)0x0;
LAB_0073054a:
      local_c = 10000.0;
      if (((local_14 == (undefined4 *)0x0) || (local_10 == (undefined4 *)0x0)) ||
         (*(char *)((int)local_14 + 10) < '\x01')) {
LAB_007305d3:
        *(undefined1 *)((int)param_1 + 0x193) = 1;
      }
      else {
        puVar5 = local_14 + 9;
        iVar3 = 0;
        do {
          fVar9 = (float10)FUN_007247e0(puVar5,0x4479c000);
          if (fVar9 <= (float10)local_c) {
            local_c = (float)fVar9;
          }
          iVar3 = iVar3 + 1;
          puVar5 = puVar5 + 2;
        } while (iVar3 < *(char *)((int)local_14 + 10));
        if (_DAT_008b27d0 < local_c) goto LAB_007305d3;
      }
      *(short *)((int)piVar8 + 0x1e) = sVar1;
      piVar8[0xb] = piVar8[1];
      piVar8[10] = *piVar8;
      fVar9 = (float10)FUN_0065c770();
      piVar8[0xc] = (int)(float)fVar9;
      piVar8[0xd] = 0;
      piVar8[0xe] = 0;
      piVar8[0xf] = 0;
      piVar8[0x10] = 0;
    }
    if (local_4 == 0) {
      if (iVar4 < 1) {
        *(undefined1 *)(param_1 + 0x65) = 0x2d;
        *(undefined1 *)((int)param_1 + 0x195) = 0x2d;
        *(undefined1 *)((int)param_1 + 0x196) = 0;
      }
      else {
        FUN_004647c0(param_1 + 0x65,&DAT_008b2a68,(int)(char)((char)(iVar4 / 100) + '@'),iVar4 % 100
                    );
      }
    }
    else if (0 < iVar4) {
      uVar6 = DAT_009ae2c0 & 3;
      DAT_009ae2c0 = DAT_009ae2c0 + 1;
      FUN_004647c0(&DAT_009ae280 + uVar6 * 0x10,&DAT_008b2a68,(int)(char)((char)(iVar4 / 100) + '@')
                   ,iVar4 % 100);
      FUN_004647c0(param_1 + 0x65,"%s - %s",param_1 + 0x65,&DAT_009ae280 + uVar6 * 0x10);
    }
    local_4 = local_4 + 1;
    if (1 < local_4) {
      FUN_0072dd70();
      DAT_00925874 = 1;
      iVar4 = 0;
      iVar3 = 0;
      param_2 = 0;
      if (0 < param_1[1]) {
        do {
          iVar7 = *param_1 + iVar3;
          if ((((*(int *)(*param_1 + 0xc + iVar3) == 4) && (*(char *)(iVar7 + 0xb) == '\0')) &&
              ((sVar1 = *(short *)(iVar7 + 8),
               cVar2 = ((char)((int)sVar1 / 100) + (char)(sVar1 >> 7)) -
                       (char)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f), cVar2 != '\x19' &&
               ((cVar2 != '\x17' && (cVar2 != '\x18')))))) && (cVar2 != '\x15')) {
            *(undefined4 *)(iVar7 + 0x3c) = 0;
            DAT_00915f78 = 1;
            *(undefined4 *)(iVar7 + 0x3c) = DAT_00982b78;
            FUN_00658a00(*(undefined4 *)(iVar7 + 0x4c),*(undefined4 *)(iVar7 + 0x54),iVar7);
            DAT_00915f78 = 0;
            param_1[9] = param_1[9] + -1;
            *(undefined4 *)(iVar7 + 0xc) = 3;
            FUN_00727e60(iVar7);
            param_2 = param_2 + 1;
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x5c;
        } while (iVar4 < param_1[1]);
      }
      DAT_00925874 = 0;
      if (0 < param_2) {
        FUN_0064ab60();
        *(undefined1 *)(param_1 + 0xaf) = 1;
      }
      FUN_007239b0();
      param_1[0x62] = 1;
      FUN_0064cb90(DAT_008f815c);
      *(undefined1 *)((int)param_1 + 0x191) = 0;
      *(undefined1 *)(param_1 + 100) = 0;
      param_1[0x68] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      piVar8 = param_1 + 0x6c;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      FUN_00728620();
      FUN_00723ad0();
      return;
    }
  } while( true );
}

