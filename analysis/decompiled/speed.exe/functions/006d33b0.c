/* speed.exe 006d33b0 FUN_006d33b0; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 * calls 006c83a0 FUN_006c83a0
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006e2f50 FUN_006e2f50
 * calls 006c8000 FUN_006c8000
 * calls 006c67c0 FUN_006c67c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d33b0(int param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  int *piStack_124;
  int *piStack_120;
  undefined4 uStack_11c;
  int *piStack_118;
  undefined4 *puStack_114;
  undefined4 uStack_110;
  int *piStack_10c;
  float *pfStack_108;
  undefined4 *puStack_104;
  int *piStack_100;
  float fStack_fc;
  float fStack_f8;
  int *piStack_f4;
  undefined1 *puStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int iStack_e4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1 != 0) {
    iStack_e4 = param_1;
    piStack_e8 = (int *)0x0;
    piStack_ec = DAT_00982bdc;
    puStack_f0 = (undefined1 *)0x6d33d8;
    (**(code **)(*DAT_00982bdc + 0x94))();
    puStack_f0 = (undefined1 *)0x0;
    piStack_f4 = DAT_00982bdc;
    fStack_f8 = 1.0028688e-38;
    (**(code **)(*DAT_00982bdc + 0x9c))();
  }
  piVar1 = (int *)(&DAT_0093de78)[param_3];
  fStack_cc = _DAT_00891068 / (float)DAT_00982be4;
  local_70 = 0xbf800000;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_64 = 0xff7f7f7f;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  local_50 = 0;
  local_4c = 0xff7f7f7f;
  local_40 = 0x3f800000;
  local_3c = 0xbf800000;
  local_38 = 0;
  local_34 = 0xff7f7f7f;
  uStack_28 = 0xbf800000;
  uStack_24 = 0xbf800000;
  uStack_20 = 0;
  uStack_1c = 0xff7f7f7f;
  fStack_d0 = _DAT_00891068 / (float)DAT_00982be8;
  fStack_60 = -fStack_cc;
  fStack_5c = -fStack_d0;
  fStack_48 = _DAT_0089096c - fStack_cc;
  fStack_2c = _DAT_0089096c - fStack_d0;
  iStack_e4 = 0x6d3513;
  DAT_00982c80 = piVar1;
  fStack_44 = fStack_5c;
  fStack_30 = fStack_48;
  fStack_18 = fStack_60;
  fStack_14 = fStack_2c;
  (**(code **)(*piVar1 + 4))();
  iStack_e4 = piVar1[0x13];
  piStack_e8 = DAT_00982bdc;
  piStack_ec = (int *)0x6d3525;
  (**(code **)(*DAT_00982bdc + 0x15c))();
  piStack_f4 = (int *)piVar1[0x12];
  piStack_ec = (int *)0x0;
  puStack_f0 = &stack0xffffff28;
  fStack_f8 = 1.0029159e-38;
  (**(code **)(*piStack_f4 + 0xfc))();
  piStack_100 = (int *)piVar1[0x12];
  fStack_f8 = param_2;
  fStack_fc = *(float *)(piVar1[0x11] + 0x2a4);
  puStack_104 = (undefined4 *)0x6d3551;
  (**(code **)(*piStack_100 + 0xd0))();
  if (param_3 == 0xd) {
    piStack_10c = (int *)piVar1[0x12];
    puStack_104 = (undefined4 *)DAT_0098298c;
    pfStack_108 = *(float **)(piVar1[0x11] + 0x72c);
    uStack_110 = 0x6d3577;
    (**(code **)(*piStack_10c + 0xd0))();
    piStack_118 = (int *)piVar1[0x12];
    uStack_110 = DAT_0093e870;
    puStack_114 = *(undefined4 **)(piVar1[0x11] + 0xa9c);
    uStack_11c = 0x6d3594;
    (**(code **)(*piStack_118 + 0xd0))();
    piStack_100 = (int *)(_DAT_008f94d0 * DAT_008f94c0);
    uStack_11c = DAT_0093e00c;
    piStack_f4 = DAT_008f94ec;
    fStack_fc = DAT_008f94c4 * _DAT_008f94d0;
    piStack_124 = (int *)piVar1[0x12];
    fStack_f8 = _DAT_008f94c8 * _DAT_008f94d0;
    piStack_120 = *(int **)(piVar1[0x11] + 0x4d4);
    (**(code **)(*piStack_124 + 0x78))();
    (**(code **)(*(int *)piVar1[0x12] + 0x78))
              ((int *)piVar1[0x12],*(undefined4 *)(piVar1[0x11] + 0xb3c),0x3ecccccd);
    (**(code **)(*(int *)piVar1[0x12] + 0x88))
              ((int *)piVar1[0x12],*(undefined4 *)(piVar1[0x11] + 0xf24),&piStack_118);
  }
  else if (param_3 == 0) {
    fStack_d0 = 1.0;
    fStack_cc = 0.0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0x3f800000;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0x3f800000;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0x3f800000;
    iVar2 = *(int *)(DAT_00982a20 + 4);
    pfStack_108 = (float *)(&DAT_009195e0)[iVar2 * 0x1c];
    puStack_104 = pfStack_108 + 0x10;
    *pfStack_108 = 1.0;
    pfStack_108[1] = 0.0;
    pfStack_108[2] = 0.0;
    pfStack_108[3] = 0.0;
    pfStack_108[4] = 0.0;
    pfStack_108[5] = 1.0;
    pfStack_108[6] = 0.0;
    pfStack_108[7] = 0.0;
    pfStack_108[8] = 0.0;
    pfStack_108[9] = 0.0;
    pfStack_108[10] = 1.0;
    pfStack_108[0xb] = 0.0;
    pfStack_108[0xc] = 0.0;
    pfStack_108[0xd] = 0.0;
    pfStack_108[0xe] = 0.0;
    pfStack_108[0xf] = 1.0;
    piStack_10c = (int *)(pfStack_108 + 0x20);
    *puStack_104 = 0x3f800000;
    pfStack_108[0x11] = 0.0;
    pfStack_108[0x12] = 0.0;
    pfStack_108[0x13] = 0.0;
    pfStack_108[0x14] = 0.0;
    pfStack_108[0x15] = 1.0;
    pfStack_108[0x16] = 0.0;
    pfStack_108[0x17] = 0.0;
    pfStack_108[0x18] = 0.0;
    pfStack_108[0x19] = 0.0;
    pfStack_108[0x1a] = 1.0;
    pfStack_108[0x1b] = 0.0;
    pfStack_108[0x1c] = 0.0;
    pfStack_108[0x1d] = 0.0;
    pfStack_108[0x1e] = 0.0;
    pfStack_108[0x1f] = 1.0;
    uStack_110 = 0x6d372d;
    D3DXMatrixMultiply();
    puStack_104 = *(undefined4 **)(&DAT_009195e4 + iVar2 * 0x70);
    pfStack_108 = &fStack_d0;
    DAT_008fae9c = 0xffffffff;
    piStack_10c = (int *)0x6d3745;
    FUN_006c8000();
  }
  puStack_104 = (undefined4 *)param_6;
  pfStack_108 = (float *)param_5;
  piStack_10c = (int *)param_4;
  uStack_110 = 0x6d3759;
  FUN_006c6810();
  uStack_110 = 0;
  puStack_114 = (undefined4 *)0x0;
  piStack_118 = (int *)0x6d3760;
  FUN_006c67c0();
  puStack_104 = (undefined4 *)0x6d3768;
  FUN_006c83a0();
  DAT_00982ca0 = 0;
  pfStack_108 = (float *)piVar1[0x12];
  puStack_104 = (undefined4 *)param_7;
  piStack_10c = (int *)0x6d377e;
  (**(code **)((int)*pfStack_108 + 0x100))();
  piStack_10c = (int *)DAT_00982c80[0x12];
  uStack_110 = 0x6d378f;
  (**(code **)(*piStack_10c + 0x104))();
  uStack_110 = 0x18;
  puStack_114 = &uStack_9c;
  piStack_118 = (int *)0x2;
  uStack_11c = 6;
  piStack_120 = DAT_00982bdc;
  piStack_124 = (int *)0x6d37a8;
  (**(code **)(*DAT_00982bdc + 0x14c))();
  piStack_124 = (int *)piVar1[0x12];
  (**(code **)(*piStack_124 + 0x108))();
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
  iVar2 = DAT_00982a20;
  DAT_00982c80 = (int *)0x0;
  FUN_006e2f50();
  (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0,*(undefined4 *)(iVar2 + 8));
  (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc,*(undefined4 *)(iVar2 + 0xc));
  uStack_11c = *(undefined4 *)(iVar2 + 0x14);
  piStack_118 = *(int **)(iVar2 + 0x18);
  piStack_124 = (int *)0x0;
  piStack_120 = (int *)0x0;
  puStack_114 = (undefined4 *)0x0;
  uStack_110 = 0x3f800000;
  (**(code **)(*DAT_00982bdc + 0xbc))(DAT_00982bdc,&piStack_124);
  DAT_00982c80 = (int *)0x0;
  DAT_00982a20 = iVar2;
  return;
}

