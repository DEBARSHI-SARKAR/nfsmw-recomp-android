/* speed.exe 0046b410 FUN_0046b410; analysis pseudocode, not buildable source.
 * calls 0045f7c0 FUN_0045f7c0
 * calls 0045f490 FUN_0045f490
 * calls 00466a60 FUN_00466a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FUN_0046b410(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  float fVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar6 = (**(code **)(*param_1 + 0x24))();
  if (cVar6 != '\0') {
    *param_2 = 0x3f800000;
    param_2[5] = 0x3f800000;
    param_2[10] = 0x3f800000;
    param_2[0xf] = 0x3f800000;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    puVar3 = (undefined4 *)param_1[0x24];
    uStack_18 = puVar3[0x16];
    uStack_20 = *puVar3;
    uStack_1c = puVar3[0xb];
    FUN_0045f490(param_2,&uStack_20);
    FUN_0045f7c0(param_2 + 4,param_2 + 8,param_2);
    FUN_0045f7c0(param_2 + 8,param_2,param_2 + 4);
    iVar4 = param_1[0x20];
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    uVar1 = *(undefined4 *)(iVar4 + 0x28);
    param_2[0xd] = *(undefined4 *)(iVar4 + 0x24);
    param_2[0xc] = uVar5;
    param_2[0xf] = 0x3f800000;
    param_2[0xe] = uVar1;
    return (float)(iVar4 + 0x20);
  }
  FUN_00466a60(param_2,param_1[0x20] + 0x50,param_1[0x20] + 0x20);
  fVar2 = *(float *)(param_1[0x20] + 0x78);
  fVar7 = (float)(uint)(ushort)((ushort)(fVar2 < _DAT_00890968) << 8 |
                                (ushort)(NAN(fVar2) || NAN(_DAT_00890968)) << 10 |
                               (ushort)(fVar2 == _DAT_00890968) << 0xe);
  if (fVar2 < _DAT_00890968) {
    fVar7 = (float)param_2[7];
    param_2[4] = (float)param_2[4] * _DAT_00890da8;
    param_2[5] = (float)param_2[5] * _DAT_00890da8;
    param_2[6] = (float)param_2[6] * _DAT_00890da8;
    param_2[7] = fVar7 * _DAT_00890da8;
    param_2[8] = (float)param_2[8] * _DAT_00890da8;
    param_2[9] = (float)param_2[9] * _DAT_00890da8;
    param_2[10] = (float)param_2[10] * _DAT_00890da8;
    param_2[0xb] = (float)param_2[0xb] * _DAT_00890da8;
  }
  return fVar7;
}

