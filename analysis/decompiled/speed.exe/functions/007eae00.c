/* speed.exe 007eae00 FUN_007eae00; analysis pseudocode, not buildable source.
 * calls 007eabb0 FUN_007eabb0
 * calls 007e9350 FUN_007e9350
 * calls 007e9320 FUN_007e9320
 * calls 007e9a90 FUN_007e9a90
 * calls 007e9430 FUN_007e9430
 * calls 007e9e40 FUN_007e9e40
 * calls 007e9370 FUN_007e9370
 * calls 007e9330 FUN_007e9330
 */

uint * FUN_007eae00(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 local_c4 [4];
  uint local_c0;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_68;
  int local_50;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  int local_40;
  uint local_34;
  
  FUN_007e9a90();
  for (puVar5 = param_1; puVar5 != (uint *)0x0; puVar5 = (uint *)((int)puVar5 + ((int)*puVar5 >> 8))
      ) {
    iVar1 = (int)(char)(byte)*puVar5;
    if (iVar1 == 0x6f) {
      local_34 = puVar5[1];
      local_c0 = local_c0 | 0x20;
    }
    else if (iVar1 == 0x7c) {
      local_44 = puVar5[1];
      local_c0 = local_c0 | 0x10;
      local_48 = 2;
    }
    else if (iVar1 == 0x69) {
      local_40 = (int)(short)puVar5[1];
      local_c0 = local_c0 | 0x80;
    }
    else {
      if ((&DAT_008c1798)[(byte)*puVar5] != '\0') {
        switch(iVar1) {
        case 0x29:
        case 0x2a:
        case 0x2d:
        case 0x2f:
        case 0x32:
          break;
        default:
          local_ac = (int)(short)puVar5[1];
          local_b0 = *puVar5 & 0xff;
          local_a8 = (int)*(short *)((int)puVar5 + 6);
          if (((short)puVar5[2] != 0) || (uVar4 = local_c0 | 2, *(short *)((int)puVar5 + 10) != 0))
          {
            local_50 = (int)(short)puVar5[2];
            local_4c = (int)*(short *)((int)puVar5 + 10);
            uVar4 = local_c0 | 0x12;
          }
          local_c0 = uVar4;
          local_9c = puVar5[3];
          local_74 = local_9c >> 0xc & 1;
          local_98 = local_9c >> 0xd & 1;
          local_78 = local_9c >> 0xe & 1;
          local_a4 = (int)(local_9c << 0x14) >> 0x14;
          local_a0 = (int)(local_9c << 4) >> 0x14;
          local_9c = local_9c >> 0x1c;
          goto switchD_007eaf43_caseD_2b;
        }
      }
      switch(iVar1) {
      case 0x29:
      case 0x2a:
      case 0x2d:
      case 0x2f:
      case 0x32:
        local_68 = (int)(short)puVar5[1];
        local_c0 = local_c0 | 4;
        local_70 = *puVar5 & 0xff;
      }
    }
switchD_007eaf43_caseD_2b:
    if ((int)*puVar5 >> 8 == 0) break;
  }
  uVar2 = FUN_007e9e40(local_c4,0x80,0x20,param_2,
                       "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpcreate.cpp",0x2d2);
  puVar5 = (uint *)FUN_007e9430("Created Shape",uVar2);
  FUN_007eabb0(puVar5,local_c4);
  *puVar5 = *puVar5 & 0xfffffbff | 0x400;
  do {
    if (param_1 == (uint *)0x0) {
      return puVar5;
    }
    iVar1 = (int)(char)(byte)*param_1;
    if (iVar1 == 0x6f) {
      iVar1 = FUN_007e9370();
      uVar4 = *(uint *)(iVar1 + 0xc);
      if (*(int *)(iVar1 + 8) == 0) {
        puVar7 = (uint *)0x0;
        puVar6 = param_1 + 2;
      }
      else {
        puVar7 = (uint *)(*(int *)(iVar1 + 8) + iVar1);
        puVar6 = param_1 + 2;
      }
LAB_007eb0d1:
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
LAB_007eb0da:
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(byte *)puVar7 = (byte)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
    }
    else {
      if (iVar1 == 0x7c) {
        iVar1 = FUN_007e9350();
        uVar4 = *(uint *)(iVar1 + 0xc);
        if (*(int *)(iVar1 + 8) == 0) {
          puVar6 = param_1 + 2;
          puVar7 = (uint *)0x0;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          puVar6 = param_1 + 2;
          puVar7 = (uint *)(*(int *)(iVar1 + 8) + iVar1);
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        goto LAB_007eb0da;
      }
      if (iVar1 != 0x69) {
        if ((&DAT_008c1798)[(byte)*param_1] != '\0') {
          switch(iVar1) {
          case 0x29:
          case 0x2a:
          case 0x2d:
          case 0x2f:
          case 0x32:
            break;
          default:
            iVar1 = FUN_007e9320();
            uVar4 = *(uint *)(iVar1 + 0xc);
            if (*(int *)(iVar1 + 8) == 0) {
              puVar6 = param_1 + 4;
              puVar7 = (uint *)0x0;
              for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
            }
            else {
              puVar6 = param_1 + 4;
              puVar7 = (uint *)(*(int *)(iVar1 + 8) + iVar1);
              for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
            }
            goto LAB_007eb0da;
          }
        }
        switch(iVar1) {
        case 0x29:
        case 0x2a:
        case 0x2d:
        case 0x2f:
        case 0x32:
          iVar1 = FUN_007e9330();
          uVar4 = *(uint *)(iVar1 + 0xc);
          if (*(int *)(iVar1 + 8) == 0) {
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = (uint *)(*(int *)(iVar1 + 8) + iVar1);
          }
          puVar6 = param_1 + 4;
          goto LAB_007eb0d1;
        }
      }
    }
    if ((int)*param_1 >> 8 == 0) {
      return puVar5;
    }
    param_1 = (uint *)((int)param_1 + ((int)*param_1 >> 8));
  } while( true );
}

