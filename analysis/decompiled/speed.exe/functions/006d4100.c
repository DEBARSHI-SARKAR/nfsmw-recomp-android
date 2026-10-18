/* speed.exe 006d4100 FUN_006d4100; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 * calls 006c0a30 FUN_006c0a30
 * calls 00503400 FUN_00503400
 * calls 006d1260 FUN_006d1260
 * calls 006c6cc0 FUN_006c6cc0
 * calls 006c83a0 FUN_006c83a0
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006c8000 FUN_006c8000
 * calls 00460bf0 FUN_00460bf0
 * calls 006c67c0 FUN_006c67c0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d4100(int *param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
                 undefined4 param_6,char param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int **ppiVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_158;
  int *piStack_154;
  int iStack_150;
  int *apiStack_14c [7];
  undefined1 auStack_98 [104];
  undefined1 local_30 [44];
  
  apiStack_14c[6] = (int *)local_30;
  apiStack_14c[5] = param_1;
  apiStack_14c[4] = (int *)0x6d4120;
  (**(code **)(*param_1 + 0x30))();
  apiStack_14c[4] = param_1;
  apiStack_14c[3] = (int *)0x0;
  apiStack_14c[2] = DAT_00982bdc;
  apiStack_14c[1] = (int *)0x6d4131;
  (**(code **)(*DAT_00982bdc + 0x94))();
  apiStack_14c[1] = (int *)0x0;
  apiStack_14c[0] = DAT_00982bdc;
  iStack_150 = 0x6d4141;
  (**(code **)(*DAT_00982bdc + 0x9c))();
  piVar5 = DAT_0093de94;
  if (param_7 == '\0') {
    piVar5 = DAT_0093de9c;
  }
  iStack_150 = 0x6d4161;
  DAT_00982c80 = piVar5;
  (**(code **)(*piVar5 + 4))();
  iStack_150 = piVar5[0x13];
  piStack_154 = DAT_00982bdc;
  uStack_158 = 0x6d4173;
  (**(code **)(*DAT_00982bdc + 0x15c))();
  uStack_158 = 0;
  (**(code **)(*(int *)piVar5[0x12] + 0xfc))((int *)piVar5[0x12],apiStack_14c + 1);
  puVar1 = DAT_009195e0;
  apiStack_14c[3] = (int *)0x3f800000;
  apiStack_14c[4] = (int *)0x0;
  apiStack_14c[5] = (int *)0x0;
  apiStack_14c[6] = (int *)0x0;
  ppiVar6 = apiStack_14c + 3;
  puVar7 = DAT_009195e0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *ppiVar6;
    ppiVar6 = ppiVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  D3DXMatrixMultiply(puVar1 + 0x20,puVar1,puVar1 + 0x10);
  puVar7 = DAT_009195e0;
  puVar1 = DAT_009195e0 + 0x10;
  puVar2 = DAT_009195e0 + 0x20;
  ppiVar6 = apiStack_14c;
  puVar8 = puVar1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *ppiVar6;
    ppiVar6 = ppiVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  D3DXMatrixMultiply(puVar2,puVar7,puVar1);
  FUN_006c8000(&uStack_158,0);
  FUN_006c0a30();
  iVar4 = 0;
  do {
    auStack_98[iVar4 * 4] = (char)((uint)param_3 >> 0x10);
    auStack_98[iVar4 * 4 + 1] = (char)((uint)param_3 >> 8);
    auStack_98[iVar4 * 4 + 2] = (char)param_3;
    auStack_98[iVar4 * 4 + 3] = (char)((uint)param_3 >> 0x18);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,0);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,0);
  if (param_2 == 0) {
    if (param_7 != '\0') {
      (**(code **)(*DAT_00982bdc + 0x104))(DAT_00982bdc,0,0);
      goto LAB_006d4429;
    }
    uVar3 = FUN_00460bf0("WHITE16X16_NOALPHA",1);
    uVar3 = FUN_00503400(uVar3);
    FUN_006c6cc0(uVar3,0);
  }
  else {
    (**(code **)(*(int *)piVar5[0x12] + 0xd0))
              ((int *)piVar5[0x12],*(undefined4 *)(piVar5[0x11] + 0x22c),param_2);
LAB_006d4429:
    if (param_7 != '\0') goto LAB_006d4453;
  }
  FUN_006c67c0(0,1);
  FUN_006c6810(param_4,param_5,param_6);
  FUN_006c83a0();
LAB_006d4453:
  FUN_006d1260(&stack0xfffffed0,0,0);
  (**(code **)(*piVar5 + 8))();
  (**(code **)(*(int *)piVar5[0x12] + 0x10c))((int *)piVar5[0x12]);
  DAT_00982c80 = (int *)0x0;
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,7,1);
  return;
}

