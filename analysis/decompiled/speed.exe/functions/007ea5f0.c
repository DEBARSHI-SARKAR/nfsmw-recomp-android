/* speed.exe 007ea5f0 FUN_007ea5f0; analysis pseudocode, not buildable source.
 * calls 007ea3b0 FUN_007ea3b0
 * calls 007e9a90 FUN_007e9a90
 * calls 007e8ca0 FUN_007e8ca0
 */

void __thiscall FUN_007ea5f0(uint *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  uint local_c4 [4];
  uint local_b4;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_34;
  
  FUN_007e9a90();
  for (; param_1 != (uint *)0x0; param_1 = (uint *)((int)param_1 + param_1[1])) {
    uVar4 = FUN_007e8ca0();
    switch(uVar4) {
    case 2:
      FUN_007ea3b0(local_c4);
      break;
    case 4:
      uVar3 = *param_1;
      local_c4[3] = uVar3 >> 0xb & 1;
      local_c4[2] = uVar3 >> 10 & 1;
      local_c4[1] = local_c4[1] | 4;
      local_b4 = uVar3 >> 9 & 1;
      local_70 = uVar3 & 0xff;
      local_68 = param_1[6];
      local_6c = uVar3 >> 0x16 & 1;
      break;
    case 0x10:
      uVar3 = *param_1;
      local_b4 = uVar3 >> 9 & 1;
      local_c4[1] = local_c4[1] | 0x10;
      local_c4[2] = uVar3 >> 10 & 1;
      local_c4[3] = uVar3 >> 0xb & 1;
      local_50 = param_1[4];
      local_4c = param_1[5];
      local_48 = param_1[6];
      local_44 = param_1[7];
      break;
    case 0x20:
      uVar3 = *param_1;
      local_c4[3] = uVar3 >> 0xb & 1;
      local_b4 = uVar3 >> 9 & 1;
      pcVar5 = (char *)param_1[2];
      local_c4[2] = uVar3 >> 10 & 1;
      local_c4[1] = local_c4[1] | 0x20;
      if (pcVar5 != (char *)0x0) {
        pcVar5 = pcVar5 + (int)param_1;
      }
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      local_34 = (int)pcVar5 - (int)pcVar1;
      break;
    case 0x80:
      uVar3 = *param_1;
      local_b4 = uVar3 >> 9 & 1;
      local_c4[1] = local_c4[1] | 0x80;
      local_c4[2] = uVar3 >> 10 & 1;
      local_c4[3] = uVar3 >> 0xb & 1;
      local_40 = param_1[3];
      break;
    case 0x100:
      uVar3 = *param_1;
      local_b4 = uVar3 >> 9 & 1;
      local_c4[1] = local_c4[1] | 0x100;
      local_c4[2] = uVar3 >> 10 & 1;
      local_c4[3] = uVar3 >> 0xb & 1;
      local_60 = param_1[4];
      local_5c = param_1[5];
      local_58 = param_1[6];
      local_54 = param_1[7];
    }
    if (param_1[1] == 0) break;
  }
  puVar7 = local_c4;
  for (iVar6 = 0x30; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

