/* speed.exe 006de300 FUN_006de300; analysis pseudocode, not buildable source.
 * calls 006de210 FUN_006de210
 * calls 007538d0 FUN_007538d0
 * calls 006e54e0 FUN_006e54e0
 * calls 006d4620 FUN_006d4620
 * calls 006d4960 FUN_006d4960
 * calls 006dbb20 FUN_006dbb20
 * calls 0041ad20 FUN_0041ad20
 * calls 006dbec0 FUN_006dbec0
 * calls 00750b00 thunk_FUN_00744e20
 * calls 00505e80 FUN_00505e80
 * calls 00667660 FUN_00667660
 * calls 00723fa0 FUN_00723fa0
 * calls 006cfce0 FUN_006cfce0
 * calls 0044b190 FUN_0044b190
 * calls 007a2200 FUN_007a2200
 * calls 006c00b0 FUN_006c00b0
 * calls 006dbfe0 FUN_006dbfe0
 * calls 00769360 FUN_00769360
 * calls 006d1a40 FUN_006d1a40
 * calls 006d3850 FUN_006d3850
 * calls 00750980 FUN_00750980
 * calls 006dae20 FUN_006dae20
 * calls 006d53d0 FUN_006d53d0
 * calls 0073d0c0 FUN_0073d0c0
 * calls 00503d00 FUN_00503d00
 * calls 006db310 FUN_006db310
 * calls 006dc040 FUN_006dc040
 * calls 006e2f50 FUN_006e2f50
 * calls 006c83d0 FUN_006c83d0
 * calls 00750b10 thunk_FUN_00744dd0
 * calls 007a1fa0 FUN_007a1fa0
 * calls 006d49a0 FUN_006d49a0
 * calls 0074c000 FUN_0074c000
 * calls 006d4100 FUN_006d4100
 * calls 00758100 FUN_00758100
 * calls 0073cfe0 FUN_0073cfe0
 * calls 006cff40 FUN_006cff40
 * calls 006d6cf0 FUN_006d6cf0
 * calls 006bfdd0 FUN_006bfdd0
 * calls 00507770 FUN_00507770
 * calls 00744840 FUN_00744840
 * calls 00504c50 FUN_00504c50
 * calls 006d04e0 FUN_006d04e0
 * calls 006bd3b0 FUN_006bd3b0
 * calls 00738860 FUN_00738860
 * calls 00724230 FUN_00724230
 * calls 00769580 FUN_00769580
 * calls 007268c0 FUN_007268c0
 * calls 00753d90 FUN_00753d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006de300(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int *******pppppppiVar13;
  undefined4 *puVar14;
  uint unaff_EDI;
  int *piStack_ba8;
  int **ppiStack_ba4;
  int *piStack_ba0;
  int ******ppppppiStack_b9c;
  undefined4 *puStack_b98;
  int *piStack_b94;
  int *piStack_b90;
  int **ppiStack_b8c;
  undefined4 uStack_b88;
  int ******ppppppiStack_b84;
  undefined4 *puStack_b80;
  int *piStack_b7c;
  int *piStack_b78;
  int **ppiStack_b74;
  undefined4 uStack_b70;
  int ******ppppppiStack_b6c;
  undefined4 *puStack_b68;
  int *piStack_b64;
  int *piStack_b60;
  int **ppiStack_b5c;
  undefined4 uStack_b58;
  int ******ppppppiStack_b54;
  int iStack_b50;
  int *piStack_b4c;
  int *piStack_b48;
  int **ppiStack_b44;
  undefined4 uStack_b40;
  int ******ppppppiStack_b3c;
  undefined4 *puStack_b38;
  int *piStack_b34;
  int *piStack_b30;
  undefined4 *puStack_b2c;
  undefined4 *puStack_b28;
  int ******ppppppiStack_b24;
  int *piStack_b20;
  int ******ppppppiStack_b1c;
  undefined4 uStack_b18;
  int *piStack_b14;
  int ******ppppppiStack_b10;
  int ******ppppppiStack_b0c;
  int ******ppppppiStack_b08;
  int ******ppppppiStack_b04;
  int ******ppppppiStack_b00;
  undefined4 *puStack_afc;
  int ******ppppppiStack_af8;
  int ******ppppppiStack_af4;
  int ******ppppppiStack_af0;
  int ******ppppppiStack_aec;
  int **ppiStack_ae8;
  int ******ppppppiStack_ae4;
  int ******ppppppiStack_ae0;
  int ******ppppppiStack_adc;
  int ******ppppppiStack_ad8;
  int *piStack_ad4;
  int *****pppppiStack_ad0;
  int ******ppppppiStack_acc;
  undefined4 uStack_ac8;
  int *****pppppiStack_ac4;
  uint uVar15;
  uint uStack_aa4;
  uint uStack_aa0;
  uint uStack_a9c;
  undefined1 auStack_a14 [52];
  int ****local_9e0 [624];
  undefined4 local_20;
  
  if (DAT_009017d0 == 0) {
    DAT_00982ba0 = 1;
  }
  DAT_00982b9c = 0;
  if (DAT_00982b34 != 0) {
    DAT_00982b9c = 0x800;
  }
  pppppiStack_ac4 = (int *****)0x1;
  uStack_ac8 = (int *******)&DAT_00919650;
  ppppppiStack_acc = (int ******)0x6de348;
  _DAT_00982ba4 = FUN_0073cfe0();
  if (_DAT_00982ba4 == 0) {
    _DAT_00982ba8 = _DAT_00982ba8 - _DAT_008f9344 * DAT_00925970;
    if (_DAT_00982ba8 < _DAT_00890968) {
      _DAT_00982ba8 = 0.0;
    }
  }
  else {
    _DAT_00982ba8 = _DAT_008f9340 * DAT_00925970 + _DAT_00982ba8;
    if (_DAT_0089096c < _DAT_00982ba8) {
      _DAT_00982ba8 = 1.0;
    }
  }
  DAT_008ec2b8 = (uint)(DAT_00901830 == 0);
  pppppiStack_ac4 = (int *****)0x6de3cb;
  FUN_006d6cf0();
  DAT_00982c80 = (int *)0x0;
  pppppiStack_ac4 = (int *****)0x6de3d6;
  FUN_00504c50();
  pppppiStack_ac4 = (int *****)0x6de3e1;
  FUN_00769360();
  pppppiStack_ac4 = (int *****)0x6de3e6;
  FUN_006c83d0();
  pppppiStack_ac4 = local_9e0;
  local_20 = 0;
  uStack_ac8 = (int *******)0x6de3fa;
  FUN_006bfdd0();
  if (DAT_009017d4 != 0) {
    DAT_008fae6c = 3;
    if (DAT_009197a8 == '\0') {
      DAT_008fae6c = 3;
      return;
    }
    if (*(int *)(DAT_00919800 + 0x10) == 0) {
      DAT_008fae6c = 3;
      return;
    }
    pppppiStack_ac4 = (int *****)0x1;
    uStack_ac8 = (int *******)DAT_00919800;
    ppppppiStack_acc = (int ******)0x6de43b;
    FUN_006bd3b0();
    pppppiStack_ac4 = *(int ******)(DAT_00919808 + 0x290);
    uStack_ac8 = (int *******)0x6de456;
    FUN_00769580();
    uVar8 = DAT_008fadfc;
    uVar3 = DAT_008fadf8;
    uVar7 = DAT_008fadf4;
    uVar6 = DAT_008fadf0;
    uVar2 = (uint)DAT_008fade0;
    uStack_a9c = DAT_008fadf8;
    DAT_008fade0 = (int *******)DAT_008f92e0;
    pppppiStack_ac4 = (int *****)DAT_008f92e0;
    uStack_ac8 = (int *******)&DAT_00000004;
    ppppppiStack_acc = (int ******)&DAT_009197a0;
    pppppiStack_ad0 = (int *****)0x6de4ae;
    FUN_006db310();
    pppppiStack_ac4 = (int *****)0x6de4b6;
    FUN_006e2f50();
    pppppiStack_ac4 = (int *****)0x6de4e4;
    DAT_008fade0 = (int *******)uVar2;
    DAT_008fadf0 = uVar6;
    DAT_008fadf4 = uVar7;
    DAT_008fadf8 = uVar3;
    DAT_008fadfc = uVar8;
    FUN_006e2f50();
    if ((1 < DAT_009017d4) && (_DAT_00890dc4 < *(float *)(DAT_009196b8 + 0x36a0))) {
      pppppiStack_ac4 = (int *****)0x8;
      uStack_ac8 = (int *******)&DAT_009197a0;
      ppppppiStack_acc = (int ******)0x6de51d;
      FUN_00723fa0();
      piVar1 = DAT_0093debc;
      DAT_00982c80 = DAT_0093debc;
      pppppiStack_ac4 = (int *****)0x6de530;
      (**(code **)(*DAT_0093debc + 4))();
      pppppiStack_ac4 = (int *****)piVar1[0x13];
      uStack_ac8 = DAT_00982bdc;
      ppppppiStack_acc = (int ******)0x6de542;
      (*(code *)(*DAT_00982bdc)[0x57])();
      piStack_ad4 = (int *)piVar1[0x12];
      ppppppiStack_acc = (int ******)0x0;
      pppppiStack_ad0 = (int *****)&stack0xfffff544;
      ppppppiStack_ad8 = (int ******)0x6de554;
      (**(code **)(*piStack_ad4 + 0xfc))();
      ppppppiStack_ad8 = (int ******)0x1;
      ppppppiStack_adc = (int ******)&DAT_009197a0;
      ppppppiStack_ae0 = (int ******)0x6de560;
      thunk_FUN_00744dd0();
      piVar1 = DAT_0093debc;
      ppppppiStack_ad8 = (int ******)0x6de570;
      (**(code **)(*DAT_0093debc + 8))();
      ppppppiStack_ad8 = (int ******)piVar1[0x12];
      ppppppiStack_adc = (int ******)0x6de57c;
      (*(code *)(*ppppppiStack_ad8)[0x43])();
      DAT_00982c80 = (int *)0x0;
    }
    pppppiStack_ac4 = (int *****)0x6de587;
    FUN_006e2f50();
    if (((DAT_00925e90 == 6) && (DAT_009017d4 == 3)) &&
       (_DAT_00890dc4 < *(float *)(DAT_009196b8 + 0x36a0))) {
      pppppiStack_ac4 = (int *****)0x6de5b7;
      FUN_006d4960();
    }
    piVar1 = DAT_0093debc;
    DAT_00982c80 = DAT_0093debc;
    pppppiStack_ac4 = (int *****)0x6de5ca;
    (**(code **)(*DAT_0093debc + 4))();
    pppppiStack_ac4 = (int *****)piVar1[0x13];
    uStack_ac8 = DAT_00982bdc;
    ppppppiStack_acc = (int ******)0x6de5dc;
    (*(code *)(*DAT_00982bdc)[0x57])();
    piStack_ad4 = (int *)piVar1[0x12];
    ppppppiStack_acc = (int ******)0x0;
    pppppiStack_ad0 = (int *****)&stack0xfffff544;
    ppppppiStack_ad8 = (int ******)0x6de5ee;
    (**(code **)(*piStack_ad4 + 0xfc))();
    if (DAT_009017e4 != 0) {
      ppppppiStack_ad8 = (int ******)0x2;
      ppppppiStack_adc = (int ******)&DAT_009197a0;
      ppppppiStack_ae0 = (int ******)0x6de602;
      FUN_00505e80();
      ppppppiStack_ae0 = (int ******)0x0;
      ppppppiStack_ae4 = (int ******)0x1;
      ppiStack_ae8 = (int **)&DAT_009197a0;
      ppppppiStack_aec = (int ******)0x6de60f;
      thunk_FUN_00744e20();
      ppppppiStack_aec = (int ******)0x1;
      ppppppiStack_af0 = (int ******)&DAT_009197a0;
      ppppppiStack_af4 = (int ******)0x6de61b;
      FUN_00744840();
      ppppppiStack_af4 = (int ******)&DAT_009197a0;
      ppppppiStack_af8 = (int ******)0x6de625;
      FUN_00507770();
    }
    piVar1 = DAT_0093debc;
    ppppppiStack_ad8 = (int ******)0x6de635;
    (**(code **)(*DAT_0093debc + 8))();
    ppppppiStack_ad8 = (int ******)piVar1[0x12];
    ppppppiStack_adc = (int ******)0x6de641;
    (*(code *)(*ppppppiStack_ad8)[0x43])();
    DAT_00982c80 = (int *)0x0;
  }
  if (DAT_009017b8 == 0) {
    if (DAT_00982bac != '\0') {
      puVar14 = &DAT_00919e20;
      do {
        uStack_ac8 = (int *******)*puVar14;
        pppppiStack_ac4 = (int *****)0x2;
        ppppppiStack_acc = (int ******)0x6de87a;
        FUN_006bd3b0();
        puVar14 = puVar14 + 0x1c;
      } while ((int)puVar14 < 0x91a051);
      DAT_00982bac = '\0';
    }
  }
  else {
    DAT_00982bac = '\x01';
    DAT_008fae6c = 3;
    if (DAT_00925e90 == 6) {
      pppppppiVar13 = (int *******)&DAT_00919dc0;
      do {
        if ((*(char *)(pppppppiVar13 + 2) != '\0') && (pppppppiVar13[0x18][4] != (int *****)0x0)) {
          pppppiStack_ac4 = (int *****)0x1;
          ppppppiStack_acc = (int ******)0x6de69d;
          uStack_ac8 = (int *******)pppppppiVar13[0x18];
          FUN_006bd3b0();
          pppppiStack_ac4 = pppppppiVar13[0x1a][0xa4];
          uStack_ac8 = (int *******)0x6de6b5;
          FUN_00769580();
          pppppiStack_ac4 = (int *****)0x0;
          uStack_ac8 = (int *******)0x7;
          ppppppiStack_acc = (int ******)DAT_00982bdc;
          pppppiStack_ad0 = (int *****)0x6de6c6;
          (*(code *)(*DAT_00982bdc)[0x39])();
          pppppiStack_ad0 = (int *****)0x0;
          piStack_ad4 = (int *)0xe;
          ppppppiStack_ad8 = (int ******)DAT_00982bdc;
          ppppppiStack_adc = (int ******)0x6de6d7;
          (*(code *)(*DAT_00982bdc)[0x39])();
          ppppppiStack_adc = (int ******)0x6de6dc;
          FUN_006c00b0();
          uVar8 = DAT_008fadfc;
          uVar3 = DAT_008fadf8;
          uVar7 = DAT_008fadf4;
          uVar6 = DAT_008fadf0;
          uVar2 = (uint)DAT_008fade0;
          if (DAT_00925e90 == 6) {
            DAT_008fade0 = *(int ********)(DAT_009b392c + 100);
            ppppppiStack_adc = (int ******)DAT_008fade0;
            if (*(char *)(DAT_0093dec4 + 0x40) == '\0') {
              ppppppiStack_adc = (int ******)0x3f000000;
            }
            ppppppiStack_ae0 = (int ******)0x3;
            ppiStack_ae8 = (int **)0x6de746;
            ppppppiStack_ae4 = (int ******)pppppppiVar13;
            ppppppiStack_acc = (int ******)DAT_008fade0;
            FUN_006db310();
            ppppppiStack_adc = (int ******)0x6de74e;
            FUN_006e2f50();
            unaff_EDI = uVar2;
          }
          ppppppiStack_adc = (int ******)0x1;
          ppppppiStack_ae0 = (int ******)0xe;
          ppppppiStack_ae4 = (int ******)DAT_00982bdc;
          ppiStack_ae8 = (int **)0x6de78d;
          DAT_008fade0 = (int *******)uVar2;
          DAT_008fadf0 = uVar6;
          DAT_008fadf4 = uVar7;
          DAT_008fadf8 = uVar3;
          DAT_008fadfc = uVar8;
          (*(code *)(*DAT_00982bdc)[0x39])();
          ppiStack_ae8 = (int **)0x1;
          ppppppiStack_aec = (int ******)0x7;
          ppppppiStack_af0 = (int ******)DAT_00982bdc;
          ppppppiStack_af4 = (int ******)0x6de79f;
          (*(code *)(*DAT_00982bdc)[0x39])();
          ppppppiStack_af4 = (int ******)0x6de7a4;
          FUN_006e2f50();
          if (DAT_009017bc == 0) {
            if (DAT_00901830 < 2) {
              ppppppiStack_af4 = (int ******)0x1000;
              goto LAB_006de7bd;
            }
          }
          else {
            ppppppiStack_af4 = (int ******)0x0;
LAB_006de7bd:
            puStack_afc = (undefined4 *)0x6de7ca;
            ppppppiStack_af8 = (int ******)pppppppiVar13;
            FUN_00723fa0();
          }
          ppppppiStack_af4 = (int ******)0x6de7cf;
          FUN_006e2f50();
          piVar1 = DAT_0093debc;
          DAT_00982c80 = DAT_0093debc;
          ppppppiStack_af4 = (int ******)0x6de7e2;
          (**(code **)(*DAT_0093debc + 4))();
          ppppppiStack_af4 = (int ******)piVar1[0x13];
          ppppppiStack_af8 = (int ******)DAT_00982bdc;
          puStack_afc = (undefined4 *)0x6de7f4;
          (*(code *)(*DAT_00982bdc)[0x57])();
          ppppppiStack_b04 = (int ******)piVar1[0x12];
          puStack_afc = (undefined4 *)0x0;
          ppppppiStack_b00 = &pppppiStack_ac4;
          ppppppiStack_b08 = (int ******)0x6de806;
          (*(code *)(*ppppppiStack_b04)[0x3f])();
          if (DAT_009017e4 != 0) {
            ppppppiStack_b08 = (int ******)0x1;
            ppppppiStack_b10 = (int ******)0x6de816;
            ppppppiStack_b0c = (int ******)pppppppiVar13;
            FUN_00505e80();
            piStack_b14 = (int *)0x6de81c;
            ppppppiStack_b10 = (int ******)pppppppiVar13;
            FUN_00507770();
            piStack_b14 = (int *)0x1;
            uStack_b18 = 0;
            piStack_b20 = (int *)0x6de825;
            ppppppiStack_b1c = (int ******)pppppppiVar13;
            thunk_FUN_00744e20();
          }
          piVar1 = DAT_0093debc;
          ppppppiStack_b08 = (int ******)0x6de835;
          (**(code **)(*DAT_0093debc + 8))();
          ppppppiStack_b08 = (int ******)piVar1[0x12];
          ppppppiStack_b0c = (int ******)0x6de841;
          (*(code *)(*ppppppiStack_b08)[0x43])();
          DAT_00982c80 = (int *)0x0;
        }
        pppppppiVar13 = pppppppiVar13 + 0x1c;
      } while ((int)pppppppiVar13 < 0x919ff1);
    }
  }
  pppppiStack_ac4 = (int *****)0x6de893;
  FUN_006e2f50();
  pppppiStack_ac4 = (int *****)0x1;
  uStack_ac8 = (int *******)0xe;
  ppppppiStack_acc = (int ******)DAT_00982bdc;
  DAT_008fae6c = 2;
  pppppiStack_ad0 = (int *****)0x6de8af;
  (*(code *)(*DAT_00982bdc)[0x39])();
  pppppiStack_ad0 = (int *****)0x1;
  piStack_ad4 = (int *)0x7;
  ppppppiStack_ad8 = (int ******)DAT_00982bdc;
  ppppppiStack_adc = (int ******)0x6de8c1;
  (*(code *)(*DAT_00982bdc)[0x39])();
  if (DAT_00919738 != '\0') {
    ppppppiStack_adc = (int ******)0x1;
    ppppppiStack_ae0 = (int ******)&DAT_0093db0c;
    ppppppiStack_ae4 = (int ******)0x6de8d9;
    FUN_006bd3b0();
    uVar8 = DAT_008fadfc;
    uVar2 = DAT_008fadf8;
    uVar7 = DAT_008fadf4;
    uVar6 = DAT_008fadf0;
    unaff_EDI = (uint)DAT_008fade0;
    DAT_008fade0 = *(int ********)(DAT_009b392c + 100);
    ppppppiStack_adc = (int ******)DAT_008fade0;
    if (*(char *)(DAT_0093dec4 + 0x40) == '\0') {
      ppppppiStack_adc = (int ******)0x3f000000;
    }
    ppppppiStack_ae0 = (int ******)0x3;
    ppppppiStack_ae4 = (int ******)&DAT_00919730;
    ppiStack_ae8 = (int **)0x6de93c;
    ppppppiStack_acc = (int ******)DAT_008fade0;
    FUN_006db310();
    ppppppiStack_adc = (int ******)0x6de944;
    FUN_006e2f50();
    ppppppiStack_adc = (int ******)0x6de972;
    DAT_008fade0 = (int *******)unaff_EDI;
    DAT_008fadf0 = uVar6;
    DAT_008fadf4 = uVar7;
    DAT_008fadf8 = uVar2;
    DAT_008fadfc = uVar8;
    FUN_006e2f50();
    ppppppiStack_adc = (int ******)0x1;
    ppppppiStack_ae0 = (int ******)&DAT_00919730;
    ppppppiStack_ae4 = (int ******)0x6de985;
    FUN_00723fa0();
    ppppppiStack_adc = (int ******)0x0;
    ppppppiStack_ae0 = (int ******)&DAT_00919730;
    ppppppiStack_ae4 = (int ******)0x6de990;
    thunk_FUN_00744dd0();
    piVar1 = DAT_0093debc;
    DAT_00982c80 = DAT_0093debc;
    ppppppiStack_adc = (int ******)0x6de9a6;
    (**(code **)(*DAT_0093debc + 4))();
    ppppppiStack_adc = (int ******)piVar1[0x13];
    ppppppiStack_ae0 = (int ******)DAT_00982bdc;
    ppppppiStack_ae4 = (int ******)0x6de9b8;
    (*(code *)(*DAT_00982bdc)[0x57])();
    ppppppiStack_aec = (int ******)piVar1[0x12];
    ppppppiStack_ae4 = (int ******)0x0;
    ppiStack_ae8 = &piStack_ad4;
    ppppppiStack_af0 = (int ******)0x6de9ca;
    (*(code *)(*ppppppiStack_aec)[0x3f])();
    if (DAT_009017e4 != 0) {
      ppppppiStack_af0 = (int ******)0x0;
      ppppppiStack_af4 = (int ******)0x0;
      ppppppiStack_af8 = (int ******)&DAT_00919730;
      puStack_afc = (undefined4 *)0x6de9de;
      thunk_FUN_00744e20();
      if (DAT_009017e4 != 0) {
        ppppppiStack_af0 = (int ******)0x0;
        ppppppiStack_af4 = (int ******)&DAT_00919730;
        ppppppiStack_af8 = (int ******)0x6de9f5;
        FUN_00505e80();
      }
    }
    piVar1 = DAT_0093debc;
    ppppppiStack_af0 = (int ******)0x6dea05;
    (**(code **)(*DAT_0093debc + 8))();
    ppppppiStack_af0 = (int ******)piVar1[0x12];
    ppppppiStack_af4 = (int ******)0x6dea11;
    (*(code *)(*ppppppiStack_af0)[0x43])();
    piVar1 = DAT_0093de9c;
    DAT_00982c80 = DAT_0093de9c;
    ppppppiStack_af4 = (int ******)0x6dea24;
    (**(code **)(*DAT_0093de9c + 4))();
    ppppppiStack_af4 = (int ******)piVar1[0x13];
    ppppppiStack_af8 = (int ******)DAT_00982bdc;
    puStack_afc = (undefined4 *)0x6dea36;
    (*(code *)(*DAT_00982bdc)[0x57])();
    ppppppiStack_b04 = (int ******)piVar1[0x12];
    puStack_afc = (undefined4 *)0x0;
    ppppppiStack_b00 = (int ******)&ppppppiStack_aec;
    ppppppiStack_b08 = (int ******)0x6dea48;
    (*(code *)(*ppppppiStack_b04)[0x3f])();
    if (DAT_00982b48 != (int *)0x0) {
      ppppppiStack_b10 = (int ******)DAT_0093de9c[0x12];
      ppppppiStack_b0c = *(int *******)(DAT_0093de9c[0x11] + 0x484);
      ppppppiStack_b08 = (int ******)0xf;
      piStack_b14 = (int *)0x6dea6b;
      (**(code **)((int)*ppppppiStack_b10 + 0x68))();
      piStack_b14 = *(int **)(*DAT_00982b48 + 0x18);
      ppppppiStack_b08 = (int ******)0x6;
      ppppppiStack_b0c = (int ******)0x5;
      ppppppiStack_b10 = (int ******)0xffffffff;
      uStack_b18 = 0x6dea82;
      FUN_006cff40();
    }
    ppppppiStack_b10 = (int ******)DAT_0093de9c[0x12];
    ppppppiStack_b0c = *(int *******)(DAT_0093de9c[0x11] + 0x484);
    ppppppiStack_b08 = (int ******)&DAT_00000008;
    piStack_b14 = (int *)0x6deaa0;
    (*(code *)(*ppppppiStack_b10)[0x1a])();
    if (DAT_00982b4c != (int *)0x0) {
      piStack_b20 = *(int **)(*DAT_00982b4c + 0x18);
      piStack_b14 = (int *)0x1;
      uStack_b18 = 2;
      ppppppiStack_b1c = (int ******)0xffffffff;
      ppppppiStack_b24 = (int ******)0x6deaba;
      FUN_006cff40();
    }
    piVar1 = DAT_0093de9c;
    piStack_b14 = (int *)0x6deaca;
    (**(code **)(*DAT_0093de9c + 8))();
    piStack_b14 = (int *)piVar1[0x12];
    uStack_b18 = 0x6dead6;
    (**(code **)(*piStack_b14 + 0x10c))();
    DAT_00982c80 = (int *)0x0;
    piStack_b20 = (int *)DAT_0093de9c[0x12];
    ppppppiStack_b1c = *(int *******)(DAT_0093de9c[0x11] + 0x484);
    uStack_b18 = 0xf;
    ppppppiStack_b24 = (int ******)0x6deaf7;
    (**(code **)(*piStack_b20 + 0x68))();
    ppppppiStack_adc = (int ******)0x6deafc;
    FUN_006cfce0();
  }
  ppppppiStack_adc = (int ******)0x6deb06;
  FUN_006e2f50();
  _DAT_0093de38 = 0;
  _DAT_0093de3c = 0;
  DAT_009828a0 = 0;
  _DAT_0093de40 = 0;
  _DAT_009828a4 = 0;
  _DAT_0093de44 = 0;
  _DAT_009828a8 = 0;
  _DAT_0093de48 = 0;
  _DAT_009828ac = 0;
  _DAT_0093de4c = 0;
  _DAT_009828b0 = 0;
  _DAT_0093de50 = 0;
  _DAT_009828b4 = 0;
  DAT_0093de54 = 0;
  _DAT_009828b8 = 0;
  DAT_00982b90 = 0;
  _DAT_00982b94 = 0;
  DAT_00982b98 = 0;
  _DAT_009828bc = 0;
  if ((DAT_00919658 != '\0') && (*(int *)(DAT_009196b0 + 0x10) != 0)) {
    ppppppiStack_adc = *(int *******)(DAT_009196b8 + 0x290);
    ppppppiStack_ae0 = (int ******)0x6deba7;
    FUN_00769580();
    ppppppiStack_adc = (int ******)0x0;
    ppppppiStack_ae0 = (int ******)&DAT_00919650;
    ppppppiStack_ae4 = (int ******)0x6debb7;
    FUN_00753d90();
    iVar10 = DAT_009196b0;
    ppppppiStack_adc = (int ******)0x6debc2;
    FUN_006e2f50();
    ppppppiStack_adc = *(int *******)(iVar10 + 8);
    ppppppiStack_ae0 = (int ******)0x0;
    ppppppiStack_ae4 = (int ******)DAT_00982bdc;
    ppiStack_ae8 = (int **)0x6debd5;
    (*(code *)(*DAT_00982bdc)[0x25])();
    ppiStack_ae8 = *(int ***)(iVar10 + 0xc);
    ppppppiStack_aec = (int ******)DAT_00982bdc;
    ppppppiStack_af0 = (int ******)0x6debe7;
    (*(code *)(*DAT_00982bdc)[0x27])();
    pppppiStack_ac4 = *(int ******)(iVar10 + 0x18);
    uStack_ac8 = *(int ********)(iVar10 + 0x14);
    ppppppiStack_af0 = &pppppiStack_ad0;
    pppppiStack_ad0 = (int *****)0x0;
    ppppppiStack_acc = (int ******)0x0;
    unaff_EDI = 0;
    ppppppiStack_af4 = (int ******)DAT_00982bdc;
    ppppppiStack_af8 = (int ******)0x6dec20;
    (*(code *)(*DAT_00982bdc)[0x2f])();
    DAT_00982a20 = iVar10;
    DAT_00982c80 = (int *)0x0;
    if (DAT_009017c4 != 0) {
      ppppppiStack_af8 = (int ******)&LAB_004faee0;
      puStack_afc = (undefined4 *)&DAT_00919960;
      ppppppiStack_b00 = (int ******)0x6dec4a;
      FUN_00724230();
    }
    if ((0 < DAT_00901830) && (_DAT_008fae50 <= _DAT_008fae68)) {
      ppppppiStack_af8 = (int ******)auStack_a14;
      puStack_afc = &DAT_00919650;
      ppppppiStack_b00 = (int ******)0x6dec77;
      FUN_006e54e0();
    }
    iVar10 = DAT_009196b0;
    ppppppiStack_af8 = (int ******)0x6dec85;
    FUN_006e2f50();
    ppppppiStack_af8 = *(int *******)(iVar10 + 8);
    puStack_afc = (undefined4 *)0x0;
    ppppppiStack_b00 = (int ******)DAT_00982bdc;
    ppppppiStack_b04 = (int ******)0x6dec98;
    (*(code *)(*DAT_00982bdc)[0x25])();
    ppppppiStack_b04 = *(int *******)(iVar10 + 0xc);
    ppppppiStack_b08 = (int ******)DAT_00982bdc;
    ppppppiStack_b0c = (int ******)0x6decaa;
    (*(code *)(*DAT_00982bdc)[0x27])();
    ppppppiStack_ae0 = *(int *******)(iVar10 + 0x18);
    ppppppiStack_ae4 = *(int *******)(iVar10 + 0x14);
    ppppppiStack_b0c = (int ******)&ppppppiStack_aec;
    ppppppiStack_aec = (int ******)0x0;
    ppiStack_ae8 = (int **)0x0;
    ppppppiStack_adc = (int ******)0x0;
    ppppppiStack_ad8 = (int ******)0x3f800000;
    ppppppiStack_b10 = (int ******)DAT_00982bdc;
    piStack_b14 = (int *)0x6dece3;
    (*(code *)(*DAT_00982bdc)[0x2f])();
    DAT_00982a20 = iVar10;
    DAT_00982c80 = (int *)0x0;
    piStack_b14 = (int *)0x6decf4;
    FUN_006cfce0();
    ppppppiStack_b1c = *(int *******)(DAT_0093dec4 + 0x48);
    uStack_b18 = *(undefined4 *)(*(int *)(DAT_0093dec4 + 0x44) + 0x18c);
    piStack_b14 = (int *)0x7;
    piStack_b20 = (int *)0x6ded0f;
    (*(code *)(*ppppppiStack_b1c)[0x1a])();
    piStack_b20 = (int *)0x0;
    ppppppiStack_b24 = (int ******)DAT_008f92e4;
    puStack_b28 = &DAT_00919650;
    puStack_b2c = (undefined4 *)0x6ded21;
    FUN_006de210();
    piStack_b20 = (int *)0x20;
    ppppppiStack_b24 = (int ******)&DAT_00919650;
    puStack_b28 = (undefined4 *)0x6ded37;
    FUN_00723fa0();
    piStack_b20 = (int *)0x6ded3c;
    FUN_006e2f50();
    piVar1 = DAT_0093de78;
    DAT_00982c80 = DAT_0093de78;
    piStack_b20 = (int *)0x6ded4f;
    (**(code **)(*DAT_0093de78 + 4))();
    piStack_b20 = (int *)piVar1[0x13];
    ppppppiStack_b24 = (int ******)DAT_00982bdc;
    puStack_b28 = (undefined4 *)0x6ded61;
    (*(code *)(*DAT_00982bdc)[0x57])();
    piStack_b30 = (int *)piVar1[0x12];
    puStack_b28 = (undefined4 *)0x0;
    puStack_b2c = &uStack_b18;
    piStack_b34 = (int *)0x6ded73;
    (**(code **)(*piStack_b30 + 0xfc))();
    piStack_b34 = (int *)0x0;
    puStack_b38 = &DAT_00919650;
    ppppppiStack_b3c = (int ******)0x6ded7e;
    FUN_007538d0();
    piVar1 = DAT_0093de78;
    piStack_b34 = (int *)0x6ded8e;
    (**(code **)(*DAT_0093de78 + 8))();
    piStack_b34 = (int *)piVar1[0x12];
    puStack_b38 = (undefined4 *)0x6ded9a;
    (**(code **)(*piStack_b34 + 0x10c))();
    DAT_00982c80 = (int *)0x0;
    puStack_b38 = (undefined4 *)0x6deda5;
    FUN_006e2f50();
    piVar1 = DAT_0093debc;
    DAT_00982c80 = DAT_0093debc;
    puStack_b38 = (undefined4 *)0x6dedb8;
    (**(code **)(*DAT_0093debc + 4))();
    puStack_b38 = (undefined4 *)piVar1[0x13];
    ppppppiStack_b3c = (int ******)DAT_00982bdc;
    uStack_b40 = 0x6dedca;
    (*(code *)(*DAT_00982bdc)[0x57])();
    piStack_b48 = (int *)piVar1[0x12];
    uStack_b40 = 0;
    ppiStack_b44 = &piStack_b30;
    piStack_b4c = (int *)0x6deddc;
    (**(code **)(*piStack_b48 + 0xfc))();
    piStack_b4c = &DAT_00919650;
    iStack_b50 = 0x6dede6;
    FUN_007268c0();
    piVar1 = DAT_0093debc;
    piStack_b4c = (int *)0x6dedf6;
    (**(code **)(*DAT_0093debc + 8))();
    piStack_b4c = (int *)piVar1[0x12];
    iStack_b50 = 0x6dee02;
    (**(code **)(*piStack_b4c + 0x10c))();
    piVar1 = DAT_0093debc;
    DAT_00982c80 = DAT_0093debc;
    iStack_b50 = 0x6dee15;
    (**(code **)(*DAT_0093debc + 4))();
    iStack_b50 = piVar1[0x13];
    ppppppiStack_b54 = (int ******)DAT_00982bdc;
    uStack_b58 = 0x6dee27;
    (*(code *)(*DAT_00982bdc)[0x57])();
    piStack_b60 = (int *)piVar1[0x12];
    uStack_b58 = 0;
    ppiStack_b5c = &piStack_b48;
    piStack_b64 = (int *)0x6dee39;
    (**(code **)(*piStack_b60 + 0xfc))();
    piStack_b64 = (int *)0x0;
    puStack_b68 = &DAT_00919650;
    ppppppiStack_b6c = (int ******)0x6dee44;
    thunk_FUN_00744dd0();
    piVar1 = DAT_0093debc;
    piStack_b64 = (int *)0x6dee54;
    (**(code **)(*DAT_0093debc + 8))();
    piStack_b64 = (int *)piVar1[0x12];
    puStack_b68 = (undefined4 *)0x6dee60;
    (**(code **)(*piStack_b64 + 0x10c))();
    DAT_00982c80 = (int *)0x0;
    puStack_b68 = (undefined4 *)0x6dee6b;
    FUN_006e2f50();
    piVar1 = DAT_0093debc;
    DAT_00982c80 = DAT_0093debc;
    puStack_b68 = (undefined4 *)0x6dee7e;
    (**(code **)(*DAT_0093debc + 4))();
    puStack_b68 = (undefined4 *)piVar1[0x13];
    ppppppiStack_b6c = (int ******)DAT_00982bdc;
    uStack_b70 = 0x6dee90;
    (*(code *)(*DAT_00982bdc)[0x57])();
    piStack_b78 = (int *)piVar1[0x12];
    uStack_b70 = 0;
    ppiStack_b74 = &piStack_b60;
    piStack_b7c = (int *)0x6deea2;
    (**(code **)(*piStack_b78 + 0xfc))();
    piStack_b7c = (int *)0x6deea7;
    FUN_00667660();
    piVar1 = DAT_0093debc;
    piStack_b7c = (int *)0x6deeb4;
    (**(code **)(*DAT_0093debc + 8))();
    piStack_b7c = (int *)piVar1[0x12];
    puStack_b80 = (undefined4 *)0x6deec0;
    (**(code **)(*piStack_b7c + 0x10c))();
    DAT_00982c80 = (int *)0x0;
    puStack_b80 = (undefined4 *)0x6deecb;
    FUN_006e2f50();
    piVar1 = DAT_0093debc;
    if (DAT_00925e90 == 3) {
      DAT_00982c80 = DAT_0093debc;
      puStack_b80 = (undefined4 *)0x6deeeb;
      (**(code **)(*DAT_0093debc + 4))();
      puStack_b80 = (undefined4 *)piVar1[0x13];
      ppppppiStack_b84 = (int ******)DAT_00982bdc;
      uStack_b88 = 0x6deefd;
      (*(code *)(*DAT_00982bdc)[0x57])();
      piStack_b90 = (int *)piVar1[0x12];
      uStack_b88 = 0;
      ppiStack_b8c = &piStack_b78;
      piStack_b94 = (int *)0x6def0f;
      (**(code **)(*piStack_b90 + 0xfc))();
      piStack_b94 = (int *)0x1;
      puStack_b98 = &DAT_00919650;
      ppppppiStack_b9c = (int ******)0x6def1b;
      FUN_00750980();
      piVar1 = DAT_0093debc;
      piStack_b94 = (int *)0x6def2b;
      (**(code **)(*DAT_0093debc + 8))();
      piStack_b94 = (int *)piVar1[0x12];
      puStack_b98 = (undefined4 *)0x6def37;
      (**(code **)(*piStack_b94 + 0x10c))();
      DAT_00982c80 = (int *)0x0;
      puStack_b98 = (undefined4 *)0x6def42;
      FUN_006e2f50();
      puStack_b98 = (undefined4 *)0x6def47;
      iVar10 = FUN_007a1fa0();
      if (iVar10 != 0) {
        puStack_b98 = (undefined4 *)0x1;
        ppppppiStack_b9c = (int ******)0x6def54;
        FUN_007a2200();
      }
      puStack_b98 = (undefined4 *)0x6def59;
      FUN_006e2f50();
      piVar1 = DAT_0093debc;
      DAT_00982c80 = DAT_0093debc;
      puStack_b98 = (undefined4 *)0x6def6c;
      (**(code **)(*DAT_0093debc + 4))();
      puStack_b98 = (undefined4 *)piVar1[0x13];
      ppppppiStack_b9c = (int ******)DAT_00982bdc;
      piStack_ba0 = (int *)0x6def7e;
      (*(code *)(*DAT_00982bdc)[0x57])();
      piStack_ba8 = (int *)piVar1[0x12];
      piStack_ba0 = (int *)0x0;
      ppiStack_ba4 = &piStack_b90;
      (**(code **)(*piStack_ba8 + 0xfc))();
      FUN_00750980(&DAT_00919650,0);
      piVar1 = DAT_0093debc;
      (**(code **)(*DAT_0093debc + 8))();
      (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
      DAT_00982c80 = (int *)0x0;
      puStack_b80 = (undefined4 *)0x6defc2;
      FUN_006e2f50();
    }
    piVar1 = DAT_0093de94;
    if ((DAT_00925e90 == 6) && (*(int *)(DAT_009196b4 + 0x30) != 0)) {
      puStack_afc = (undefined4 *)0x0;
      ppppppiStack_af8 = (int ******)0x0;
      ppppppiStack_af4 = (int ******)0x3f800000;
      ppppppiStack_af0 = (int ******)0x0;
      ppppppiStack_aec = (int ******)0x3f800000;
      ppiStack_ae8 = (int **)0x3f800000;
      ppppppiStack_ae4 = (int ******)0x0;
      ppppppiStack_ae0 = (int ******)0x3f800000;
      ppppppiStack_b3c = *(int *******)(DAT_009196b4 + 0x14c);
      puStack_b2c = *(undefined4 **)(DAT_009196b4 + 0x158);
      ppppppiStack_b0c = *(int *******)(DAT_009196b4 + 0x164);
      ppppppiStack_b1c = *(int *******)(DAT_009196b4 + 0x170);
      puStack_b38 = *(undefined4 **)(DAT_009196b4 + 0x150);
      puStack_b28 = *(undefined4 **)(DAT_009196b4 + 0x15c);
      ppppppiStack_b08 = *(int *******)(DAT_009196b4 + 0x168);
      uStack_b18 = *(undefined4 *)(DAT_009196b4 + 0x174);
      piStack_b34 = *(int **)(DAT_009196b4 + 0x154);
      ppppppiStack_b24 = *(int *******)(DAT_009196b4 + 0x160);
      ppppppiStack_b04 = *(int *******)(DAT_009196b4 + 0x16c);
      piStack_b14 = *(int **)(DAT_009196b4 + 0x178);
      iVar10 = 0;
      do {
        (&stack0xfffff544)[iVar10 * 4] = 0xff;
        (&stack0xfffff545)[iVar10 * 4] = 0xff;
        (&stack0xfffff546)[iVar10 * 4] = 0xff;
        (&stack0xfffff547)[iVar10 * 4] = 0xff;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 4);
      DAT_00982c80 = DAT_0093de94;
      puStack_b80 = (undefined4 *)0x6df175;
      (**(code **)(*DAT_0093de94 + 4))();
      puStack_b80 = (undefined4 *)piVar1[0x13];
      ppppppiStack_b84 = (int ******)DAT_00982bdc;
      uStack_b88 = 0x6df187;
      (*(code *)(*DAT_00982bdc)[0x57])();
      piStack_b90 = (int *)piVar1[0x12];
      uStack_b88 = 0;
      ppiStack_b8c = &piStack_b78;
      piStack_b94 = (int *)0x6df199;
      (**(code **)(*piStack_b90 + 0xfc))();
      piStack_b94 = (int *)0x0;
      puStack_b98 = (undefined4 *)&DAT_00987ab0;
      piStack_ba0 = &iStack_b50;
      ppppppiStack_b9c = (int ******)0x0;
      ppiStack_ba4 = (int **)0x6df1aa;
      FUN_006d1a40();
      piVar1 = DAT_0093de94;
      piStack_b94 = (int *)0x6df1ba;
      (**(code **)(*DAT_0093de94 + 8))();
      piStack_b94 = (int *)piVar1[0x12];
      puStack_b98 = (undefined4 *)0x6df1c6;
      (**(code **)(*piStack_b94 + 0x10c))();
      DAT_00982c80 = (int *)0x0;
    }
    if ((DAT_009017dc != 0) && (DAT_008f9218 != 0)) {
      puStack_b80 = (undefined4 *)0x6df1e1;
      FUN_006dbb20();
    }
    puStack_b80 = (undefined4 *)0x6df1e6;
    FUN_006cfce0();
    puStack_b80 = &DAT_00919650;
    ppppppiStack_b84 = (int ******)0x6df1f0;
    FUN_0041ad20();
    piVar1 = DAT_0093debc;
    DAT_00982c80 = DAT_0093debc;
    puStack_b80 = (undefined4 *)0x6df206;
    (**(code **)(*DAT_0093debc + 4))();
    puStack_b80 = (undefined4 *)piVar1[0x13];
    ppppppiStack_b84 = (int ******)DAT_00982bdc;
    uStack_b88 = 0x6df218;
    (*(code *)(*DAT_00982bdc)[0x57])();
    piStack_b90 = (int *)piVar1[0x12];
    uStack_b88 = 0;
    ppiStack_b8c = &piStack_b78;
    piStack_b94 = (int *)0x6df22a;
    (**(code **)(*piStack_b90 + 0xfc))();
    piStack_b94 = (int *)0x6df22f;
    FUN_00667660();
    piVar1 = DAT_0093debc;
    piStack_b94 = (int *)0x6df23c;
    (**(code **)(*DAT_0093debc + 8))();
    piStack_b94 = (int *)piVar1[0x12];
    puStack_b98 = (undefined4 *)0x6df248;
    (**(code **)(*piStack_b94 + 0x10c))();
    DAT_00982c80 = (int *)0x0;
    puStack_b98 = (undefined4 *)0x6df253;
    FUN_006e2f50();
    piVar1 = DAT_0093de98;
    DAT_00982c80 = DAT_0093de98;
    puStack_b98 = (undefined4 *)0x6df266;
    (**(code **)(*DAT_0093de98 + 4))();
    puStack_b98 = (undefined4 *)piVar1[0x13];
    ppppppiStack_b9c = (int ******)DAT_00982bdc;
    piStack_ba0 = (int *)0x6df278;
    (*(code *)(*DAT_00982bdc)[0x57])();
    piStack_ba8 = (int *)piVar1[0x12];
    piStack_ba0 = (int *)0x0;
    ppiStack_ba4 = &piStack_b90;
    (**(code **)(*piStack_ba8 + 0xfc))();
    piVar1 = DAT_0093de98;
    (**(code **)(*DAT_0093de98 + 8))();
    (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
    piVar1 = DAT_0093debc;
    DAT_00982c80 = (int *)0x0;
    if (DAT_009017e4 != 0) {
      if (DAT_009017e0 == 0) {
        DAT_00982c80 = DAT_0093debc;
        (**(code **)(*DAT_0093debc + 4))();
        (*(code *)(*DAT_00982bdc)[0x57])(DAT_00982bdc,piVar1[0x13]);
        piVar1 = (int *)piVar1[0x12];
        (**(code **)(*piVar1 + 0xfc))(piVar1,&piStack_ba8,0);
        (*(code *)(*DAT_00982bdc)[0x39])(DAT_00982bdc,0xe,0);
        FUN_00505e80(&DAT_00919650,0);
        thunk_FUN_00744e20(&DAT_00919650,0,0);
        FUN_00744840(&DAT_00919650,0);
        FUN_00507770(&DAT_00919650);
        FUN_00738860(&DAT_00919650,0);
        (*(code *)(*DAT_00982bdc)[0x39])(DAT_00982bdc,0xe,1);
        piVar1 = DAT_0093debc;
        (**(code **)(*DAT_0093debc + 8))();
        (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
        DAT_00982c80 = (int *)0x0;
      }
      else {
        (*(code *)(*DAT_00982bdc)[0x39])(DAT_00982bdc,0xe,0);
        FUN_006dae20();
        (*(code *)(*DAT_00982bdc)[0x39])(DAT_00982bdc,0xe,1);
      }
    }
    piVar1 = DAT_0093de78;
    if (DAT_009017d0 != 0) {
      DAT_00982c80 = DAT_0093de78;
      (**(code **)(*DAT_0093de78 + 4))();
      (*(code *)(*DAT_00982bdc)[0x57])(DAT_00982bdc,piVar1[0x13]);
      piVar1 = (int *)piVar1[0x12];
      (**(code **)(*piVar1 + 0xfc))(piVar1,&piStack_ba8,0);
      FUN_0044b190(&DAT_00919650,0);
      piVar1 = DAT_0093de78;
      (**(code **)(*DAT_0093de78 + 8))();
      (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
      DAT_00982c80 = (int *)0x0;
    }
    (**(code **)(**(int **)(DAT_0093dec4 + 0x48) + 0x68))
              (*(int **)(DAT_0093dec4 + 0x48),*(undefined4 *)(*(int *)(DAT_0093dec4 + 0x44) + 0x18c)
               ,8);
    DAT_00982bad = 1;
    (*(code *)(*DAT_00982bdc)[0x39])(DAT_00982bdc,0x17,4);
    FUN_006de210(&DAT_00919650,DAT_008f92e4,0);
    DAT_00982bad = 0;
    (**(code **)(**(int **)(DAT_0093dec4 + 0x48) + 0x68))
              (*(int **)(DAT_0093dec4 + 0x48),*(undefined4 *)(*(int *)(DAT_0093dec4 + 0x44) + 0x18c)
               ,7);
    piVar1 = DAT_0093dec0;
    if (DAT_009017ec != 0) {
      DAT_00982c80 = DAT_0093dec0;
      ppppppiStack_adc = (int ******)0x6df48d;
      (**(code **)(*DAT_0093dec0 + 4))();
      ppppppiStack_adc = (int ******)piVar1[0x13];
      ppppppiStack_ae0 = (int ******)DAT_00982bdc;
      ppppppiStack_ae4 = (int ******)0x6df49f;
      (*(code *)(*DAT_00982bdc)[0x57])();
      ppppppiStack_aec = (int ******)piVar1[0x12];
      ppppppiStack_ae4 = (int ******)0x0;
      ppiStack_ae8 = &piStack_ad4;
      ppppppiStack_af0 = (int ******)0x6df4b1;
      (*(code *)(*ppppppiStack_aec)[0x3f])();
      ppppppiStack_af0 = (int ******)&DAT_00919650;
      ppppppiStack_af4 = (int ******)0x6df4c0;
      FUN_00503d00();
      piVar1 = DAT_0093dec0;
      ppppppiStack_af0 = (int ******)0x6df4cd;
      (**(code **)(*DAT_0093dec0 + 8))();
      ppppppiStack_af0 = (int ******)piVar1[0x12];
      ppppppiStack_af4 = (int ******)0x6df4d9;
      (*(code *)(*ppppppiStack_af0)[0x43])();
      DAT_00982c80 = (int *)0x0;
    }
    piVar1 = DAT_0093dec0;
    if ((DAT_00925e90 == 6) && (DAT_009017ec != 0)) {
      DAT_00982c80 = DAT_0093dec0;
      ppppppiStack_adc = (int ******)0x6df50a;
      (**(code **)(*DAT_0093dec0 + 4))();
      ppppppiStack_adc = (int ******)piVar1[0x13];
      ppppppiStack_ae0 = (int ******)DAT_00982bdc;
      ppppppiStack_ae4 = (int ******)0x6df51c;
      (*(code *)(*DAT_00982bdc)[0x57])();
      ppppppiStack_aec = (int ******)piVar1[0x12];
      ppppppiStack_ae4 = (int ******)0x0;
      ppiStack_ae8 = &piStack_ad4;
      ppppppiStack_af0 = (int ******)0x6df52e;
      (*(code *)(*ppppppiStack_aec)[0x3f])();
      ppppppiStack_af0 = (int ******)0x0;
      ppppppiStack_af4 = (int ******)0xe;
      ppppppiStack_af8 = (int ******)DAT_00982bdc;
      puStack_afc = (undefined4 *)0x6df53f;
      (*(code *)(*DAT_00982bdc)[0x39])();
      puStack_afc = (undefined4 *)0x6df54a;
      FUN_00758100();
      puStack_afc = (undefined4 *)0x1;
      ppppppiStack_b00 = (int ******)0xe;
      ppppppiStack_b04 = (int ******)DAT_00982bdc;
      ppppppiStack_b08 = (int ******)0x6df55c;
      (*(code *)(*DAT_00982bdc)[0x39])();
      piVar1 = DAT_0093dec0;
      ppppppiStack_b08 = (int ******)0x6df569;
      (**(code **)(*DAT_0093dec0 + 8))();
      ppppppiStack_b08 = (int ******)piVar1[0x12];
      ppppppiStack_b0c = (int ******)0x6df575;
      (*(code *)(*ppppppiStack_b08)[0x43])();
      DAT_00982c80 = (int *)0x0;
    }
    ppppppiStack_adc = (int ******)&DAT_00919650;
    ppppppiStack_ae0 = (int ******)0x6df58a;
    FUN_006d04e0();
    if (DAT_00982af0 != 0) {
      ppppppiStack_adc = (int ******)&DAT_00919650;
      ppppppiStack_ae0 = (int ******)0x6df59e;
      FUN_0074c000();
    }
  }
  DAT_009885b8 = DAT_009885b8 + 1;
  DAT_00982b8c = 0;
  if (DAT_00982c38 != '\0') {
    ppppppiStack_adc = (int ******)0x7;
    ppppppiStack_ae0 = (int ******)0xa8;
    ppppppiStack_ae4 = (int ******)DAT_00982bdc;
    ppiStack_ae8 = (int **)0x6df5cf;
    (*(code *)(*DAT_00982bdc)[0x39])();
    ppppppiStack_adc = (int ******)0x0;
    ppppppiStack_ae0 = (int ******)0x1;
    ppppppiStack_ae4 = (int ******)0x7;
    ppiStack_ae8 = (int **)0x1;
    ppppppiStack_aec = (int ******)0xffffffff;
    ppppppiStack_af0 = (int ******)0x0;
    ppppppiStack_af4 = (int ******)DAT_00982a28;
    ppppppiStack_af8 = (int ******)0x6df5e4;
    FUN_006d4100();
  }
  iVar10 = DAT_009196b4;
  DAT_00982b26 = DAT_009017fc != 0;
  if ((DAT_00925e90 != 6) || (DAT_00982b27 = 1, DAT_0090180c == 0)) {
    DAT_00982b27 = 0;
  }
  if ((*(int *)(DAT_009196b4 + 0xc) == 0) || (DAT_00982b29 = 1, DAT_00901804 == 0)) {
    DAT_00982b29 = 0;
  }
  if (((DAT_00925e90 == 6) && (DAT_00901810 != 0)) && (DAT_009017ec != 0)) {
    DAT_00982b2a = '\x01';
  }
  else {
    DAT_00982b2a = '\0';
  }
  if (DAT_009017d0 == 0) {
LAB_006df66c:
    uStack_ac8 = (int *******)((uint)uStack_ac8 & 0xffffff);
  }
  else {
    uStack_ac8 = (int *******)CONCAT13(1,(undefined3)uStack_ac8);
    if (DAT_009b0a74 == '\0') goto LAB_006df66c;
  }
  if ((((bool)DAT_00982b26) || (DAT_00982b2a != '\0')) ||
     ((DAT_00901828 != 0 || (DAT_009017d0 != 0)))) {
    ppppppiStack_adc = (int ******)0x6df689;
    FUN_006dbec0();
    if (DAT_00901828 != 0) {
      ppppppiStack_adc = (int ******)0x6df696;
      FUN_006dbfe0();
    }
  }
  iVar9 = DAT_0093deac;
  uVar2 = (uint)ppppppiStack_acc >> 8;
  ppppppiStack_acc = (int ******)((uint)ppppppiStack_acc & 0xffffff00);
  uVar3 = uStack_aa4 >> 8;
  uStack_aa4 = uStack_aa4 & 0xffffff00;
  uVar5 = uStack_a9c >> 8;
  uStack_a9c = uStack_a9c & 0xffffff00;
  uVar15 = unaff_EDI & 0xffffff00;
  uVar4 = uStack_aa0 >> 8;
  uStack_aa0 = uStack_aa0 & 0xffffff00;
  if (DAT_00982b26 == '\0') {
    if (DAT_00901800 == 0) {
      if (DAT_00901828 == 0) {
        if (DAT_00982b24 == '\0') {
          if (uStack_ac8._3_1_ == '\0') {
            uStack_a9c = CONCAT31((int3)uVar5,1);
          }
          else {
            uStack_aa0 = CONCAT31((int3)uVar4,1);
          }
        }
      }
      else {
        uVar15 = CONCAT31((int3)(unaff_EDI >> 8),1);
      }
    }
    else {
      uStack_aa4 = CONCAT31((int3)uVar3,1);
    }
  }
  else {
    ppppppiStack_acc = (int ******)CONCAT31((int3)uVar2,1);
  }
  pppppiStack_ac4 = (int *****)0x0;
  if (DAT_00982b30 == '\0') {
    if (DAT_00925e90 == 6) {
      if (*(int *)(iVar10 + 0x24) != 0) {
        pppppiStack_ac4 = *(int ******)(iVar10 + 0xf0);
        DAT_008f94ec = 0.0;
        DAT_008f94c0 = *(undefined4 *)(iVar10 + 0xe0);
        DAT_008f94c4 = *(undefined4 *)(iVar10 + 0xe4);
        _DAT_008f94c8 = *(undefined4 *)(iVar10 + 0xe8);
        pfVar11 = (float *)&DAT_008f94c0;
        do {
          pfVar12 = pfVar11 + 1;
          *pfVar11 = *pfVar11 * _DAT_00899dd0;
          pfVar11 = pfVar12;
        } while ((int)pfVar12 < 0x8f94cc);
      }
    }
    else {
      DAT_008f94c0 = 0x3f000000;
      DAT_008f94c4 = 0x3f000000;
      DAT_008f94ec = 0.2;
      _DAT_008f94c8 = 0x3f000000;
      pppppiStack_ac4 = (int *****)0x3f4ccccd;
      if (*(int *)(DAT_0093deac + 0xc) == 0) goto LAB_006df7df;
      pppppiStack_ac4 = (int *****)0x3ecccccd;
      DAT_008f94ec = 0.14;
    }
    if (*(int *)(iVar9 + 0xc) != 0) {
      pppppiStack_ac4 = (int *****)((float)pppppiStack_ac4 * _DAT_008933d4);
      DAT_008f94ec = DAT_008f94ec * _DAT_0089107c;
    }
  }
  else {
    pppppiStack_ac4 = (int *****)DAT_00982b2c;
  }
LAB_006df7df:
  if (DAT_00982b2a != '\0') {
    ppppppiStack_adc = (int ******)uStack_a9c;
    ppppppiStack_ae0 = (int ******)0x6df7f1;
    FUN_006d4620();
  }
  if (uStack_ac8._3_1_ != '\0') {
    ppppppiStack_adc = (int ******)0x6df805;
    FUN_0073d0c0();
    ppppppiStack_adc = (int ******)uStack_aa0;
    ppppppiStack_ae0 = (int ******)&DAT_00919650;
    ppppppiStack_ae4 = (int ******)0x6df814;
    FUN_006d49a0();
  }
  if (DAT_00901800 != 0) {
    ppppppiStack_adc = (int ******)uStack_aa4;
    ppppppiStack_ae0 =
         (int ******)((_DAT_008f94e8 - _DAT_008f94e4) * (float)pppppiStack_ac4 + _DAT_008f94e4);
    ppppppiStack_ae4 = (int ******)0x6df843;
    FUN_006d3850();
  }
  iVar10 = 0;
  do {
    ppppppiStack_adc = (int ******)0x0;
    ppppppiStack_ae4 = (int ******)DAT_00982bdc;
    ppiStack_ae8 = (int **)0x6df858;
    ppppppiStack_ae0 = (int ******)iVar10;
    (*(code *)(*DAT_00982bdc)[0x41])();
    iVar10 = iVar10 + 1;
  } while (iVar10 < 8);
  if (((DAT_00901828 != 0) && (DAT_00982af0 != 0)) && (DAT_008f9b5c != '\0')) {
    ppppppiStack_ae0 = (int ******)0x6df882;
    ppppppiStack_adc = (int ******)uVar15;
    FUN_006d53d0();
  }
  if (DAT_00982b26 != '\0') {
    iVar10 = 0;
    do {
      ppppppiStack_adc = (int ******)0x0;
      ppppppiStack_ae4 = (int ******)DAT_00982bdc;
      ppiStack_ae8 = (int **)0x6df8a0;
      ppppppiStack_ae0 = (int ******)iVar10;
      (*(code *)(*DAT_00982bdc)[0x41])();
      iVar10 = iVar10 + 1;
    } while (iVar10 < 8);
    ppppppiStack_adc = ppppppiStack_acc;
    ppppppiStack_ae0 = (int ******)0x6df8b0;
    FUN_006dc040();
    iVar10 = 0;
    do {
      ppppppiStack_adc = (int ******)0x0;
      ppppppiStack_ae4 = (int ******)DAT_00982bdc;
      ppiStack_ae8 = (int **)0x6df8c5;
      ppppppiStack_ae0 = (int ******)iVar10;
      (*(code *)(*DAT_00982bdc)[0x41])();
      iVar10 = iVar10 + 1;
    } while (iVar10 < 8);
  }
  return;
}

