/* speed.exe 006d0b00 FUN_006d0b00; analysis pseudocode, not buildable source.
 * calls 00738840 FUN_00738840
 * calls 006cf0a0 FUN_006cf0a0
 * calls 00733c30 FUN_00733c30
 * calls 0045f490 FUN_0045f490
 * calls 00740420 FUN_00740420
 * calls 004700d0 FUN_004700d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d0b00(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float in_stack_ffffff50;
  float local_ac;
  float local_a8;
  float in_stack_ffffff70;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_68;
  float local_60;
  float local_58;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((DAT_00925e90 == 3) && (iVar6 = FUN_00738840(), iVar6 != 0)) {
    if ((undefined4 **)DAT_009b27ec != &DAT_009b27ec) {
      puVar7 = DAT_009b27ec;
      do {
        if ((*(int *)(param_1 + 4) + -7 == puVar7[199]) && (puVar7[0x15f] == 0)) {
          local_78 = (float)puVar7[0xce];
          local_60 = (float)puVar7[0xcc] * _DAT_008adfa0;
          in_stack_ffffff70 = (float)puVar7[0xcc];
          local_8c = (float)puVar7[0xcd];
          local_88 = (float)puVar7[0xce];
          local_68 = (float)puVar7[0xd6] * _DAT_008adfa4;
          in_stack_ffffff50 = (float)puVar7[0xd4] * _DAT_008adfa4 + local_60 + (float)puVar7[200];
          local_ac = (float)puVar7[0xd5] * _DAT_008adfa4 +
                     (float)puVar7[0xcd] * _DAT_008adfa0 + (float)puVar7[0xc9];
          local_a8 = local_68 + local_78 * _DAT_008adfa0 + (float)puVar7[0xca];
        }
        puVar7 = (undefined4 *)*puVar7;
      } while ((undefined4 **)puVar7 != &DAT_009b27ec);
    }
  }
  else if ((DAT_00925e90 == 6) && (param_2 < *(int *)(DAT_009b0858 + 0xc))) {
    uVar8 = FUN_00733c30(param_2);
    FUN_00740420(uVar8);
    fVar4 = _DAT_00000008;
    fVar2 = _DAT_00000004;
    uVar8 = FUN_00733c30(param_2);
    FUN_00740420(uVar8);
    local_8c = _DAT_00000004;
    local_88 = _DAT_00000008;
    uVar8 = FUN_00733c30(param_2);
    FUN_00740420(uVar8);
    fVar5 = _DAT_00000008;
    fVar3 = _DAT_00000004;
    uVar8 = FUN_00733c30(param_2);
    FUN_00740420(uVar8);
    local_58 = _DAT_00000008;
    local_68 = fVar5 * _DAT_00890968;
    local_70 = _DAT_00000000 * _DAT_008adfa4;
    in_stack_ffffff50 = local_70 + _DAT_00000000 * _DAT_00890968 + _DAT_00000000;
    local_ac = _DAT_00000004 * _DAT_008adfa4 + fVar3 * _DAT_00890968 + fVar2;
    local_a8 = _DAT_00000008 * _DAT_008adfa4 + local_68 + fVar4;
    in_stack_ffffff70 = _DAT_00000000;
  }
  fVar2 = local_88 - _DAT_00890cd4;
  FUN_0045f490(&stack0xffffff70,&stack0xffffff70);
  local_80 = in_stack_ffffff70 + in_stack_ffffff50;
  local_7c = local_8c + local_ac;
  local_78 = fVar2 + local_a8;
  FUN_006cf0a0(local_50,&stack0xffffff50,&local_80,&stack0xffffff60);
  FUN_004700d0(local_50,0);
  if ((DAT_00911020 == 0) && (*(undefined4 *)(iVar1 + 0x2b0) = 0, DAT_00911020 == 0)) {
    *(undefined4 *)(iVar1 + 0xb4) = 0;
  }
  *(undefined4 *)(iVar1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0) = DAT_008f9348;
  if (DAT_00911020 == 0) {
    *(undefined2 *)(iVar1 + 0xc4) = 0x65db;
  }
  return;
}

