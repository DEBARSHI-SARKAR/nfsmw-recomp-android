/* speed.exe 006da350 FUN_006da350; analysis pseudocode, not buildable source.
 * calls 006bdbb0 FUN_006bdbb0
 * calls 0045ed30 FUN_0045ed30
 * calls 006bdc60 FUN_006bdc60
 * calls 004700d0 FUN_004700d0
 * calls 006cf0a0 FUN_006cf0a0
 * calls 00444fe0 FUN_00444fe0
 * calls 007e7d5e D3DXMatrixMultiply
 */

void __thiscall FUN_006da350(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iStack_150;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0 [4];
  undefined4 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_f0 = 0x3f800000;
  local_ec = 0;
  local_e8 = 0;
  FUN_006cf0a0(local_50,&local_e0,&local_f0,&DAT_00901760);
  local_44 = 0;
  local_34 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  FUN_006cf0a0(local_90,param_2,param_3,&DAT_00901760);
  local_84 = 0;
  local_74 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  FUN_00444fe0(&DAT_00987fc0,local_90);
  FUN_0045ed30(local_d0,local_50);
  D3DXMatrixMultiply(local_d0,local_90,local_d0);
  local_d0[0] = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0x3f800000;
  FUN_0045ed30(&local_dc,&local_dc);
  uVar3 = DAT_008f9014;
  uVar2 = DAT_008f9010;
  piVar4 = (int *)(&DAT_008f9028 +
                  (DAT_00982b78 % *(uint *)(&DAT_008f9018 + DAT_009017b8 * 4) +
                  (DAT_009017b8 * 3 + -3) * 2) * 0x18);
  param_1 = param_1 - (int)piVar4;
  iStack_150 = 6;
  do {
    iVar5 = *(int *)(param_1 + (int)piVar4);
    if (iVar5 == 0) goto LAB_006da8bc;
    iVar1 = *(int *)(iVar5 + 0x40);
    *(bool *)(iVar5 + 8) = *piVar4 != 0;
    if (iVar1 == 0) goto LAB_006da8bc;
    puVar8 = *(undefined4 **)(iVar5 + 0x60);
    puVar6 = DAT_00919690;
    puVar7 = (undefined4 *)&stack0xfffffe64;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uStack_13c = 0x3f800000;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0x3f800000;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0x3f800000;
    uStack_128 = 0xbf800000;
    switch(*puVar8) {
    case 5:
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      D3DXMatrixMultiply(&stack0xfffffe64,&stack0xfffffe64,&uStack_13c);
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x4000);
      break;
    case 6:
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      D3DXMatrixMultiply(&stack0xfffffe64,&stack0xfffffe64,&uStack_13c);
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0xc000);
      break;
    case 7:
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      D3DXMatrixMultiply(&stack0xfffffe64,&stack0xfffffe64,&uStack_13c);
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      uVar9 = 0xc000;
      goto LAB_006da77d;
    case 8:
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      D3DXMatrixMultiply(&stack0xfffffe64,&stack0xfffffe64,&uStack_13c);
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      uVar9 = 0x4000;
LAB_006da77d:
      FUN_006bdbb0(&stack0xfffffe64,&stack0xfffffe64,uVar9);
      break;
    case 9:
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      D3DXMatrixMultiply(&stack0xfffffe64,&stack0xfffffe64,&uStack_13c);
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      break;
    case 10:
      FUN_006bdc60(&stack0xfffffe64,&stack0xfffffe64,0x8000);
      D3DXMatrixMultiply(&stack0xfffffe64,&stack0xfffffe64,&uStack_13c);
      break;
    default:
      puVar8 = (undefined4 *)&stack0xfffffe64;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    FUN_004700d0(&stack0xfffffe64,DAT_009259bc);
    if ((DAT_00911020 == 0) && (*(undefined4 *)(iVar1 + 0x2b0) = 0, DAT_00911020 == 0)) {
      *(undefined4 *)(iVar1 + 0xb4) = 0;
    }
    *(undefined4 *)(iVar1 + 0xbc) = uVar2;
    *(undefined4 *)(iVar1 + 0xc0) = uVar3;
    if (DAT_00911020 == 0) {
      *(undefined2 *)(iVar1 + 0xc4) = DAT_00987db8;
    }
LAB_006da8bc:
    piVar4 = piVar4 + 1;
    iStack_150 = iStack_150 + -1;
    if (iStack_150 == 0) {
      return;
    }
  } while( true );
}

