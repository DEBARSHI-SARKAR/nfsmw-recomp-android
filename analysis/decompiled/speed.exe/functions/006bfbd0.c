/* speed.exe 006bfbd0 FUN_006bfbd0; analysis pseudocode, not buildable source.
 */

int FUN_006bfbd0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 local_450 [128];
  char acStack_250 [592];
  
  uVar5 = DAT_00982c14;
  local_450[0] = 1;
  uVar4 = 0;
  iVar1 = (**(code **)(*DAT_00982bd8 + 0x10))(DAT_00982bd8);
  if (iVar1 != 0) {
    do {
      (**(code **)(*DAT_00982bd8 + 0x14))(DAT_00982bd8,uVar4,0,local_450);
      iVar1 = 0x11;
      bVar8 = true;
      pcVar6 = acStack_250;
      pcVar7 = "NVIDIA NVPerfHUD";
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        unaff_EBX = 2;
        uVar5 = uVar4;
        break;
      }
      uVar4 = uVar4 + 1;
      uVar2 = (**(code **)(*DAT_00982bd8 + 0x10))(DAT_00982bd8);
    } while (uVar4 < uVar2);
  }
  iVar3 = (**(code **)(*DAT_00982bd8 + 0x40))
                    (DAT_00982bd8,uVar5,unaff_EBX,DAT_00982bf4,0x40,&DAT_0093e82c,&DAT_00982bdc);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = (**(code **)(*DAT_00982bd8 + 0x40))
                      (DAT_00982bd8,DAT_00982c14,1,DAT_00982bf4,0x20,&DAT_0093e82c,&DAT_00982bdc);
  }
  if ((-0x7789f794 < iVar1) && (iVar1 == 0)) {
    (**(code **)(*DAT_00982bdc + 0xa4))(DAT_00982bdc);
    (**(code **)(*DAT_00982bdc + 0xac))(DAT_00982bdc,0,0,7,0,0x3f800000,0);
    (**(code **)(*DAT_00982bdc + 0xa8))(DAT_00982bdc);
    (**(code **)(*DAT_00982bdc + 0x44))(DAT_00982bdc,0,0,0,0);
  }
  return iVar1;
}

