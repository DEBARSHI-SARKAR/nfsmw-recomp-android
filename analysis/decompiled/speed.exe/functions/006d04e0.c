/* speed.exe 006d04e0 FUN_006d04e0; analysis pseudocode, not buildable source.
 * calls 006c0160 FUN_006c0160
 * calls 006d1260 FUN_006d1260
 * calls 006be940 FUN_006be940
 * calls 007e7d64 D3DXVec4Transform
 * calls 006d0350 FUN_006d0350
 * calls 004fd370 FUN_004fd370
 * calls 00460bf0 FUN_00460bf0
 * calls 006c8000 FUN_006c8000
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d04e0(int param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  char *pcStack_144;
  undefined4 local_130 [4];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0 [2];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined1 local_20 [28];
  
  iVar7 = DAT_00916054;
  pcStack_144 = "E3DEMO";
  uVar4 = FUN_00460bf0();
  FUN_004fd370(uVar4);
  if (DAT_00925e90 == 6) {
    local_11c = *(undefined4 *)(DAT_009b392c + 0x174);
    local_130[0] = *(undefined4 *)(DAT_009b392c + 0x17c);
    local_118 = *(undefined4 *)(DAT_009b392c + 0x178);
    local_120 = *(undefined4 *)(DAT_009b392c + 0x170);
    pcVar1 = *(char **)(param_1 + 0x40);
    pcStack_144 = (char *)&local_120;
    local_114 = local_130[0];
    FUN_006be940(local_d0);
    puVar10 = &local_120;
    puVar9 = local_20;
    pcStack_144 = pcVar1;
    D3DXVec4Transform(puVar9,puVar10);
    piVar5 = DAT_0093de9c;
    local_11c = 0x3f800000;
    local_118 = 0;
    local_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0x3f800000;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0x3f800000;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0x3f800000;
    DAT_00982c80 = DAT_0093de9c;
    (**(code **)(*DAT_0093de9c + 4))();
    (**(code **)(*DAT_00982bdc + 0x15c))(DAT_00982bdc,piVar5[0x13]);
    piVar5 = (int *)piVar5[0x12];
    (**(code **)(*piVar5 + 0xfc))(piVar5,&pcStack_144,0);
    FUN_006c8000(local_130,0);
    FUN_006d0350(&DAT_009195e0,puVar10,puVar9);
    uVar4 = 0;
    piVar6 = DAT_00982bdc;
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,0);
    piVar5 = (int *)(iVar7 + 0x38);
    fVar8 = 0.0;
    if (((_DAT_00890968 < *(float *)(iVar7 + 0x40)) && (*piVar5 == 0)) &&
       (_DAT_00890968 < *(float *)(iVar7 + 0x44))) {
      fVar8 = *(float *)(iVar7 + 0x44);
    }
    if (((_DAT_00890968 < *(float *)(iVar7 + 100)) && (*(int *)(iVar7 + 0x5c) == 0)) &&
       (fVar8 < *(float *)(iVar7 + 0x68))) {
      fVar8 = *(float *)(iVar7 + 0x68);
    }
    if (((_DAT_00890968 < *(float *)(iVar7 + 0x88)) && (*(int *)(iVar7 + 0x80) == 0)) &&
       (fVar8 < *(float *)(iVar7 + 0x8c))) {
      fVar8 = *(float *)(iVar7 + 0x8c);
    }
    if (((_DAT_00890968 < *(float *)(iVar7 + 0xac)) && (*(int *)(iVar7 + 0xa4) == 0)) &&
       (fVar8 < *(float *)(iVar7 + 0xb0))) {
      fVar8 = *(float *)(iVar7 + 0xb0);
    }
    (**(code **)(*(int *)DAT_0093de9c[0x12] + 0x68))
              ((int *)DAT_0093de9c[0x12],*(undefined4 *)(DAT_0093de9c[0x11] + 0x484),0xf);
    iVar7 = 4;
    do {
      iVar2 = *(int *)(&DAT_00915a18 + *piVar5 * 4);
      if (iVar2 != 0) {
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0x42800000;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0x42800000;
        uStack_d4 = 0x42800000;
        local_d0[0] = 0;
        uStack_c8 = 0;
        uStack_c4 = 0x42800000;
        uStack_c0 = 0;
        uStack_78 = 0x80808080;
        uStack_74 = 0x80808080;
        uStack_70 = 0x80808080;
        uStack_6c = 0x80808080;
        uStack_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0x3f800000;
        uStack_ac = 0;
        uStack_a8 = 0x3f800000;
        uStack_a4 = 0x3f800000;
        uStack_a0 = 0;
        uStack_9c = 0x3f800000;
        uStack_68 = 0;
        FUN_006c0160(&uStack_f8,piVar5,piVar6,fVar8,uVar4,
                     *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x290));
        FUN_006d1260(&uStack_f8,iVar2,0);
      }
      piVar3 = DAT_0093de9c;
      piVar5 = piVar5 + 9;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    (**(code **)(*DAT_0093de9c + 8))();
    (**(code **)(*(int *)piVar3[0x12] + 0x10c))((int *)piVar3[0x12]);
    DAT_00982c80 = (int *)0x0;
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
  }
  return;
}

