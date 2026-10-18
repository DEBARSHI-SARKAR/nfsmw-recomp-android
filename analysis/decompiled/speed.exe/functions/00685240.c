/* speed.exe 00685240 FUN_00685240; analysis pseudocode, not buildable source.
 * calls 006685d0 FUN_006685d0
 * calls 00668650 FUN_00668650
 * calls 0067f0d0 FUN_0067f0d0
 * calls 006e8f50 FUN_006e8f50
 * calls 006687d0 FUN_006687d0
 * calls 00668850 FUN_00668850
 * calls 00668750 FUN_00668750
 * calls 00684bb0 FUN_00684bb0
 * calls 00684a80 FUN_00684a80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00685240(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 *puStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  float *pfStack_1c;
  undefined1 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
      fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0xf4) + 0x1c))();
      *(float *)(param_1 + 0x14c) = (float)fVar4;
    }
    iVar1 = *(int *)(param_1 + 0x178);
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_d4 = 0;
    local_d0 = (float)(int)*(short *)(iVar1 + 0x10) * _DAT_00890d60;
    local_cc = (float)(int)*(short *)(iVar1 + 0x12) * _DAT_00890d60;
    fStack_c8 = (float)(int)*(short *)(iVar1 + 0x14) * _DAT_00890d60;
    switch(*(undefined4 *)(param_1 + 0x140)) {
    case 0:
    case 3:
    case 6:
      break;
    default:
      local_d4 = 0x40;
      break;
    case 2:
      local_d4 = 0x80;
    }
    local_d8 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x38);
    puVar3 = (undefined4 *)
             FUN_006e8f50(auStack_c,local_d8,local_d0,local_cc,fStack_c8,*(int *)(param_1 + 0xd8));
    uStack_50 = *puVar3;
    uStack_4c = puVar3[1];
    uStack_48 = puVar3[2];
    FUN_0067f0d0(auStack_b4,&DAT_0092c5d8);
    uVar2 = *(undefined4 *)(param_1 + 0x178);
    puVar3 = &uStack_44;
    uStack_dc = DAT_0092c5e0;
    FUN_00668650(puVar3);
    uStack_34 = param_2;
    puStack_3c = &uStack_44;
    uStack_28 = param_3;
    uStack_24 = local_d8;
    puStack_30 = &local_5c;
    uStack_10 = local_d4;
    puStack_20 = &uStack_50;
    pfStack_1c = &local_d0;
    puStack_2c = &DAT_008a2fb4;
    uStack_18 = 1;
    uStack_40 = 0xa6b47fac;
    uStack_14 = uVar2;
    FUN_00684bb0(&uStack_dc,auStack_b4,uStack_44,0xa6b47fac,puStack_3c,puVar3);
    puVar3 = &DAT_009261b0;
    FUN_0067f0d0(auStack_c0,&DAT_009261b0);
    uStack_dc = DAT_009261b8;
    FUN_00684bb0(&uStack_dc,auStack_c0,0,0,0,puVar3);
    FUN_0067f0d0(auStack_bc,&DAT_0092c598);
    puVar3 = &uStack_7c;
    uStack_dc = DAT_0092c5a0;
    FUN_006687d0(puVar3);
    puStack_74 = &uStack_7c;
    uStack_78 = 0xa6b47fac;
    FUN_00684bb0(&uStack_dc,auStack_bc,uStack_7c,0xa6b47fac,puStack_74,puVar3);
    FUN_0067f0d0(auStack_a0,&DAT_0092c650);
    puVar3 = &uStack_8c;
    uStack_dc = DAT_0092c658;
    FUN_00668750(puVar3);
    uStack_88 = 0xa6b47fac;
    puStack_84 = &uStack_8c;
    FUN_00684bb0(&uStack_dc,auStack_a0,uStack_8c,0xa6b47fac,puStack_84,puVar3);
    FUN_0067f0d0(auStack_a4,&DAT_0092c610);
    puVar3 = &uStack_6c;
    uStack_dc = DAT_0092c618;
    FUN_00668850(puVar3);
    uStack_68 = 0xa6b47fac;
    puStack_64 = &uStack_6c;
    FUN_00684bb0(&uStack_dc,auStack_a4,uStack_6c,0xa6b47fac,puStack_64,puVar3);
    puVar5 = &DAT_0092c588;
    FUN_0067f0d0(auStack_a8,&DAT_0092c588);
    uStack_dc = DAT_0092c590;
    FUN_00684bb0(&uStack_dc,auStack_a8,0,0,0,puVar5);
    puVar3 = &DAT_0092c560;
    FUN_0067f0d0(auStack_ac,&DAT_0092c560);
    uStack_dc = DAT_0092c568;
    FUN_00684bb0(&uStack_dc,auStack_ac,0,0,0,puVar3);
    FUN_0067f0d0(auStack_c4,&DAT_0092c5e8);
    puVar3 = &uStack_9c;
    uStack_dc = DAT_0092c5f0;
    FUN_006685d0(puVar3);
    puStack_94 = &uStack_9c;
    uStack_98 = 0xa6b47fac;
    FUN_00684bb0(&uStack_dc,auStack_c4,uStack_9c,0xa6b47fac,puStack_94,puVar3);
    puVar5 = &DAT_0092c5c8;
    FUN_0067f0d0(auStack_b0,&DAT_0092c5c8);
    uStack_dc = DAT_0092c5d0;
    FUN_00684bb0(&uStack_dc,auStack_b0,0,0,0,puVar5);
    puVar3 = &DAT_00926188;
    FUN_0067f0d0(auStack_b8,&DAT_00926188);
    uStack_dc = DAT_00926190;
    FUN_00684bb0(&uStack_dc,auStack_b8,0,0,0,puVar3);
    uStack_dc = DAT_0092c5e0;
    FUN_00684a80(&uStack_dc);
    uStack_dc = DAT_009261b8;
    FUN_00684a80(&uStack_dc);
    uStack_dc = DAT_0092c658;
    FUN_00684a80(&uStack_dc);
    uStack_dc = DAT_0092c5a0;
    FUN_00684a80(&uStack_dc);
    uStack_dc = DAT_0092c618;
    FUN_00684a80(&uStack_dc);
    uStack_dc = DAT_0092c5d0;
    FUN_00684a80(&uStack_dc);
  }
  return;
}

