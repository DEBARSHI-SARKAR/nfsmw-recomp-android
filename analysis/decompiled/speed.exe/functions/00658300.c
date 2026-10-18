/* speed.exe 00658300 FUN_00658300; analysis pseudocode, not buildable source.
 * calls 006497b0 FUN_006497b0
 * calls 00649380 FUN_00649380
 * calls 0045f340 FUN_0045f340
 */

void __thiscall FUN_00658300(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_78;
  int local_74;
  int local_70;
  int local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  
  local_78 = 0.0;
  local_74 = 0;
  if (*(short *)(param_1 + 0x1e) != 0) {
    local_70 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x24);
      local_18 = *(undefined4 *)(iVar2 + 8 + local_70);
      puVar4 = (undefined4 *)(iVar2 + local_70);
      *puVar4 = *(undefined4 *)(iVar2 + local_70);
      puVar4[1] = *(undefined4 *)(iVar2 + 4 + local_70);
      puVar4[2] = local_18;
      fVar3 = (float)local_74;
      puVar4[3] = local_78;
      *(undefined1 *)(param_1 + 0x18) = 1;
      fVar1 = *(float *)(param_1 + 0xc);
      if (*(int *)(param_1 + 4) == 2) {
        fVar1 = (float)(int)(*(ushort *)(param_1 + 0x1e) - 1);
      }
      if (fVar3 < fVar1) {
        FUN_006497b0(&local_40,fVar3,0);
        local_50 = local_40;
        local_4c = local_3c;
        local_48 = local_38;
        local_68 = 1;
        if (0 < param_2) {
          do {
            FUN_006497b0(&local_30,(float)local_68 / (float)param_2 + fVar3,0);
            local_60 = local_30;
            local_5c = local_2c;
            local_58 = local_28;
            fVar5 = (float10)FUN_0045f340(&local_60,&local_50);
            local_50 = local_60;
            local_4c = local_5c;
            local_48 = local_58;
            local_68 = local_68 + 1;
            local_78 = (float)(fVar5 + (float10)local_78);
          } while (local_68 <= param_2);
        }
      }
      local_74 = local_74 + 1;
      local_70 = local_70 + 0x10;
    } while (local_74 < (int)(uint)*(ushort *)(param_1 + 0x1e));
  }
  *(float *)(param_1 + 0x14) = local_78;
  FUN_00649380();
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

