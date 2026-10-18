/* speed.exe 006d0ea0 FUN_006d0ea0; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 * calls 006cfce0 FUN_006cfce0
 * calls 006c0a30 FUN_006c0a30
 * calls 006d1260 FUN_006d1260
 * calls 006c3a50 FUN_006c3a50
 * calls 006c83a0 FUN_006c83a0
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006e2f50 FUN_006e2f50
 * calls 006c8000 FUN_006c8000
 * calls 006c67c0 FUN_006c67c0
 */

void FUN_006d0ea0(void)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int iStack_170;
  int *piStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int *piStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 *puStack_154;
  undefined4 *puStack_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
  undefined4 *puStack_144;
  undefined4 *puStack_140;
  int *piStack_13c;
  int *apiStack_138 [6];
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
  int aiStack_e0 [3];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  apiStack_138[5] = (int *)0x6d0eb4;
  FUN_006cfce0();
  apiStack_138[5] = (int *)0x6d0eb9;
  FUN_006e2f50();
  apiStack_138[5] = (int *)DAT_0093dac0;
  apiStack_138[4] = (int *)0x0;
  apiStack_138[3] = DAT_00982bdc;
  apiStack_138[2] = (int *)0x6d0ed1;
  (**(code **)(*DAT_00982bdc + 0x94))();
  apiStack_138[2] = (int *)DAT_0093dac4;
  apiStack_138[1] = DAT_00982bdc;
  apiStack_138[0] = (int *)0x6d0ee6;
  (**(code **)(*DAT_00982bdc + 0x9c))();
  uStack_d4 = DAT_0093dad0;
  aiStack_e0[2] = DAT_0093dacc;
  apiStack_138[0] = aiStack_e0;
  aiStack_e0[0] = 0;
  aiStack_e0[1] = 0;
  uStack_d0 = 0;
  uStack_cc = 0x3f800000;
  piStack_13c = DAT_00982bdc;
  puStack_140 = (undefined4 *)0x6d0f20;
  (**(code **)(*DAT_00982bdc + 0xbc))();
  puStack_140 = DAT_009195e0 + 0x10;
  puStack_144 = DAT_009195e0;
  puStack_148 = DAT_009195e0 + 0x20;
  DAT_00982a20 = &DAT_0093dab8;
  DAT_00982c80 = (int *)0x0;
  apiStack_138[3] = (int *)0x3f800000;
  apiStack_138[4] = (int *)0x0;
  apiStack_138[5] = (int *)0x0;
  uStack_108 = 0;
  uStack_104 = 0x3f800000;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0x3f800000;
  ppiVar3 = apiStack_138 + 3;
  puVar4 = DAT_009195e0;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppiVar3;
    ppiVar3 = ppiVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_14c = (undefined4 *)0x6d0fa2;
  D3DXMatrixMultiply();
  puStack_14c = DAT_009195e0 + 0x10;
  puStack_150 = DAT_009195e0;
  puStack_154 = DAT_009195e0 + 0x20;
  ppiVar3 = apiStack_138;
  puVar4 = puStack_14c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppiVar3;
    ppiVar3 = ppiVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uStack_158 = 0x6d0fc4;
  D3DXMatrixMultiply();
  uStack_158 = 0x6d0fcd;
  FUN_006c0a30();
  uStack_e4 = 0;
  aiStack_e0[0] = 0;
  uStack_d4 = 0x43960000;
  uStack_d0 = 0;
  uStack_c4 = 0x43960000;
  uStack_c0 = 0x43480000;
  uStack_158 = 0;
  uStack_15c = 0xe;
  uStack_b4 = 0;
  uStack_b0 = 0x43480000;
  piStack_160 = DAT_00982bdc;
  uStack_164 = 0x6d1020;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  uStack_164 = 0;
  uStack_168 = 7;
  piStack_16c = DAT_00982bdc;
  iStack_170 = 0x6d1031;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  iVar2 = DAT_0093e7bc;
  switch(DAT_00982b18) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    iStack_170 = 0;
    (**(code **)(*DAT_00982bdc + 0x88))(DAT_00982bdc,(&DAT_00982a30)[DAT_00982b18],0,DAT_00982a18,0)
    ;
    iVar2 = DAT_00982a14;
    break;
  case 7:
    iVar2 = DAT_00982cf0;
    break;
  case 8:
    iStack_170 = 0x6d1081;
    iVar2 = FUN_006c3a50();
    break;
  case 9:
    iVar2 = DAT_00982a6c;
    break;
  case 10:
    iVar2 = DAT_00982964;
    break;
  case 0xb:
    iVar2 = DAT_00982968;
    break;
  case 0xc:
    iVar2 = DAT_0098296c;
    break;
  case 0xd:
    iVar2 = DAT_0093def8;
    break;
  case 0xe:
    iVar2 = DAT_0093defc;
  }
  piVar1 = DAT_0093de9c;
  if (iVar2 != 0) {
    DAT_00982c80 = DAT_0093de9c;
    iStack_170 = 0x6d10ce;
    (**(code **)(*DAT_0093de9c + 4))();
    iStack_170 = piVar1[0x13];
    (**(code **)(*DAT_00982bdc + 0x15c))(DAT_00982bdc);
    piVar1 = (int *)piVar1[0x12];
    (**(code **)(*piVar1 + 0xfc))(piVar1,&uStack_108,0);
    FUN_006c8000(&iStack_170,0);
    (**(code **)(*(int *)DAT_0093de9c[0x12] + 0xd0))
              ((int *)DAT_0093de9c[0x12],*(undefined4 *)(DAT_0093de9c[0x11] + 0x22c),iVar2);
    FUN_006c67c0(0,1);
    FUN_006c6810(0,5,6);
    FUN_006c83a0();
    uStack_108 = 0;
    uStack_fc = 0x44200000;
    uStack_f8 = 0x43480000;
    uStack_ec = 0x43aa0000;
    uStack_e8 = 0x43480000;
    FUN_006d1260(&stack0xfffffee4,0,0);
    piVar1 = DAT_0093de9c;
    (**(code **)(*DAT_0093de9c + 8))();
    (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
    DAT_00982c80 = (int *)0x0;
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
  }
  return;
}

