/* speed.exe 006e6e40 FUN_006e6e40; analysis pseudocode, not buildable source.
 * calls 00516f70 FUN_00516f70
 * calls 006e6380 FUN_006e6380
 * calls 006e2f50 FUN_006e2f50
 * calls 006c6810 FUN_006c6810
 * calls 006c83a0 FUN_006c83a0
 * calls 00516e10 FUN_00516e10
 * calls 006cfce0 FUN_006cfce0
 * calls 006d1260 FUN_006d1260
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006c0a30 FUN_006c0a30
 * calls 006c8000 FUN_006c8000
 * calls 006c67c0 FUN_006c67c0
 */

void FUN_006e6e40(int param_1)

{
  int *piVar1;
  short sVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int **ppiVar7;
  int *piVar8;
  int *piStack_18c;
  int **ppiStack_188;
  undefined4 uStack_184;
  int *piStack_180;
  int **ppiStack_17c;
  int *piStack_178;
  int *piStack_174;
  int *piStack_170;
  int *piStack_16c;
  int *piStack_168;
  int *piStack_164;
  int *piStack_160;
  int *piStack_15c;
  int *apiStack_158 [3];
  int iStack_14c;
  int *piStack_148;
  int aiStack_144 [2];
  int *piStack_13c;
  undefined4 *puStack_138;
  int *piStack_134;
  undefined4 uStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  
  uStack_124 = 0x6e6e54;
  FUN_006cfce0();
  uStack_124 = 0x6e6e59;
  FUN_006e2f50();
  uStack_124 = DAT_0093dac0;
  uStack_128 = 0;
  piStack_12c = DAT_00982bdc;
  uStack_130 = 0x6e6e71;
  (**(code **)(*DAT_00982bdc + 0x94))();
  uStack_130 = DAT_0093dac4;
  piStack_134 = DAT_00982bdc;
  puStack_138 = (undefined4 *)0x6e6e86;
  (**(code **)(*DAT_00982bdc + 0x9c))();
  uStack_d0 = DAT_0093dad0;
  uStack_d4 = DAT_0093dacc;
  puStack_138 = &uStack_dc;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_cc = 0;
  uStack_c8 = 0x3f800000;
  piStack_13c = DAT_00982bdc;
  aiStack_144[1] = 0x6e6ec0;
  (**(code **)(*DAT_00982bdc + 0xbc))();
  piVar1 = DAT_0093de9c;
  DAT_00982a20 = &DAT_0093dab8;
  DAT_00982c80 = (int *)0x0;
  aiStack_144[0] = *(int *)(DAT_0093de9c[0x11] + 0x484);
  piStack_148 = (int *)DAT_0093de9c[0x12];
  aiStack_144[1] = 0xf;
  iStack_14c = 0x6e6eeb;
  (**(code **)(*piStack_148 + 0x68))();
  DAT_00982c80 = piVar1;
  iStack_14c = 0x6e6ef8;
  (**(code **)(*piVar1 + 4))();
  iStack_14c = piVar1[0x13];
  apiStack_158[2] = DAT_00982bdc;
  apiStack_158[1] = (int *)0x6e6f0a;
  (**(code **)(*DAT_00982bdc + 0x15c))();
  piStack_15c = (int *)piVar1[0x12];
  apiStack_158[1] = (int *)0x0;
  apiStack_158[0] = aiStack_144;
  piStack_160 = (int *)0x6e6f1c;
  (**(code **)(*piStack_15c + 0xfc))();
  piStack_164 = DAT_009195e0;
  piStack_148 = (int *)0x0;
  aiStack_144[0] = 0;
  aiStack_144[1] = 0;
  piStack_13c = (int *)0x0;
  piStack_134 = (int *)0x0;
  uStack_130 = 0;
  piStack_12c = (int *)0x0;
  uStack_128 = 0;
  iStack_14c = 0x3f800000;
  puStack_138 = (undefined4 *)0x3f800000;
  uStack_124 = 0x3f800000;
  piVar6 = &iStack_14c;
  piVar8 = DAT_009195e0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  piStack_160 = piStack_164 + 0x10;
  piStack_168 = piStack_164 + 0x20;
  piStack_16c = (int *)0x6e6f8e;
  D3DXMatrixMultiply();
  piStack_16c = DAT_009195e0 + 0x10;
  piStack_170 = DAT_009195e0;
  piStack_174 = DAT_009195e0 + 0x20;
  ppiVar7 = apiStack_158;
  piVar6 = piStack_16c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = (int)*ppiVar7;
    ppiVar7 = ppiVar7 + 1;
    piVar6 = piVar6 + 1;
  }
  piStack_178 = (int *)0x6e6fb0;
  D3DXMatrixMultiply();
  ppiStack_17c = &piStack_164;
  piStack_178 = (int *)0x0;
  piStack_180 = (int *)0x6e6fbc;
  FUN_006c8000();
  piStack_178 = (int *)0x6e6fc6;
  (**(code **)(*piVar1 + 8))();
  piStack_178 = (int *)piVar1[0x12];
  ppiStack_17c = (int **)0x6e6fd2;
  (**(code **)(*piStack_178 + 0x10c))();
  piVar6 = DAT_0093dea0;
  DAT_00982c80 = DAT_0093dea0;
  ppiStack_17c = (int **)0x6e6fe5;
  (**(code **)(*DAT_0093dea0 + 4))();
  ppiStack_17c = (int **)piVar6[0x13];
  piStack_180 = DAT_00982bdc;
  uStack_184 = 0x6e6ff7;
  (**(code **)(*DAT_00982bdc + 0x15c))();
  piStack_18c = (int *)piVar6[0x12];
  uStack_184 = 0;
  ppiStack_188 = &piStack_174;
  (**(code **)(*piStack_18c + 0xfc))();
  FUN_006c8000(&ppiStack_17c,0);
  (**(code **)(*piVar6 + 8))();
  (**(code **)(*(int *)piVar6[0x12] + 0x10c))((int *)piVar6[0x12]);
  DAT_00982c80 = piVar1;
  (**(code **)(*piVar1 + 4))();
  (**(code **)(*DAT_00982bdc + 0x15c))(DAT_00982bdc,piVar1[0x13]);
  (**(code **)(*(int *)piVar1[0x12] + 0xfc))((int *)piVar1[0x12],&piStack_18c,0);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,0);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,0);
  if (param_1 == 0) {
    sVar2 = FUN_006e6380(DAT_00901794,DAT_00901794);
    if (sVar2 == 0x188) {
      if (DAT_00919738 != '\0') {
        FUN_006c0a30();
        iStack_14c = 0x43e10000;
        piStack_148 = (int *)0x41980000;
        piStack_13c = (int *)0x433e0000;
        puStack_138 = (undefined4 *)0x41980000;
        piStack_12c = (int *)0x433e0000;
        uStack_128 = 0x42b20000;
        iVar4 = 0;
        do {
          puVar3 = (undefined1 *)((int)&uStack_cc + iVar4);
          iVar5 = 4;
          do {
            *puVar3 = 0xff;
            puVar3 = puVar3 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        (**(code **)(*(int *)piVar1[0x12] + 0xd0))
                  ((int *)piVar1[0x12],*(undefined4 *)(piVar1[0x11] + 0x22c),DAT_00982a7c);
        (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc,0,1,3);
        (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc,0,2,3);
        FUN_006c67c0(0,1);
        FUN_006c6810(1,5,6);
        FUN_006c83a0();
        FUN_006d1260(&piStack_178,0,0);
        (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc,0,1,1);
        (**(code **)(*DAT_00982bdc + 0x114))(DAT_00982bdc,0,2,1);
      }
      FUN_00516e10();
      FUN_00516f70();
    }
  }
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
  DAT_00982c80 = (int *)0x0;
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
  return;
}

