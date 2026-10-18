/* speed.exe 00800650 FUN_00800650; analysis pseudocode, not buildable source.
 * calls 00801332 FUN_00801332
 * calls 00808896 FUN_00808896
 * calls 008001d8 FUN_008001d8
 * calls 0080710b FUN_0080710b
 */

void FUN_00800650(undefined1 *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  char local_1c [12];
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = (int)param_1;
  local_1c[0] = -0x80;
  local_1c[1] = -0x80;
  local_1c[2] = -0x80;
  local_1c[3] = -0x80;
  local_1c[4] = -0x80;
  local_1c[5] = -0x80;
  local_1c[6] = -0x80;
  local_1c[7] = -0x80;
  local_1c[8] = -0x80;
  local_1c[9] = -0x80;
  local_1c[10] = 0x80;
  uVar8 = 0;
  do {
    uVar6 = 0;
    do {
      iVar4 = FUN_0080710b((int)param_1 + 0x150,(&DAT_008c5260)[uVar6 + uVar8]);
      if (iVar4 == 0) {
        if (param_2 == '\0') {
          cVar2 = local_1c[uVar6];
          goto LAB_008006af;
        }
      }
      else {
        cVar2 = FUN_00801332((int)param_1 + 0x150,7);
        cVar2 = ((char)(cVar2 * '\x02') == '\0') + cVar2 * '\x02';
        local_1c[uVar6] = cVar2;
LAB_008006af:
        *(char *)(uVar8 + uVar6 + 0x3a4 + (int)param_1) = cVar2;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xb);
    uVar8 = uVar8 + 0xb;
    if (0x15 < uVar8) {
      if (param_2 == '\0') {
        puVar7 = &DAT_008c52d4;
        puVar9 = (undefined4 *)((int)param_1 + 0x564);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      iVar4 = (int)param_1 + 0x150;
      iVar5 = FUN_0080710b(iVar4,0x80);
      if (iVar5 != 0) {
        uVar8 = 1;
        do {
          iVar5 = FUN_0080710b(iVar4,(&UNK_008c5278)[uVar8]);
          if (iVar5 != 0) {
            uVar3 = FUN_00801332(iVar4,4);
            *(undefined1 *)(uVar8 + 0x640 + (int)param_1) = uVar3;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < 0x40);
        FUN_008001d8(param_1,(int)param_1 + 0x640);
      }
      uVar8 = 0;
      do {
        uVar6 = 0;
        do {
          iVar4 = FUN_0080710b((int)param_1 + 0x150,(&DAT_008c52b8)[uVar6 + uVar8]);
          if (iVar4 != 0) {
            cVar2 = FUN_00801332((int)param_1 + 0x150,7);
            *(char *)(uVar8 + uVar6 + 0x564 + (int)param_1) =
                 ((char)(cVar2 * '\x02') == '\0') + cVar2 * '\x02';
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0xe);
        uVar8 = uVar8 + 0xe;
      } while (uVar8 < 0x1c);
      local_c = 0;
      param_1 = &DAT_008c52f0;
      do {
        local_8 = local_c;
        local_10 = 2;
        do {
          uVar8 = 0;
          do {
            uVar6 = 0;
            do {
              iVar4 = FUN_0080710b(iVar1 + 0x150,param_1[uVar6]);
              if (iVar4 == 0) {
                if (param_2 == '\0') {
                  cVar2 = local_1c[uVar6];
                  goto LAB_008007dd;
                }
              }
              else {
                cVar2 = FUN_00801332(iVar1 + 0x150,7);
                cVar2 = ((char)(cVar2 * '\x02') == '\0') + cVar2 * '\x02';
                local_1c[uVar6] = cVar2;
LAB_008007dd:
                *(char *)((local_8 + uVar8) * 0xb + uVar6 + 0x3ba + iVar1) = cVar2;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < 0xb);
            param_1 = param_1 + 0xb;
            uVar8 = uVar8 + 1;
          } while (uVar8 < 6);
          local_8 = local_8 + 0x12;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        local_c = local_c + 6;
        if (0x8c547b < (int)param_1) {
          FUN_00808896(iVar1);
          return;
        }
      } while( true );
    }
  } while( true );
}

