/* speed.exe 0076c810 FUN_0076c810; analysis pseudocode, not buildable source.
 * calls 00762d00 FUN_00762d00
 * calls 00762640 FUN_00762640
 * calls 00763d40 FUN_00763d40
 * calls 00486610 FUN_00486610
 * calls 00762530 FUN_00762530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0076c810(uint *param_1,undefined4 param_2,float *param_3,undefined4 param_4,int param_5,
            float *param_6,undefined4 param_7)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float local_48;
  int local_44;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  float local_10;
  float local_c;
  float local_8;
  undefined1 local_4;
  byte local_3;
  
  if ((*param_1 & (uint)*(ushort *)(param_5 + 0xe)) == 0) {
    iVar4 = 0;
    cVar2 = '\0';
    local_44 = 0;
    iVar5 = *(ushort *)(param_5 + 6) - 2;
    local_4 = 0;
    local_3 = 0;
    FUN_00762530(0,param_4,local_30);
    local_48 = 1e+38;
    FUN_00486610(local_30,param_2,local_30);
    FUN_00486610(local_20,param_2,local_20);
    if (0 < iVar5) {
      while( true ) {
        FUN_00486610(&local_10,param_2,&local_10);
        cVar3 = FUN_00762d00(param_3,local_30);
        if (cVar3 != '\0') {
          FUN_00763d40();
          fVar1 = local_c;
          if (local_38 != _DAT_00890968) {
            fVar1 = local_c - ((*param_3 - local_10) * local_3c + (param_3[2] - local_8) * local_34)
                              / local_38;
          }
          fVar1 = param_3[1] - fVar1;
          *param_6 = fVar1;
          if (((fVar1 < local_48) && (_DAT_00890da8 < fVar1)) && (((byte)*param_1 & local_3) == 0))
          {
            cVar2 = '\x01';
            local_48 = fVar1;
            local_44 = iVar4;
          }
        }
        iVar4 = iVar4 + 1;
        if (iVar5 <= iVar4) break;
        FUN_00762640(iVar4,param_4,local_30);
      }
      if (cVar2 != '\0') {
        FUN_00762530(local_44,param_4,param_7);
      }
    }
    *param_6 = local_48;
    return CONCAT31((int3)((uint)local_48 >> 8),cVar2);
  }
  return (uint)(byte)(*(ushort *)(param_5 + 0xe) >> 8) << 8;
}

