/* speed.exe 005158b0 FUN_005158b0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_005158b0(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_c;
  float local_8;
  float local_4;
  undefined2 uVar5;
  
  fVar1 = param_3[1];
  fVar3 = *param_3;
  local_8 = *param_3 + *param_4;
  local_4 = param_4[1] + param_3[1];
  fVar2 = fVar3;
  if (local_8 < fVar3) {
    fVar2 = local_8;
    local_8 = fVar3;
  }
  fVar3 = (float)((uint)param_3 & 0xffff0000);
  local_c = fVar1;
  if (local_4 < fVar1) {
    fVar3 = local_4;
    local_c = local_4;
    local_4 = fVar1;
  }
  uVar5 = (undefined2)((uint)fVar3 >> 0x10);
  uVar4 = CONCAT22(uVar5,(ushort)(param_1 < fVar2) << 8 | (ushort)(NAN(param_1) || NAN(fVar2)) << 10
                         | (ushort)(param_1 == fVar2) << 0xe);
  if (param_1 >= fVar2) {
    uVar4 = CONCAT22(uVar5,(ushort)(param_1 < local_8) << 8 |
                           (ushort)(NAN(param_1) || NAN(local_8)) << 10 |
                           (ushort)(param_1 == local_8) << 0xe);
    if (param_1 < local_8 != (param_1 == local_8)) {
      uVar4 = CONCAT22(uVar5,(ushort)(param_2 < local_c) << 8 |
                             (ushort)(NAN(param_2) || NAN(local_c)) << 10 |
                             (ushort)(param_2 == local_c) << 0xe);
      if (param_2 >= local_c) {
        uVar4 = CONCAT22(uVar5,(ushort)(param_2 < local_4) << 8 |
                               (ushort)(NAN(param_2) || NAN(local_4)) << 10 |
                               (ushort)(param_2 == local_4) << 0xe);
        if (param_2 < local_4 != (param_2 == local_4)) {
          return CONCAT31((int3)((uint)uVar4 >> 8),1);
        }
      }
    }
  }
  return uVar4;
}

