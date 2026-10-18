/* speed.exe 005c4670 FUN_005c4670; analysis pseudocode, not buildable source.
 * calls 005c31a0 FUN_005c31a0
 * calls 00652ac0 _malloc
 * calls 005b25a0 FUN_005b25a0
 * calls 005b12f0 FUN_005b12f0
 * calls 005b85a0 FUN_005b85a0
 * calls 005bc790 FUN_005bc790
 * calls 005b2580 FUN_005b2580
 * calls 005b8f20 FUN_005b8f20
 * calls 005bf060 FUN_005bf060
 * calls 005bc9b0 FUN_005bc9b0
 * calls 005bee70 FUN_005bee70
 */

uint __thiscall FUN_005c4670(int *param_1,ushort *param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008747de;
  ExceptionList = &local_c;
  puVar4 = (ushort *)(param_3 + (int)param_2);
  *(undefined1 *)(param_1 + 6) = 0;
  do {
    if (puVar4 <= param_2) {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)puVar4 >> 8),1);
    }
    uVar2 = *param_2;
    if (uVar2 < 0x6850) {
      if (uVar2 == 0x684f) {
        *(undefined4 *)(param_1[3] + 0x10) = *(undefined4 *)(param_2 + 2);
      }
      else if (uVar2 == 0x4150) {
        if ((param_1[4] == 0) || (*(int *)(param_1[4] + 0xc) != *(int *)(param_2 + 2))) {
          iVar7 = FUN_005b85a0(*(undefined4 *)(param_2 + 2));
          param_1[4] = iVar7;
        }
        param_1[5] = param_1[4];
      }
      else if (uVar2 == 0x4153) {
        uVar2 = param_2[1];
        uVar5 = 0;
        puVar3 = param_2;
        if (uVar2 >> 2 != 0) {
          do {
            *(undefined4 *)(*(int *)(param_1[3] + 0x2c) + uVar5 * 4) = *(undefined4 *)(puVar3 + 2);
            uVar5 = uVar5 + 1;
            puVar3 = puVar3 + 2;
          } while (uVar5 < uVar2 >> 2);
        }
      }
      else {
        if (uVar2 != 0x504f) goto LAB_005c48bc;
        *(undefined4 *)(param_1[3] + 0xc) = *(undefined4 *)(param_2 + 2);
        *(undefined4 *)(param_1[3] + 0x10) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_1[3] + 0x1c) = *(undefined4 *)(param_2 + 6);
        *(short *)(param_1[3] + 0x22) = (short)*(undefined4 *)(param_2 + 8);
        if ((*(uint *)(param_1[3] + 0x1c) & 0x100000) != 0) {
          piVar1 = param_1 + 7;
          uVar5 = FUN_005b8f20(*(undefined4 *)(param_1[3] + 0xc),piVar1,param_1 + 8);
          if ((char)uVar5 == '\0') {
            if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
              uVar5 = (*(code *)**(undefined4 **)param_1[3])(1);
            }
            param_1[3] = 0;
            ExceptionList = local_c;
            return uVar5 & 0xffffff00;
          }
          *(undefined1 *)(param_1 + 6) = 1;
          *(uint *)(param_1[3] + 0x1c) = *(uint *)(param_1[3] + 0x1c) | *(uint *)(*piVar1 + 0x1c);
          if (*(short *)(param_1[3] + 0x22) == -1) {
            *(undefined4 *)(param_1[3] + 0x24) = *(undefined4 *)(*piVar1 + 0x24);
            *(undefined4 *)(param_1[3] + 0x28) = *(undefined4 *)(*piVar1 + 0x28);
          }
          if (((int *)*piVar1)[6] == 5) {
            puVar6 = _malloc(0x6c);
            local_4 = 0;
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              FUN_005c31a0(*piVar1,1);
              *puVar6 = &PTR_FUN_008a2e24;
              puVar6[0x17] = &PTR_LAB_008a2c18;
              puVar6[0x19] = 0;
              puVar6[0x1a] = 0;
              puVar6[0x18] = 0;
            }
            local_4 = 0xffffffff;
          }
          else {
            puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar1 + 4))(1);
          }
          puVar6[3] = *(undefined4 *)(param_1[3] + 0xc);
          puVar6[4] = *(undefined4 *)(param_1[3] + 0x10);
          puVar6[7] = *(undefined4 *)(param_1[3] + 0x1c);
          *(undefined2 *)((int)puVar6 + 0x22) = *(undefined2 *)(param_1[3] + 0x22);
          puVar6[9] = *(undefined4 *)(param_1[3] + 0x24);
          puVar6[10] = *(undefined4 *)(param_1[3] + 0x28);
          if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)param_1[3])(1);
          }
          param_1[3] = (int)puVar6;
          for (iVar7 = puVar6[0x13]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
            if (*(int *)(iVar7 + 0x18) != 0) {
              *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(*(int *)(iVar7 + 0x18) + 0x30);
            }
          }
        }
        if ((*(uint *)(param_1[3] + 0x1c) & 0x10000000) != 0) {
          *(int *)(*(int *)(*param_1 + 0x90) + param_1[0x13] * 4) = param_1[3];
          param_1[0x13] = param_1[0x13] + 1;
        }
      }
    }
    else if (uVar2 == 0x6e4f) {
      if (*(char *)((int)param_1 + 9) != '\0') {
        FUN_005b12f0(param_2 + 2);
      }
    }
    else if (uVar2 == 0x744f) {
      iVar7 = FUN_005bee70(*(undefined4 *)(param_2 + 2));
      param_1[3] = iVar7;
    }
    else {
LAB_005c48bc:
      iVar7 = param_1[3];
      if (iVar7 != 0) {
        switch(*(undefined4 *)(iVar7 + 0x18)) {
        case 1:
        case 9:
        case 10:
          if (uVar2 == 0x6649) {
            *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(param_2 + 2);
          }
          break;
        case 2:
          FUN_005bf060(param_2);
          break;
        case 4:
          FUN_005bc790(param_2);
          break;
        case 6:
          FUN_005bc9b0(param_2);
          break;
        case 0xc:
          FUN_005b2580(param_2);
          FUN_005b25a0(param_2);
        }
      }
    }
    param_2 = (ushort *)((int)param_2 + param_2[1] + 4);
  } while( true );
}

