/* speed.exe 006d53d0 FUN_006d53d0; analysis pseudocode, not buildable source.
 * calls 006d4ef0 FUN_006d4ef0
 * calls 006e2f50 FUN_006e2f50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d53d0(char param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piStack_128;
  int *piStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int **ppiStack_118;
  undefined4 uStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  int *piStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  float fStack_f4;
  float fStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  int **ppiStack_dc;
  undefined4 uStack_d8;
  int *piStack_d4;
  int iStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  int *piStack_c4;
  float fStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  undefined1 *puStack_b4;
  char cStack_74;
  int iStack_5c;
  int iStack_58;
  undefined1 local_20 [32];
  
  piVar2 = DAT_0093deb8;
  iVar1 = DAT_0093deb8[10];
  if (param_1 == '\0') {
    uVar3 = DAT_00982c60 + 1 & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    piVar4 = (int *)(&DAT_0093de60)[uVar3];
  }
  else {
    piVar4 = DAT_00982a28;
    if (iVar1 == 1) {
      uVar3 = DAT_00982c60 + 1 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      piVar4 = (int *)(&DAT_0093de60)[uVar3];
    }
  }
  puStack_b4 = local_20;
  piStack_bc = (int *)0x6d5441;
  piStack_b8 = piVar4;
  (**(code **)(*piVar4 + 0x30))();
  fStack_c0 = 0.0;
  piStack_c4 = DAT_00982bdc;
  uStack_c8 = 0x6d5453;
  piStack_bc = piVar4;
  (**(code **)(*DAT_00982bdc + 0x94))();
  uStack_c8 = 0;
  piStack_cc = DAT_00982bdc;
  iStack_d0 = 0x6d5462;
  (**(code **)(*DAT_00982bdc + 0x9c))();
  DAT_00982c80 = piVar2;
  iStack_d0 = 0x6d546f;
  (**(code **)(*piVar2 + 4))();
  iStack_d0 = piVar2[0x13];
  piStack_d4 = DAT_00982bdc;
  uStack_d8 = 0x6d5481;
  (**(code **)(*DAT_00982bdc + 0x15c))();
  piStack_e0 = (int *)piVar2[0x12];
  uStack_d8 = 0;
  ppiStack_dc = &piStack_c4;
  uStack_e4 = 0x6d5493;
  (**(code **)(*piStack_e0 + 0xfc))();
  uStack_e4 = (&DAT_0093def8)[DAT_00982c60];
  piStack_ec = (int *)piVar2[0x12];
  uStack_e8 = *(undefined4 *)(piVar2[0x11] + 0x22c);
  fStack_f0 = 1.0040459e-38;
  (**(code **)(*piStack_ec + 0xd0))();
  piStack_f8 = (int *)piVar2[0x12];
  fStack_f0 = (float)DAT_00982964;
  fStack_f4 = *(float *)(piVar2[0x11] + 0x2a4);
  uStack_fc = 0x6d54d4;
  (**(code **)(*piStack_f8 + 0xd0))();
  uStack_fc = 0;
  uStack_100 = 7;
  piStack_104 = DAT_00982bdc;
  piStack_108 = (int *)0x6d54e5;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  piStack_108 = piVar2;
  uStack_10c = 0x6d54ed;
  FUN_006d4ef0();
  fStack_f0 = (float)iStack_5c;
  piStack_d4 = (int *)0xbf800000;
  iStack_d0 = 0x3f800000;
  piStack_cc = (int *)0x0;
  uStack_c8 = 0x3f800000;
  piStack_bc = (int *)0x3f800000;
  piStack_b8 = (int *)0x3f800000;
  puStack_b4 = (undefined1 *)0x0;
  if (iStack_5c < 0) {
    fStack_f0 = fStack_f0 + _DAT_00891214;
  }
  fStack_f0 = _DAT_00891068 / fStack_f0;
  fStack_f4 = (float)iStack_58;
  if (iStack_58 < 0) {
    fStack_f4 = fStack_f4 + _DAT_00891214;
  }
  fStack_f4 = _DAT_00891068 / fStack_f4;
  DAT_00982ca0 = 0;
  piStack_c4 = (int *)-fStack_f0;
  fStack_c0 = -fStack_f4;
  piStack_108 = (int *)piVar2[0x12];
  uStack_10c = 0x6d5603;
  (**(code **)(*piStack_108 + 0x104))();
  piStack_110 = (int *)piVar2[0x12];
  uStack_10c = 0;
  uStack_114 = 0x6d5610;
  (**(code **)(*piStack_110 + 0x100))();
  uStack_114 = 0x18;
  ppiStack_118 = &piStack_e0;
  uStack_11c = 2;
  uStack_120 = 6;
  piStack_124 = DAT_00982bdc;
  piStack_128 = (int *)0x6d5629;
  (**(code **)(*DAT_00982bdc + 0x14c))();
  piStack_128 = (int *)piVar2[0x12];
  (**(code **)(*piStack_128 + 0x108))();
  DAT_00982c60 = DAT_00982c60 + 1 & 0x80000001;
  if ((int)DAT_00982c60 < 0) {
    DAT_00982c60 = (DAT_00982c60 - 1 | 0xfffffffe) + 1;
  }
  if (iVar1 == 1) {
    if (cStack_74 == '\0') {
      uVar3 = DAT_00982c60 + 1 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0,(&DAT_0093de60)[uVar3]);
    }
    else {
      (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0,DAT_00982a28);
    }
    (**(code **)(*(int *)piVar2[0x12] + 0xd0))
              ((int *)piVar2[0x12],*(undefined4 *)(piVar2[0x11] + 0x22c),
               (&DAT_0093def8)[DAT_00982c60]);
    (**(code **)(*(int *)piVar2[0x12] + 0x104))((int *)piVar2[0x12]);
    (**(code **)(*(int *)piVar2[0x12] + 0x100))((int *)piVar2[0x12],1);
    (**(code **)(*DAT_00982bdc + 0x14c))(DAT_00982bdc,6,2,&uStack_11c,0x18);
    (**(code **)(*(int *)piVar2[0x12] + 0x108))((int *)piVar2[0x12]);
    DAT_00982c60 = DAT_00982c60 + 1 & 0x80000001;
    if ((int)DAT_00982c60 < 0) {
      DAT_00982c60 = (DAT_00982c60 - 1 | 0xfffffffe) + 1;
    }
  }
  (**(code **)(*piVar2 + 8))();
  (**(code **)(*(int *)piVar2[0x12] + 0x10c))((int *)piVar2[0x12]);
  iVar1 = DAT_00982a20;
  DAT_00982c80 = (int *)0x0;
  FUN_006e2f50();
  (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0,*(undefined4 *)(iVar1 + 8));
  (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc,*(undefined4 *)(iVar1 + 0xc));
  uStack_120 = *(undefined4 *)(iVar1 + 0x14);
  uStack_11c = *(undefined4 *)(iVar1 + 0x18);
  piStack_128 = (int *)0x0;
  piStack_124 = (int *)0x0;
  ppiStack_118 = (int **)0x0;
  uStack_114 = 0x3f800000;
  (**(code **)(*DAT_00982bdc + 0xbc))(DAT_00982bdc,&piStack_128);
  DAT_00982c80 = (int *)0x0;
  DAT_00982a20 = iVar1;
  return;
}

