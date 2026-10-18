/* speed.exe 005b9640 FUN_005b9640; analysis pseudocode, not buildable source.
 * calls 005b3df0 FUN_005b3df0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_005b9640(int *param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float local_34;
  float *local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  uVar6 = 0;
  local_24 = 0.0;
  local_28 = 0.0;
  local_1c = 0.0;
  local_20 = 0.0;
  local_34 = 1e+30;
  local_2c = 0;
  FUN_005b3df0(param_2,param_4,&local_28);
  local_30 = (float *)&DAT_008f5868;
  do {
    if ((uVar6 == 0) || ((*(uint *)((int)&DAT_008f5690 + uVar6) & param_5) != 0)) {
      local_18 = local_28 + *local_30;
      uVar7 = 0;
      local_14 = local_24 + local_30[1];
      if (param_1[1] != 0) {
        do {
          iVar1 = *(int *)(*param_1 + uVar7 * 4);
          fVar4 = local_34;
          uVar5 = local_2c;
          if (((*(uint *)(iVar1 + 0x1c) & 0x4000000) == 0) && (param_2 != iVar1)) {
            FUN_005b3df0(iVar1,param_4,&local_20);
            fVar4 = local_20 - local_18;
            fVar2 = local_1c - local_14;
            fVar3 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
            if (_DAT_00891218 <= fVar3) {
              local_10 = fVar4 * (_DAT_0089096c / fVar3);
              fVar2 = local_10 * *(float *)(&DAT_008f5828 + param_3 * 8) +
                      fVar2 * (_DAT_0089096c / fVar3) * *(float *)(&DAT_008f582c + param_3 * 8);
              if (_DAT_00890968 <= fVar2) {
                fVar2 = fVar2 * fVar2;
              }
              fVar4 = _DAT_008a2d4c;
              if (_DAT_008910f0 <= fVar2) {
                fVar4 = (_DAT_0089096c - fVar2) * _DAT_008970cc + fVar3;
              }
              uVar5 = uVar7;
              if (fVar4 < local_34) goto LAB_005b97b5;
            }
            fVar4 = local_34;
            uVar5 = local_2c;
          }
LAB_005b97b5:
          local_2c = uVar5;
          local_34 = fVar4;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)param_1[1]);
      }
    }
    uVar6 = uVar6 + 4;
    local_30 = local_30 + 2;
    if (0x13 < uVar6) {
      if (_DAT_008a2d4c <= local_34) {
        return 0;
      }
      return *(undefined4 *)(*param_1 + local_2c * 4);
    }
  } while( true );
}

