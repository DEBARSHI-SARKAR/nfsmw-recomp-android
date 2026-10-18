/* speed.exe 004d5d40 FUN_004d5d40; analysis pseudocode, not buildable source.
 * calls 00453760 FUN_00453760
 * calls 004af050 FUN_004af050
 * calls 004519d0 FUN_004519d0
 * calls 004522f0 FUN_004522f0
 * calls 0045f3c0 FUN_0045f3c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5d40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  int local_24;
  
  iVar7 = 0;
  DAT_008ef998 = 0;
  local_44 = 0;
  iVar8 = 0;
  do {
    iVar5 = FUN_004af050(local_44);
    if (iVar5 != 0) {
      iVar5 = FUN_004af050(local_44);
      (&DAT_009142d0)[local_44] = iVar5;
      if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x34), iVar5 != 0)) {
        DAT_008ef998 = DAT_008ef998 + 1;
        iVar4 = *(int *)(&DAT_00919620 + ((local_44 != 0) + 1) * 0x70);
        if (iVar4 != 0) {
          (&DAT_009142ac)[local_44] = iVar4;
          uVar2 = *(undefined4 *)(iVar4 + 0x44);
          uVar3 = *(undefined4 *)(iVar4 + 0x48);
          *(undefined4 *)((int)&DAT_00914430 + iVar8) = *(undefined4 *)(iVar4 + 0x40);
          *(undefined4 *)((int)&DAT_00914434 + iVar8) = uVar2;
          *(undefined4 *)((int)&DAT_00914438 + iVar8) = uVar3;
          local_40 = *(undefined4 *)(iVar4 + 0x50);
          uVar2 = *(undefined4 *)(iVar4 + 0x54);
          uVar3 = *(undefined4 *)(iVar4 + 0x58);
          *(undefined4 *)((int)&DAT_00914450 + iVar8) = local_40;
          *(undefined4 *)((int)&DAT_00914454 + iVar8) = uVar2;
          *(undefined4 *)((int)&DAT_00914458 + iVar8) = uVar3;
          uVar2 = *(undefined4 *)(iVar4 + 100);
          local_3c = *(undefined4 *)((int)&DAT_00914454 + iVar8);
          uVar3 = *(undefined4 *)(iVar4 + 0x68);
          *(undefined4 *)((int)&DAT_00914470 + iVar8) = *(undefined4 *)(iVar4 + 0x60);
          *(undefined4 *)((int)&DAT_00914474 + iVar8) = uVar2;
          *(undefined4 *)((int)&DAT_00914478 + iVar8) = uVar3;
          FUN_0045f3c0((int)&DAT_00914490 + iVar7,&local_40);
          uVar2 = *(undefined4 *)((int)&DAT_00914430 + iVar8);
          *(undefined4 *)((int)&DAT_009144c0 + iVar7) = *(undefined4 *)((int)&DAT_00914490 + iVar7);
          uVar3 = *(undefined4 *)((int)&DAT_00914434 + iVar8);
          *(undefined4 *)((int)&DAT_009144a0 + iVar7) = uVar2;
          *(undefined4 *)((int)&DAT_009144c4 + iVar7) = *(undefined4 *)((int)&DAT_00914494 + iVar7);
          *(undefined4 *)((int)&DAT_009144a4 + iVar7) = uVar3;
          *(undefined4 *)((int)&DAT_009144d0 + iVar7) = uVar2;
          *(undefined4 *)((int)&DAT_009144d4 + iVar7) = uVar3;
          uVar2 = *(undefined4 *)(iVar5 + 0x40);
          *(undefined4 *)((int)&DAT_009144b4 + iVar7) = *(undefined4 *)(iVar5 + 0x44);
          *(undefined4 *)((int)&DAT_009144b0 + iVar7) = uVar2;
          uVar2 = *(undefined4 *)(iVar5 + 0x44);
          uVar3 = *(undefined4 *)(iVar5 + 0x48);
          *(undefined4 *)((int)&DAT_00914560 + iVar8) = *(undefined4 *)(iVar5 + 0x40);
          *(undefined4 *)((int)&DAT_00914564 + iVar8) = uVar2;
          *(undefined4 *)((int)&DAT_00914568 + iVar8) = uVar3;
          *(float *)((int)&DAT_009144f0 + iVar7) =
               *(float *)((int)&DAT_009144b0 + iVar7) - *(float *)((int)&DAT_009144a0 + iVar7);
          *(float *)((int)&DAT_009144f4 + iVar7) =
               *(float *)((int)&DAT_009144b4 + iVar7) - *(float *)((int)&DAT_009144a4 + iVar7);
          uVar2 = *(undefined4 *)(iVar4 + 0x204);
          uVar3 = *(undefined4 *)(iVar4 + 0x208);
          *(undefined4 *)((int)&DAT_00914540 + iVar8) = *(undefined4 *)(iVar4 + 0x200);
          *(undefined4 *)((int)&DAT_00914544 + iVar8) = uVar2;
          *(undefined4 *)((int)&DAT_00914548 + iVar8) = uVar3;
          uVar2 = *(undefined4 *)(iVar5 + 0x14);
          uVar3 = *(undefined4 *)(iVar5 + 0x18);
          *(undefined4 *)((int)&DAT_00914580 + iVar8) = *(undefined4 *)(iVar5 + 0x10);
          *(undefined4 *)((int)&DAT_00914584 + iVar8) = uVar2;
          *(undefined4 *)((int)&DAT_00914588 + iVar8) = uVar3;
          uVar2 = *(undefined4 *)(iVar5 + 0x44);
          uVar3 = *(undefined4 *)(iVar5 + 0x48);
          *(undefined4 *)((int)&DAT_00914560 + iVar8) = *(undefined4 *)(iVar5 + 0x40);
          *(undefined4 *)((int)&DAT_00914564 + iVar8) = uVar2;
          *(undefined4 *)((int)&DAT_00914568 + iVar8) = uVar3;
          uVar2 = *(undefined4 *)(iVar5 + 0x54);
          uVar3 = *(undefined4 *)(iVar5 + 0x58);
          *(undefined4 *)((int)&DAT_00914520 + iVar8) = *(undefined4 *)(iVar5 + 0x50);
          *(undefined4 *)((int)&DAT_00914524 + iVar8) = uVar2;
          *(undefined4 *)((int)&DAT_00914528 + iVar8) = uVar3;
          (&DAT_009142c8)[local_44] =
               SQRT(*(float *)(iVar5 + 0x58) * *(float *)(iVar5 + 0x58) +
                    *(float *)(iVar5 + 0x54) * *(float *)(iVar5 + 0x54) +
                    *(float *)(iVar5 + 0x50) * *(float *)(iVar5 + 0x50));
          local_40 = *(undefined4 *)(iVar5 + 0x10);
          local_3c = *(undefined4 *)(iVar5 + 0x14);
          FUN_0045f3c0(&DAT_00914510 + iVar7,&local_40);
          iVar4 = *(int *)((int)&DAT_00914768 + iVar8);
          puVar1 = &DAT_009142b4 + local_44;
          *(undefined4 *)(&DAT_009142bc + local_44 * 4) = *puVar1;
          if ((iVar4 != *(int *)((int)&DAT_009145d8 + iVar8)) ||
             (*(int *)((int)&DAT_0091476c + iVar8) != *(int *)((int)&DAT_009145dc + iVar8))) {
            *(undefined4 *)((int)&DAT_00914774 + iVar8) =
                 *(undefined4 *)((int)&DAT_009145e4 + iVar8);
            *(undefined4 *)((int)&DAT_00914768 + iVar8) =
                 *(undefined4 *)((int)&DAT_009145d8 + iVar8);
            *(undefined4 *)((int)&DAT_0091476c + iVar8) =
                 *(undefined4 *)((int)&DAT_009145dc + iVar8);
            *(undefined4 *)((int)&DAT_00914770 + iVar8) =
                 *(undefined4 *)((int)&DAT_009145e0 + iVar8);
            uVar9 = FUN_004522f0("CDActionDrive");
            local_38 = uVar9;
            FUN_004519d0("CDActionDrive");
            if ((*(int *)((int)&DAT_00914768 + iVar8) == (int)local_38) &&
               (*(int *)((int)&DAT_0091476c + iVar8) == local_38._4_4_)) {
              iVar5 = FUN_004af050(local_44);
              if (*(int *)(iVar5 + 0xc4) == 0) {
                *puVar1 = 1;
              }
              else if (*(int *)(iVar5 + 0xc4) == 1) {
                *puVar1 = 2;
              }
              else {
                *puVar1 = 0;
              }
            }
            else {
              uVar9 = FUN_004522f0("CDActionTrackCar");
              local_24 = (int)((ulonglong)uVar9 >> 0x20);
              FUN_004519d0("CDActionTrackCar");
              if ((*(int *)((int)&DAT_00914768 + iVar8) == (int)uVar9) &&
                 (*(int *)((int)&DAT_0091476c + iVar8) == local_24)) {
                if (*(float *)(iVar5 + 0xac) == _DAT_00890968) {
                  *puVar1 = 5;
                }
                else {
                  *puVar1 = 3;
                }
              }
              else {
                piVar6 = (int *)FUN_00453760("CDActionIce");
                if ((*(int *)((int)&DAT_00914768 + iVar8) == *piVar6) &&
                   (*(int *)((int)&DAT_0091476c + iVar8) == piVar6[1])) {
                  *puVar1 = 4;
                }
              }
            }
          }
        }
      }
    }
    local_44 = local_44 + 1;
    iVar7 = iVar7 + 8;
    iVar8 = iVar8 + 0x10;
  } while (iVar7 < 0x10);
  return;
}

