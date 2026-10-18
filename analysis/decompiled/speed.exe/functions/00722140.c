/* speed.exe 00722140 FUN_00722140; analysis pseudocode, not buildable source.
 * calls 007220b0 FUN_007220b0
 * calls 006be750 FUN_006be750
 * calls 006c0a30 FUN_006c0a30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00722140(int param_1,undefined4 param_2,byte param_3)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  int local_b4;
  undefined1 local_b0 [8];
  float local_a8;
  undefined1 local_a0 [8];
  float local_98;
  undefined1 local_90 [8];
  float local_88;
  undefined1 local_80 [8];
  float local_78;
  undefined3 local_30;
  char cStack_2d;
  undefined3 local_2c;
  char cStack_29;
  undefined3 local_28;
  char cStack_25;
  undefined3 local_24;
  char cStack_21;
  
  if ((&DAT_009942d8)[*(int *)(param_1 + 0x30)] != 0) {
    FUN_006c0a30();
    local_b4 = 0;
    if (*(int *)(param_1 + 0xf0) != 1 && -1 < *(int *)(param_1 + 0xf0) + -1) {
      pbVar3 = (byte *)(param_1 + 0x8f);
      do {
        FUN_007220b0(local_b0,local_80);
        FUN_007220b0(local_a0,local_90);
        local_a8 = local_a8 + _DAT_008b2774;
        local_98 = local_98 + _DAT_008b2774;
        local_88 = local_88 + _DAT_008b2774;
        local_78 = local_78 + _DAT_008b2774;
        if (pbVar3[-0x10] < param_3) {
          cVar1 = '\0';
        }
        else {
          cVar1 = pbVar3[-0x10] - param_3;
        }
        if (*pbVar3 < param_3) {
          cVar2 = '\0';
        }
        else {
          cVar2 = *pbVar3 - param_3;
        }
        _local_30 = CONCAT13(cVar1,0x808080);
        _local_24 = CONCAT13(cVar1,0x808080);
        _local_2c = CONCAT13(cVar2,0x808080);
        _local_28 = CONCAT13(cVar2,0x808080);
        FUN_006be750(local_b0,(&DAT_009942d8)[*(int *)(param_1 + 0x30)],&DAT_00987ab0,0,0);
        local_b4 = local_b4 + 1;
        pbVar3 = pbVar3 + 0x10;
      } while (local_b4 < *(int *)(param_1 + 0xf0) + -1);
    }
  }
  return;
}

