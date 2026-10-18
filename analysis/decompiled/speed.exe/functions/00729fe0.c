/* speed.exe 00729fe0 FUN_00729fe0; analysis pseudocode, not buildable source.
 * calls 00462830 FUN_00462830
 * calls 0045f490 FUN_0045f490
 * calls 006be940 FUN_006be940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00729fe0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  int local_20;
  undefined4 local_1c;
  
  iVar1 = *(int *)(param_1 + 0x40);
  _DAT_009a3b44 = *(float *)(iVar1 + 0x44);
  _DAT_009a3b48 = *(float *)(iVar1 + 0x48);
  _DAT_009a3b40 = *(float *)(iVar1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x40);
  local_30 = *(float *)(iVar1 + 0x50);
  local_2c = *(float *)(iVar1 + 0x54);
  local_28 = *(float *)(iVar1 + 0x58);
  FUN_00462830(FUN_00729f30);
  puVar4 = DAT_009aa3b0;
  if ((undefined4 **)DAT_009aa3b0 != &DAT_009aa3b0) {
    do {
      local_40 = (float)puVar4[0x16];
      local_3c = (float)puVar4[0x17];
      local_38 = (float)puVar4[0x18];
      local_50 = local_40 - _DAT_009a3b40;
      local_4c = local_3c - _DAT_009a3b44;
      local_48 = local_38 - _DAT_009a3b48;
      fVar2 = SQRT(local_50 * local_50 + local_48 * local_48 + local_4c * local_4c);
      FUN_0045f490(&local_50,&local_50);
      FUN_006be940(&local_20,&local_40);
      puVar4[0x1f] = local_20;
      puVar4[0x20] = local_1c;
      fVar3 = local_4c * local_2c + local_50 * local_30 + local_48 * local_28;
      puVar4[0x25] = fVar3;
      if (_DAT_00890968 < fVar3) {
        if ((float)puVar4[0x1b] <= fVar2) {
          if ((float)puVar4[0x19] <= fVar2) {
            puVar4[0x25] = 0x3f800000;
          }
          else {
            puVar4[0x25] = (fVar2 - (float)puVar4[0x1b]) /
                           ((float)puVar4[0x19] - (float)puVar4[0x1b]);
          }
        }
        else {
          puVar4[0x25] = 0;
        }
      }
      puVar4 = (undefined4 *)*puVar4;
    } while ((undefined4 **)puVar4 != &DAT_009aa3b0);
  }
  return;
}

