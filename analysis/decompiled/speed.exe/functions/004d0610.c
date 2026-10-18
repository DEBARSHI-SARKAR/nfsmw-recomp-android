/* speed.exe 004d0610 FUN_004d0610; analysis pseudocode, not buildable source.
 * calls 004aeaa0 FUN_004aeaa0
 * calls 006ff2d0 FUN_006ff2d0
 * calls 006ff7b0 FUN_006ff7b0
 * calls 0081bab9 FUN_0081bab9
 * calls 004c0ba0 FUN_004c0ba0
 * calls 004bcb40 FUN_004bcb40
 * calls 004cab00 FUN_004cab00
 * calls 004e3ff0 FUN_004e3ff0
 * calls 004c74f0 FUN_004c74f0
 * calls 0045ce70 FUN_0045ce70
 * calls 004e4040 FUN_004e4040
 * calls 00642f60 FUN_00642f60
 * calls 004b9080 FUN_004b9080
 * calls 00714410 FUN_00714410
 * calls 00462430 FUN_00462430
 * calls 004ae8b0 FUN_004ae8b0
 * calls 004df0b0 FUN_004df0b0
 * calls 004f1f60 FUN_004f1f60
 * calls 004c5770 FUN_004c5770
 * calls 004d5d40 FUN_004d5d40
 * calls 0045ce40 FUN_0045ce40
 * calls 004d02e0 FUN_004d02e0
 * calls 00709a70 FUN_00709a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d0610(int param_1,float param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  float fStack_4;
  
  if ((DAT_008f86f8 != 0) && (_DAT_00890968 <= param_2)) {
    if (DAT_00911fa0 == 0) {
      if (DAT_00911f9c != '\0') {
        DAT_00911f9c = 0;
        return;
      }
      if (DAT_00912018 == 0) {
        if (DAT_00911f94 == '\0') {
          if (DAT_00912026 == '\0') {
            DAT_00912026 = '\x01';
            uVar2 = FUN_0045ce40();
            FUN_0045ce70(DAT_0091202c,uVar2);
            DAT_0091202c = FUN_0045ce40();
          }
        }
        else if (DAT_00912026 == '\x01') {
          uVar2 = FUN_0045ce40();
          FUN_0045ce70(DAT_0091202c,uVar2);
          DAT_0091202c = FUN_0045ce40();
          DAT_00912026 = '\0';
        }
        if (DAT_00911e98 == '\x01') {
          if (DAT_00912024 == '\0') {
            DAT_00912024 = '\x01';
            DAT_00912028 = FUN_0045ce40();
          }
        }
        else if (DAT_00912024 == '\x01') {
          uVar2 = FUN_0045ce40();
          FUN_0045ce70(DAT_00912028,uVar2);
          DAT_00912024 = '\0';
        }
        if (DAT_00911ec0 == '\x01') {
          if (DAT_00912025 == '\0') {
            DAT_00912030 = FUN_0045ce40();
          }
          DAT_00912025 = '\x01';
        }
        else {
          if (DAT_00912025 == '\x01') {
            FUN_00462430(DAT_00912030);
          }
          DAT_00912025 = '\0';
        }
        if (DAT_00911fe4 != '\0') {
          if (*(int *)(param_1 + 0xa0) != 0) {
            FUN_00642f60(*(int *)(param_1 + 0xa0));
          }
          DAT_009142a4 = 0;
          DAT_009142a0 = 0;
          FUN_004e3ff0();
          FUN_004c74f0();
          FUN_004f1f60(0);
          iVar3 = FUN_006ff2d0(1);
          if (iVar3 != 0) {
            FUN_006ff2d0(1);
            FUN_006ff7b0();
          }
          iVar3 = FUN_004aeaa0(0x40010010);
          if (iVar3 != 0) {
            FUN_004df0b0();
            if (*(int *)(param_1 + 100) == 1) {
              uVar4 = *(uint *)(iVar3 + 0x114) | 2;
            }
            else {
              uVar4 = *(uint *)(iVar3 + 0x114) & 0xfffffffd;
            }
            *(uint *)(iVar3 + 0x114) = uVar4;
          }
          puVar6 = &DAT_00911ee4;
          for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          DAT_00911fe4 = 0;
          FUN_004b9080(0,1,"PauseMenu");
          return;
        }
        if (DAT_00911fe5 != '\0') {
          if (DAT_00912100 != 0) {
            FUN_004bcb40();
          }
          DAT_00911fe5 = '\0';
        }
        if (DAT_00911f18 != 0) {
          FUN_00714410();
        }
        FUN_004d02e0();
        FUN_004d5d40();
        if (DAT_00912100 != 0) {
          FUN_004c5770(param_2);
        }
        if (*(char *)(*(int *)(param_1 + 0x84) + 0x34) == '\x01') {
          if (*(int *)(param_1 + 0x88) != 0) {
            FUN_004cab00(param_2);
          }
          FUN_00709a70(param_2);
          if (*(int **)(param_1 + 0x58) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x58) + 0x14))(0);
          }
          DAT_009142dc = DAT_009142dc + param_2;
          DAT_009142d8 = param_2;
          piVar5 = &DAT_00911f60;
          do {
            if (*piVar5 != 0) {
              cVar1 = FUN_004ae8b0();
              if (cVar1 == '\0') {
                fStack_4 = param_2;
              }
              else {
                fStack_4 = 0.0;
              }
              (**(code **)(*(int *)*piVar5 + 0x10))(fStack_4);
            }
            piVar5 = piVar5 + 1;
          } while ((int)piVar5 < 0x911f94);
          if (*(int *)(param_1 + 0x84) != 0) {
            FUN_004e4040(param_2,DAT_009142b4);
          }
          piVar5 = &DAT_00911f60;
          do {
            if ((int *)*piVar5 != (int *)0x0) {
              (**(code **)(*(int *)*piVar5 + 0x14))();
            }
            piVar5 = piVar5 + 1;
          } while ((int)piVar5 < 0x911f94);
          if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x5c) + 0x14))(0);
          }
        }
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
        if ((((DAT_0091236c == 0) && (DAT_00912378 == 0)) && (DAT_0091237d == '\0')) &&
           (DAT_00912310 + -1 <= DAT_0091230c)) {
          FUN_004c0ba0(&LAB_004ae3d0);
        }
        FUN_0081bab9();
      }
    }
    else {
      DAT_00911fa0 = DAT_00911fa0 + -1;
      if (DAT_00911fa0 < 0) {
        DAT_00911fa0 = 0;
        return;
      }
    }
  }
  return;
}

