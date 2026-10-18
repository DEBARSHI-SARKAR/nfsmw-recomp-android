/* speed.exe 007ff0c2 FUN_007ff0c2; analysis pseudocode, not buildable source.
 * calls 007ff091 FUN_007ff091
 * calls 007ff02b FUN_007ff02b
 */

void FUN_007ff0c2(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6,
                 int param_7,uint param_8,undefined4 *param_9,byte param_10,int param_11,
                 int param_12,uint param_13,int param_14,int param_15)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_30;
  uint local_2c;
  uint local_24;
  code *local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  code *local_8;
  
  uVar1 = param_8;
  local_20 = FUN_007fef9c;
  local_8 = FUN_007fef9c;
  if ((param_11 == 2) && (param_12 == 1)) {
    local_8 = FUN_007ff091;
  }
  if (((param_13 == 2) && (param_14 == 1)) && (local_20 = FUN_007ff091, param_15 == 0)) {
    local_20 = FUN_007ff02b;
  }
  if (param_8 == param_4) {
    if (param_8 != 0) {
      param_4 = param_8;
      do {
        (*local_8)(param_1,1,param_11,param_3 + 1,param_5,1,param_12,param_7);
        param_1 = param_1 + param_2;
        param_5 = param_5 + param_6;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  else {
    if (param_4 < param_8) {
      uVar2 = param_10 - 1;
      param_8 = (uVar2 * param_4) / param_8;
    }
    else {
      param_8 = param_10 - 1;
      uVar2 = (param_8 * param_14) / param_13;
    }
    (*local_8)(param_1,1,param_11,param_3 + 1,param_9,1,param_12,param_7);
    local_30 = ((uVar2 - 1) + uVar1) / uVar2;
    if (local_30 != 0) {
      param_1 = param_1 + param_2;
      param_5 = param_5 - (int)param_9;
      local_2c = 1;
      do {
        if (1 < param_8 + 1) {
          local_1c = param_9;
          local_24 = param_8;
          local_18 = param_1;
          local_14 = local_2c;
          local_10 = param_9;
          do {
            local_10 = (undefined4 *)(param_6 + (int)local_10);
            if (local_14 < param_4) {
              (*local_8)(local_18,1,param_11,param_3 + 1,local_10,1,param_12,param_7);
            }
            else {
              puVar3 = local_1c;
              puVar4 = local_10;
              for (uVar1 = param_6 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
                *puVar4 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
              }
              for (uVar1 = param_6 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
                *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
                puVar3 = (undefined4 *)((int)puVar3 + 1);
                puVar4 = (undefined4 *)((int)puVar4 + 1);
              }
            }
            local_18 = local_18 + param_2;
            local_14 = local_14 + 1;
            local_1c = (undefined4 *)((int)local_1c + param_6);
            local_24 = local_24 - 1;
          } while (local_24 != 0);
        }
        if (param_7 != 0) {
          local_1c = param_9;
          local_24 = param_7;
          do {
            (*local_20)(local_1c,param_6,param_13,param_8 + 1,
                        (undefined1 *)(param_5 + (int)local_1c),param_6,param_14,uVar2);
            local_1c = (undefined4 *)((int)local_1c + 1);
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        local_2c = local_2c + param_8;
        param_5 = param_5 + uVar2 * param_6;
        puVar3 = (undefined4 *)(param_8 * param_6 + (int)param_9);
        puVar4 = param_9;
        for (uVar1 = param_6 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        for (uVar1 = param_6 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        param_1 = param_1 + param_8 * param_2;
        local_30 = local_30 - 1;
      } while (local_30 != 0);
    }
  }
  return;
}

