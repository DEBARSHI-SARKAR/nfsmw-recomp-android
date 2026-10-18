/* speed.exe 007fcc70 FUN_007fcc70; analysis pseudocode, not buildable source.
 * calls 00803bfc FUN_00803bfc
 * calls 00805be3 FUN_00805be3
 * calls 008057af FUN_008057af
 * calls 007fca82 FUN_007fca82
 * calls 00803d03 FUN_00803d03
 * calls 007fe49d FUN_007fe49d
 * calls 0080647b FUN_0080647b
 */

void FUN_007fcc70(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  param_1[3] = param_5;
  param_1[6] = param_8;
  param_1[7] = param_9;
  param_1[1] = param_3;
  param_1[8] = param_10;
  *param_1 = param_2;
  param_1[2] = param_4;
  param_1[4] = param_6;
  param_1[5] = param_7;
  if (param_4 == 0) {
    if (param_1[0x1b] == 0) {
      return;
    }
    if (param_1[0x30] == 0) {
      return;
    }
    uVar1 = param_1[0x25] * param_1[0x26];
    puVar3 = (undefined4 *)(param_6 + param_1[0x1f]);
    puVar4 = (undefined4 *)(param_7 + param_1[0x1f]);
    for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar1 * 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar3 = (undefined4 *)(param_1[4] + param_1[0x20]);
    puVar4 = (undefined4 *)(param_1[5] + param_1[0x20]);
    for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar1 = uVar1 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    (*DAT_009c6a88)(param_1[4] + param_1[0x1e],param_1[5] + param_1[0x1e],param_1[0x24] << 3,
                    param_1[0x25] << 3,param_1[0x26]);
    return;
  }
  if (param_4 == 1) {
    FUN_007fca82(param_1);
    return;
  }
  if (param_4 == 4) {
    if (param_2 < 5) {
      FUN_007fca82(param_1);
    }
    else if (param_1[0x1b] != 0) {
LAB_007fcd3a:
      if (param_1[0x30] == 0) {
        FUN_00803d03(param_1,param_6,param_7);
        return;
      }
      FUN_00803d03(param_1,param_6,param_1[0x2f]);
LAB_007fcd53:
      uVar1 = param_1[0x25] * param_1[0x26];
      puVar3 = (undefined4 *)(param_1[0x2f] + param_1[0x1f]);
      puVar4 = (undefined4 *)(param_1[5] + param_1[0x1f]);
      for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar1 * 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar3 = (undefined4 *)(param_1[0x2f] + param_1[0x20]);
      puVar4 = (undefined4 *)(param_1[5] + param_1[0x20]);
      for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = uVar1 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      (*DAT_009c6a88)(param_1[0x2f] + param_1[0x1e],param_1[5] + param_1[0x1e],param_1[0x24] << 3,
                      param_1[0x25] << 3,param_1[0x26]);
      return;
    }
LAB_007fcf80:
    FUN_00803bfc(param_1,param_1[4],param_1[5]);
  }
  else {
    if (4 < param_4) {
      if (param_4 < 7) {
        if (param_2 < 5) {
          FUN_007fca82(param_1);
        }
        else if (param_1[0x1b] != 0) {
          if (param_1[0x30] == 0) {
            FUN_00803d03(param_1,param_6,param_7);
            FUN_007fe49d(param_1,param_1[5]);
            FUN_00805be3(param_1,param_1[5],param_1[5]);
            return;
          }
          FUN_00803d03(param_1,param_6,param_1[0x2f]);
          FUN_007fe49d(param_1,param_1[0x2f]);
          FUN_00805be3(param_1,param_1[0x2f],param_1[0x2f]);
          uVar1 = param_1[0x25] * param_1[0x26];
          puVar3 = (undefined4 *)(param_1[0x2f] + param_1[0x1f]);
          puVar4 = (undefined4 *)(param_1[5] + param_1[0x1f]);
          for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          for (uVar2 = uVar1 * 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          puVar3 = (undefined4 *)(param_1[0x2f] + param_1[0x20]);
          puVar4 = (undefined4 *)(param_1[5] + param_1[0x20]);
          for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          for (uVar1 = uVar1 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          (*DAT_009c6a88)(param_1[0x2f] + param_1[0x1e],param_1[5] + param_1[0x1e],
                          param_1[0x24] << 3,param_1[0x25] << 3,param_1[0x26]);
          return;
        }
        FUN_00803bfc(param_1,param_1[4],param_1[5]);
        FUN_007fe49d(param_1,param_1[5]);
        FUN_008057af(param_1,param_1[5],param_1[5]);
        if (param_1[0x31] == 0) {
          return;
        }
        (*DAT_009c6a7c)(param_1[0x1e] + param_1[5],param_1[0x24] << 3,param_1[0x25] << 3,
                        param_1[0x26],param_5);
        return;
      }
      if (param_4 == 7) {
        if (param_2 < 5) {
          FUN_007fca82(param_1);
        }
        else if (param_1[0x1b] != 0) goto LAB_007fcd3a;
        param_7 = param_1[5];
        param_6 = param_1[4];
      }
      else if (param_4 == 8) {
        FUN_007fca82(param_1);
        if (1 < *param_1) {
          if ((param_1[0x1b] == 0) || (param_1[0x30] == 0)) {
            FUN_0080647b(param_1,param_1[4],param_1[5]);
            return;
          }
          FUN_0080647b(param_1,param_1[4],param_1[0x2f]);
          goto LAB_007fcd53;
        }
        goto LAB_007fcf80;
      }
    }
    FUN_00803bfc(param_1,param_6,param_7);
    FUN_007fe49d(param_1,param_1[5]);
    FUN_008057af(param_1,param_1[5],param_1[5]);
  }
  return;
}

