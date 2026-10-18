/* speed.exe 0054e760 FUN_0054e760; analysis pseudocode, not buildable source.
 * calls 00542360 FUN_00542360
 */

uint FUN_0054e760(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint in_EAX;
  undefined2 extraout_var;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_3 != 0) {
    local_10 = 40000.0;
    local_c = 40000.0;
    local_8 = -40000.0;
    local_4 = -40000.0;
    FUN_00542360(param_3,&local_10,0,0);
    fVar2 = local_4;
    fVar1 = local_8;
    if (local_8 < local_10) {
      local_8 = local_10;
      local_10 = fVar1;
    }
    if (local_4 < local_c) {
      local_4 = local_c;
      local_c = fVar2;
    }
    in_EAX = CONCAT22(extraout_var,
                      (ushort)(param_1 < local_10) << 8 |
                      (ushort)(NAN(param_1) || NAN(local_10)) << 10 |
                      (ushort)(param_1 == local_10) << 0xe);
    if (param_1 >= local_10) {
      in_EAX = CONCAT22(extraout_var,
                        (ushort)(param_1 < local_8) << 8 |
                        (ushort)(NAN(param_1) || NAN(local_8)) << 10 |
                        (ushort)(param_1 == local_8) << 0xe);
      if (param_1 < local_8 != (param_1 == local_8)) {
        in_EAX = CONCAT22(extraout_var,
                          (ushort)(param_2 < local_c) << 8 |
                          (ushort)(NAN(param_2) || NAN(local_c)) << 10 |
                          (ushort)(param_2 == local_c) << 0xe);
        if (param_2 >= local_c) {
          in_EAX = CONCAT22(extraout_var,
                            (ushort)(param_2 < local_4) << 8 |
                            (ushort)(NAN(param_2) || NAN(local_4)) << 10 |
                            (ushort)(param_2 == local_4) << 0xe);
          if (param_2 < local_4 != (param_2 == local_4)) {
            return CONCAT31((int3)(in_EAX >> 8),1);
          }
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

