/* speed.exe 006c1510 FUN_006c1510; analysis pseudocode, not buildable source.
 * calls 006c2760 FUN_006c2760
 * calls 006cb1e0 FUN_006cb1e0
 * calls 006cb190 FUN_006cb190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c1510(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  int *piStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined *puStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  
  puStack_20 = &DAT_0093d918;
  uStack_24 = 1;
  uStack_28 = 0;
  piStack_2c = DAT_00982bd8;
  puStack_30 = (undefined *)0x6c152a;
  (**(code **)(*DAT_00982bd8 + 0x38))();
  puStack_30 = &DAT_0093d470;
  uStack_34 = 0;
  iStack_38 = DAT_00982c14;
  piStack_3c = DAT_00982bd8;
  (**(code **)(*DAT_00982bd8 + 0x14))();
  DAT_0093dbec = 0;
  DAT_009829fc = 0;
  DAT_0093dbf0 = 0;
  DAT_00982a00 = 0;
  _DAT_0093dbf4 = 0;
  _DAT_00982a04 = 0;
  _DAT_0093dbf8 = 0;
  _DAT_00982a08 = 0;
  _DAT_0093dbfc = 0;
  _DAT_00982a0c = 0;
  DAT_0093dc00 = 0;
  _DAT_00982a10 = 0;
  iVar3 = (**(code **)(*DAT_00982bd8 + 0x18))(DAT_00982bd8,DAT_00982c14,0x16);
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = (**(code **)(*DAT_00982bd8 + 0x1c))(DAT_00982bd8,DAT_00982c14,0x16,iVar6,&piStack_3c);
      if (iVar4 == 0) {
        iVar7 = 0;
        iVar4 = DAT_0093d898;
        uVar5 = uStack_34;
        do {
          iVar1 = DAT_0093d89c;
          if (iVar4 == 0x10de) {
            if ((((DAT_0093d89c == 0x1a0) && (4 < iVar7)) ||
                ((DAT_0093d89c == 0x1f0 && (0x10 < iVar7)))) ||
               (((cVar2 = FUN_006cb1e0(0x10de,DAT_0093d89c), iVar4 = DAT_0093d898, uVar5 = uStack_34
                 , cVar2 != '\0' &&
                 (fVar8 = (float10)FUN_006cb190(0x10de,iVar1), iVar4 = DAT_0093d898,
                 uVar5 = uStack_34,
                 fVar8 < (float10)_DAT_00890d3c != (fVar8 == (float10)_DAT_00890d3c))) &&
                (8 < iVar7)))) break;
          }
          else if ((iVar4 != 0x1002) && (0x10 < iVar7)) break;
          if ((iVar4 == 0x18ca) && (8 < iVar7)) break;
          if (((piStack_3c == *(int **)((int)&DAT_008f9414 + iVar7)) &&
              (iStack_38 == *(int *)((int)&DAT_008f942c + iVar7))) &&
             (*(undefined4 *)((int)&DAT_0093dbec + iVar7) = 1,
             *(uint *)((int)&DAT_009829fc + iVar7) < uVar5)) {
            *(uint *)((int)&DAT_009829fc + iVar7) = uVar5;
          }
          iVar7 = iVar7 + 4;
        } while (iVar7 < 0x18);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  (**(code **)(*DAT_00982bd8 + 0x2c))(DAT_00982bd8,DAT_00982c14,1,0x15,0,1,&DAT_00901890);
  DAT_00901890 = DAT_00901890 + -1;
  if ((DAT_0093d898 == 0x1002) && (iVar3 = FUN_006c2760(), iVar3 != 0)) {
    DAT_00901890 = 0;
  }
  DAT_00982c08 = 0;
  if (DAT_0093d898 == 0x10de) {
    iVar3 = (**(code **)(*DAT_00982bd8 + 0x28))(DAT_00982bd8,DAT_00982c14,1,0x16,2,3,0x4b);
    if (iVar3 == 0) {
      DAT_00982c08 = 1;
      return;
    }
  }
  else if ((DAT_0093d898 == 0x1002) &&
          (iVar3 = (**(code **)(*DAT_00982bd8 + 0x28))
                             (DAT_00982bd8,DAT_00982c14,1,0x16,2,3,0x36314644), iVar3 == 0)) {
    DAT_00982c08 = 2;
  }
  return;
}

