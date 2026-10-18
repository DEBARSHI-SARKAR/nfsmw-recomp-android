/* speed.exe 00726960 FUN_00726960; analysis pseudocode, not buildable source.
 * calls 0045f490 FUN_0045f490
 * calls 00721b70 FUN_00721b70
 * calls 0045f7c0 FUN_0045f7c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00726960(int param_1,int param_2)

{
  float *pfVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  bVar2 = *(byte *)(param_2 + 1);
  sVar3 = *(short *)(param_2 + 0x10 + (bVar2 >> 2 & 3) * 2);
  sVar4 = *(short *)(param_2 + 8 + (bVar2 >> 4 & 3) * 2);
  sVar5 = *(short *)(param_2 + 0x10 + (uint)(bVar2 >> 6) * 2);
  pfVar1 = (float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x14) =
       (float)((int)*(short *)(param_2 + 8 + (bVar2 & 3) * 2) << 0xd) * _DAT_00890980;
  *(float *)(param_1 + 0x18) = (float)((int)sVar3 << 0xd) * _DAT_00890980;
  *(float *)(param_1 + 0x1c) = (float)((int)sVar4 << 0xd) * _DAT_00890980;
  *(float *)(param_1 + 0x20) = (float)((int)sVar5 << 0xd) * _DAT_00890980;
  FUN_00721b70(pfVar1);
  *(undefined1 *)(param_1 + 9) = 4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 3;
  }
  if ((*(byte *)(param_1 + 10) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0xc5000000;
    *(undefined4 *)(param_1 + 0x48) = 0x45000000;
    *(undefined4 *)(param_1 + 0x58) = 0x45000000;
    *(undefined4 *)(param_1 + 0x68) = 0xc5000000;
  }
  local_20 = *(float *)(param_1 + 0x40) - *pfVar1;
  local_1c = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34);
  local_18 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38);
  local_30 = *(float *)(param_1 + 0x50) - *pfVar1;
  local_2c = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x34);
  local_28 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x38);
  FUN_0045f7c0(&local_40,&local_20,&local_30);
  FUN_0045f490(&local_40,&local_40);
  *(undefined4 *)(param_1 + 0x70) = local_40;
  *(undefined4 *)(param_1 + 0x74) = local_3c;
  *(undefined4 *)(param_1 + 0x78) = local_38;
  *(float *)(param_1 + 0x7c) =
       *pfVar1 * *(float *)(param_1 + 0x70) +
       *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x74) +
       *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x78);
  *(short *)(param_2 + 6) = (short)(param_1 - DAT_009a3a0c >> 7);
  *(int *)(param_1 + 0xc) = param_2;
  return param_1;
}

