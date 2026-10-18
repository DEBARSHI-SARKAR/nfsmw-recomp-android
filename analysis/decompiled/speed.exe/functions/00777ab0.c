/* speed.exe 00777ab0 FUN_00777ab0; analysis pseudocode, not buildable source.
 * calls 00765c30 FUN_00765c30
 * calls 0076dda0 FUN_0076dda0
 * calls 0076f4a0 FUN_0076f4a0
 * calls 0076f140 FUN_0076f140
 * calls 0076ec70 FUN_0076ec70
 * calls 00765450 FUN_00765450
 * calls 007753e0 FUN_007753e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00777ab0(int param_1,short param_2,char param_3,float param_4)

{
  ushort *puVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_18 [2];
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(short *)(param_1 + 0x8e) = param_2;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  puVar1 = (ushort *)(param_2 * 0x16 + DAT_009b38c0);
  FUN_0076dda0(puVar1,&local_c);
  FUN_00765450(puVar1,local_18);
  iVar6 = (int)param_3;
  if ((iVar6 < (int)(uint)*(byte *)(local_18[0] + 1)) && ((puVar1[5] & 0x40) == 0)) {
    *(undefined1 *)(param_1 + 0x8c) = 0;
    *(float *)(param_1 + 0xbc) = -local_c;
    *(float *)(param_1 + 0xc0) = -local_8;
    fVar3 = _DAT_0089096c;
    local_10 = -local_4;
    *(float *)(param_1 + 0xc4) = -local_4;
    *(float *)(param_1 + 0x90) = ABS(fVar3 - param_4);
  }
  else {
    local_10 = local_4;
    *(float *)(param_1 + 0xbc) = local_c;
    *(float *)(param_1 + 0xc0) = local_8;
    *(float *)(param_1 + 0xc4) = local_4;
    *(undefined1 *)(param_1 + 0x8c) = 1;
    *(float *)(param_1 + 0x90) = param_4;
  }
  cVar2 = *(char *)(param_1 + 0x8c);
  puVar7 = (undefined4 *)((uint)puVar1[cVar2 == '\0'] * 0x20 + DAT_009b38bc);
  *(undefined4 *)(param_1 + 0xd4) = *puVar7;
  *(undefined4 *)(param_1 + 0xd8) = puVar7[1];
  *(undefined4 *)(param_1 + 0xdc) = puVar7[2];
  puVar7 = (undefined4 *)((uint)puVar1[cVar2] * 0x20 + DAT_009b38bc);
  *(undefined4 *)(param_1 + 200) = *puVar7;
  *(undefined4 *)(param_1 + 0xcc) = puVar7[1];
  *(undefined4 *)(param_1 + 0xd0) = puVar7[2];
  *(char *)(param_1 + 0x2c3) = param_3;
  *(char *)(param_1 + 0x2c1) = param_3;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  local_18[0] = (uint)*puVar1 * 0x20 + DAT_009b38bc;
  local_18[1] = (uint)puVar1[1] * 0x20 + DAT_009b38bc;
  fVar3 = (float)(*(int *)(DAT_009b38b8 + 4 +
                          (*(short *)(local_18[cVar2 == '\0'] + 0xe) * 0x10 + iVar6) * 4) >> 0x12) *
          _DAT_009b3a68;
  fVar4 = (float)(*(int *)(DAT_009b38b8 + 4 + (*(short *)(local_18[cVar2] + 0xe) * 0x10 + iVar6) * 4
                          ) >> 0x12) * _DAT_009b3a68;
  fVar5 = (fVar4 - fVar3) * *(float *)(param_1 + 0x90) + fVar3;
  *(float *)(param_1 + 0x2c4) = fVar5;
  *(float *)(param_1 + 0x2cc) = fVar5;
  *(float *)(param_1 + 0x2c8) = fVar5;
  FUN_0076f4a0(puVar1,fVar4,0);
  FUN_0076f4a0(puVar1,fVar3,1);
  FUN_0076f140(puVar1,1);
  FUN_0076f140(puVar1,0);
  FUN_00765c30(puVar1);
  FUN_007753e0(puVar1);
  puVar7 = *(undefined4 **)(param_1 + 8);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0076ec70(0x40400000);
  return;
}

