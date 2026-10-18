/* speed.exe 007605b0 FUN_007605b0; analysis pseudocode, not buildable source.
 * calls 0075f5d0 FUN_0075f5d0
 * calls 00652ad0 _malloc
 * calls 0073a2a0 FUN_0073a2a0
 */

void FUN_007605b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881734;
  local_c = ExceptionList;
  piVar6 = DAT_009b37cc;
  piVar7 = DAT_009b37cc;
  ExceptionList = &local_c;
  if (DAT_009b37cc != DAT_009b37cc + DAT_009b37d4) {
    do {
      piVar1 = (int *)*piVar7;
      if ((piVar1[10] == 1) && (puVar2 = DAT_009b2c58, (undefined4 **)DAT_009b2c58 != &DAT_009b2c58)
         ) {
        do {
          if (puVar2[0x1b4] == *(int *)(piVar1[0x10] + 0x304)) {
            if ((((puVar2[2] != 0) && (puVar2[0xd2] != 0)) && (*(int *)(puVar2[0xd2] + 0x18) == 2))
               && (((puVar2[0xd3] != 0 && (*(int *)(puVar2[0xd3] + 8) == 2)) &&
                   ((puVar2[0xd4] != 0 && (iVar3 = FUN_0073a2a0(), iVar3 != 0)))))) {
              pvVar4 = _malloc(0x17e0);
              local_4 = 0;
              if (pvVar4 == (void *)0x0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_0075f5d0(piVar1[0x10]);
              }
              local_4 = 0xffffffff;
              (**(code **)(*piVar1 + 0x14))(uVar5);
              piVar6 = DAT_009b37cc;
            }
            break;
          }
          puVar2 = (undefined4 *)*puVar2;
        } while ((undefined4 **)puVar2 != &DAT_009b2c58);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar6 + DAT_009b37d4);
  }
  ExceptionList = local_c;
  return;
}

