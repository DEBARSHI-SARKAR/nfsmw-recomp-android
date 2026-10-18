/* speed.exe 00777d30 FUN_00777d30; analysis pseudocode, not buildable source.
 * calls 00765c30 FUN_00765c30
 * calls 00777770 FUN_00777770
 * calls 0076dda0 FUN_0076dda0
 * calls 0076f4a0 FUN_0076f4a0
 * calls 0076f140 FUN_0076f140
 * calls 0076ec70 FUN_0076ec70
 * calls 007753e0 FUN_007753e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00777d30(int param_1,short param_2,float param_3,undefined4 param_4,float *param_5,char param_6)

{
  bool bVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  float local_c;
  float local_8;
  float local_4;
  
  *(short *)(param_1 + 0x8e) = param_2;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  puVar3 = (ushort *)(param_2 * 0x16 + DAT_009b38c0);
  FUN_0076dda0(puVar3,&local_c);
  bVar1 = local_c * *param_5 + local_8 * param_5[1] + local_4 * param_5[2] < _DAT_00890968;
  if (*(char *)(param_1 + 0x51) != '\0') {
    bVar1 = (bool)(~((byte)puVar3[5] >> 2) & 1);
  }
  if (bVar1 == false) {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    *(float *)(param_1 + 0xbc) = local_c;
    *(float *)(param_1 + 0xc0) = local_8;
    *(float *)(param_1 + 0xc4) = local_4;
    *(float *)(param_1 + 0x90) = param_3;
    puVar2 = (undefined4 *)((uint)*puVar3 * 0x20 + DAT_009b38bc);
    *(undefined4 *)(param_1 + 0xd4) = *puVar2;
    *(undefined4 *)(param_1 + 0xd8) = puVar2[1];
    *(undefined4 *)(param_1 + 0xdc) = puVar2[2];
    puVar2 = (undefined4 *)((uint)puVar3[1] * 0x20 + DAT_009b38bc);
    *(undefined4 *)(param_1 + 200) = *puVar2;
    *(undefined4 *)(param_1 + 0xcc) = puVar2[1];
    *(undefined4 *)(param_1 + 0xd0) = puVar2[2];
  }
  else {
    *(undefined1 *)(param_1 + 0x8c) = 0;
    *(float *)(param_1 + 0xbc) = local_c * _DAT_00890da8;
    *(float *)(param_1 + 0xc0) = local_8 * _DAT_00890da8;
    *(float *)(param_1 + 0xc4) = local_4 * _DAT_00890da8;
    param_3 = _DAT_0089096c - param_3;
    if (param_3 < _DAT_00890968) {
      param_3 = -param_3;
    }
    *(float *)(param_1 + 0x90) = param_3;
    puVar2 = (undefined4 *)((uint)puVar3[1] * 0x20 + DAT_009b38bc);
    *(undefined4 *)(param_1 + 0xd4) = *puVar2;
    *(undefined4 *)(param_1 + 0xd8) = puVar2[1];
    *(undefined4 *)(param_1 + 0xdc) = puVar2[2];
    puVar2 = (undefined4 *)((uint)*puVar3 * 0x20 + DAT_009b38bc);
    *(undefined4 *)(param_1 + 200) = *puVar2;
    *(undefined4 *)(param_1 + 0xcc) = puVar2[1];
    *(undefined4 *)(param_1 + 0xd0) = puVar2[2];
  }
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  FUN_0076f4a0(puVar3,0,0);
  FUN_0076f4a0(puVar3,0,1);
  FUN_0076f140(puVar3,1);
  FUN_0076f140(puVar3,0);
  FUN_00765c30(puVar3);
  FUN_007753e0(puVar3);
  if (param_6 == '\0') {
    FUN_00777770(param_4);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0076ec70(0x40400000);
  return;
}

