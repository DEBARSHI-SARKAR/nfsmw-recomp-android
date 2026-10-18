/* speed.exe 006dae20 FUN_006dae20; analysis pseudocode, not buildable source.
 * calls 006d40e0 FUN_006d40e0
 * calls 00750b00 thunk_FUN_00744e20
 * calls 006d3b80 FUN_006d3b80
 * calls 00505e80 FUN_00505e80
 * calls 00507770 FUN_00507770
 * calls 00744840 FUN_00744840
 * calls 006e2f50 FUN_006e2f50
 * calls 00460bf0 FUN_00460bf0
 * calls 00503400 FUN_00503400
 * calls 00738860 FUN_00738860
 */

void FUN_006dae20(void)

{
  int *piVar1;
  int *piStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 **ppuStack_b0;
  int *piStack_ac;
  undefined4 *puStack_a8;
  int *piStack_a4;
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  undefined4 *puStack_94;
  int *piStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  int iStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  int **ppiStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  
  (**(code **)(*DAT_00982bdc + 0x94))();
  if (0 < DAT_00901808) {
    piStack_38 = DAT_00982bdc;
    uStack_3c = 0x6dae53;
    (**(code **)(*DAT_00982bdc + 0x9c))();
  }
  piStack_38 = (int *)0x0;
  uStack_3c = 1;
  piStack_40 = (int *)0x8ae868;
  puStack_44 = (undefined4 *)0x6dae61;
  piStack_40 = (int *)FUN_00460bf0();
  puStack_44 = (undefined4 *)0x6dae6a;
  FUN_00503400();
  piStack_38 = (int *)0xff786482;
  uStack_3c = 0xc1;
  piStack_40 = DAT_00982bdc;
  puStack_44 = (undefined4 *)0x6dae87;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  puStack_44 = (undefined4 *)0xffffffff;
  puStack_48 = (undefined4 *)0xe;
  piStack_4c = (int *)0x1;
  uStack_50 = 1;
  ppiStack_54 = &piStack_38;
  puStack_58 = &stack0xffffffcc;
  uStack_5c = 1;
  piStack_60 = DAT_00982960;
  piStack_38 = (int *)0xffffffff;
  iStack_64 = 0x6daeb5;
  FUN_006d3b80();
  puStack_44 = DAT_00982960;
  if (0 < DAT_00901808) {
    puStack_44 = (undefined4 *)DAT_0093e7bc;
    puStack_48 = DAT_0093e7b8;
    piStack_4c = (int *)0x6daed4;
    FUN_006d40e0();
    puStack_44 = DAT_0093e7b8;
  }
  puStack_48 = (undefined4 *)0x0;
  piStack_4c = DAT_00982bdc;
  uStack_50 = 0x6daef5;
  (**(code **)(*DAT_00982bdc + 0x94))();
  uStack_50 = DAT_00982a2c;
  ppiStack_54 = (int **)DAT_00982bdc;
  puStack_58 = (undefined1 *)0x6daf0a;
  (**(code **)(*DAT_00982bdc + 0x9c))();
  puStack_58 = (undefined1 *)0x7;
  uStack_5c = 0xa8;
  piStack_60 = DAT_00982bdc;
  iStack_64 = 0x6daf1f;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  piVar1 = DAT_0093debc;
  DAT_00982c80 = DAT_0093debc;
  iStack_64 = 0x6daf32;
  (**(code **)(*DAT_0093debc + 4))();
  iStack_64 = piVar1[0x13];
  piStack_68 = DAT_00982bdc;
  uStack_6c = 0x6daf44;
  (**(code **)(*DAT_00982bdc + 0x15c))();
  piStack_74 = (int *)piVar1[0x12];
  uStack_6c = 0;
  puStack_70 = &uStack_5c;
  uStack_78 = 0x6daf56;
  (**(code **)(*piStack_74 + 0xfc))();
  uStack_78 = 1;
  uStack_7c = 7;
  piStack_80 = DAT_00982bdc;
  uStack_84 = 0x6daf68;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  uStack_84 = 0;
  uStack_88 = 0xe;
  piStack_8c = DAT_00982bdc;
  piStack_90 = (int *)0x6daf79;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  piStack_90 = (int *)0x0;
  puStack_94 = &DAT_00919650;
  piStack_98 = (int *)0x6daf84;
  FUN_00505e80();
  piStack_98 = (int *)0x0;
  uStack_9c = 0;
  puStack_a0 = &DAT_00919650;
  piStack_a4 = (int *)0x6daf90;
  thunk_FUN_00744e20();
  piStack_a4 = (int *)0x0;
  puStack_a8 = &DAT_00919650;
  piStack_ac = (int *)0x6daf9b;
  FUN_00744840();
  piStack_ac = (int *)0x0;
  ppuStack_b0 = (undefined4 **)&DAT_00919650;
  piStack_b4 = (int *)0x6dafa6;
  FUN_00738860();
  piStack_b4 = &DAT_00919650;
  uStack_b8 = 0x6dafb0;
  FUN_00507770();
  piVar1 = DAT_0093debc;
  piStack_90 = (int *)0x6dafc0;
  (**(code **)(*DAT_0093debc + 8))();
  piStack_90 = (int *)piVar1[0x12];
  puStack_94 = (undefined4 *)0x6dafcc;
  (**(code **)(*piStack_90 + 0x10c))();
  DAT_00982c80 = (int *)0x0;
  if (0 < DAT_00901808) {
    piStack_90 = (int *)0x0;
    puStack_94 = (undefined4 *)0x0;
    piStack_98 = DAT_00982960;
    uStack_9c = 0;
    puStack_a0 = DAT_0093e7b8;
    piStack_a4 = DAT_00982bdc;
    puStack_a8 = (undefined4 *)0x6daffa;
    (**(code **)(*DAT_00982bdc + 0x88))();
  }
  piStack_90 = (int *)0x1;
  puStack_94 = (undefined4 *)0xe;
  piStack_98 = DAT_00982bdc;
  uStack_9c = 0x6db00c;
  (**(code **)(*DAT_00982bdc + 0xe4))();
  uStack_9c = 0x6db011;
  FUN_006e2f50();
  uStack_9c = DAT_0093dac0;
  puStack_a0 = (undefined4 *)0x0;
  piStack_a4 = DAT_00982bdc;
  puStack_a8 = (undefined4 *)0x6db027;
  (**(code **)(*DAT_00982bdc + 0x94))();
  puStack_a8 = (undefined4 *)DAT_0093dac4;
  piStack_ac = DAT_00982bdc;
  ppuStack_b0 = (undefined4 **)0x6db03c;
  (**(code **)(*DAT_00982bdc + 0x9c))();
  puStack_94 = (undefined4 *)DAT_0093dad0;
  piStack_98 = (int *)DAT_0093dacc;
  ppuStack_b0 = &puStack_a0;
  puStack_a0 = (undefined4 *)0x0;
  uStack_9c = 0;
  piStack_90 = (int *)0x0;
  piStack_8c = (int *)0x3f800000;
  piStack_b4 = DAT_00982bdc;
  uStack_b8 = 0x6db07a;
  (**(code **)(*DAT_00982bdc + 0xbc))();
  DAT_00982c80 = (int *)0x0;
  DAT_00982a20 = &DAT_0093dab8;
  if (DAT_009017fc == 0) {
    piStack_b4 = (int *)0x7;
    uStack_b8 = 0xa8;
    piStack_bc = DAT_00982bdc;
    (**(code **)(*DAT_00982bdc + 0xe4))();
    FUN_006d3b80(DAT_00982a28,1,&DAT_0093e7bc,&piStack_bc,1,2,2,0xffffffff);
  }
  return;
}

