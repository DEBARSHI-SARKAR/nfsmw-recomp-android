/* speed.exe 0059f7c0 FUN_0059f7c0; analysis pseudocode, not buildable source.
 * calls 00515b90 FUN_00515b90
 * calls 00515d70 FUN_00515d70
 * calls 00599740 FUN_00599740
 * calls 005b2d80 FUN_005b2d80
 * calls 00568bd0 FUN_00568bd0
 * calls 00515830 FUN_00515830
 * calls 00568c20 FUN_00568c20
 * calls 00514df0 FUN_00514df0
 * calls 00514da0 FUN_00514da0
 * calls 007c4b80 FUN_007c4b80
 * calls 00514d10 FUN_00514d10
 * calls 005157e0 FUN_005157e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0059f7c0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 local_20 [32];
  
  if ((*(char *)(param_1 + 0x38) == '\0') || (*(int *)(param_1 + 0x40) < 1)) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xac),0x5079c8f8);
    if (cVar1 != '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0xac),0x33113ac,1);
    }
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xb0),0x5079c8f8);
    if (cVar1 == '\0') {
      return;
    }
    FUN_00514d10(*(undefined4 *)(param_1 + 0xb0),0x33113ac,1);
    return;
  }
  iVar7 = 0;
  if (*(int *)(param_1 + 0x40) < 1) {
LAB_0059f856:
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xd8),0x16a259);
    if (cVar1 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0xd8),0x16a259,1);
    }
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xdc),0x16a259);
    if (cVar1 != '\0') goto LAB_0059f8b2;
    uVar3 = *(undefined4 *)(param_1 + 0xdc);
    uVar9 = 0x16a259;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x40);
    pcVar2 = (char *)(param_1 + 0x60);
    do {
      if (*pcVar2 == '\0') {
        iVar7 = iVar7 + 1;
      }
      pcVar2 = pcVar2 + 0x18;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar7 < 1) goto LAB_0059f856;
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xd8),0x16a259);
    if (cVar1 != '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0xd8),0x1ca7c0,1);
    }
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xdc),0x16a259);
    if (cVar1 == '\0') goto LAB_0059f8b2;
    uVar3 = *(undefined4 *)(param_1 + 0xdc);
    uVar9 = 0x1ca7c0;
  }
  FUN_00514d10(uVar3,uVar9,1);
LAB_0059f8b2:
  cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xac),0x5079c8f8);
  if (cVar1 == '\0') {
    FUN_00514d10(*(undefined4 *)(param_1 + 0xac),0x5079c8f8,1);
  }
  cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xb0),0x5079c8f8);
  if (cVar1 == '\0') {
    FUN_00514d10(*(undefined4 *)(param_1 + 0xb0),0x5079c8f8,1);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar6 = *(int *)(param_1 + 0x40);
    pcVar2 = (char *)(param_1 + 0x60);
    do {
      if (*pcVar2 != '\0') {
        iVar5 = iVar5 + 1;
      }
      pcVar2 = pcVar2 + 0x18;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0xb4),&DAT_0089d764,iVar5);
  if (iVar7 < 2) {
    if (iVar7 == 1) {
      uVar3 = FUN_00568c20();
      *(undefined4 *)(param_1 + 0x44) = uVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    }
  }
  else if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) == 0x7fffffff)) {
    *(int *)(param_1 + 0x48) = DAT_00925ae8;
    uVar3 = FUN_00568c20();
    *(undefined4 *)(param_1 + 0x44) = uVar3;
  }
  else if (_DAT_008959e4 <= (float)(DAT_00925ae8 - *(int *)(param_1 + 0x48)) * _DAT_00890984) {
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xdc),0x1ca7c0);
    if (cVar1 == '\0') {
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xdc),0xaff37f61);
      if ((cVar1 != '\0') &&
         (cVar1 = FUN_00514df0(*(undefined4 *)(param_1 + 0xdc),0xaff37f61), cVar1 == '\0')) {
        FUN_00514d10(*(undefined4 *)(param_1 + 0xdc),0xd6c950a0,1);
        *(int *)(param_1 + 0x48) = DAT_00925ae8;
        uVar3 = FUN_00568bd0();
        *(undefined4 *)(param_1 + 0x44) = uVar3;
      }
    }
    else {
      FUN_00514d10(*(undefined4 *)(param_1 + 0xdc),0xaff37f61,1);
    }
  }
  iVar7 = 0;
  puVar8 = (undefined4 *)(param_1 + 200);
  do {
    if (iVar7 < *(int *)(param_1 + 0x40)) {
      if (iVar7 == *(int *)(param_1 + 0x44)) {
        cVar1 = FUN_00514da0(*puVar8,0x249db7b7);
        if ((cVar1 == '\0') && (cVar1 = FUN_00514df0(*puVar8,0x3826a28), cVar1 == '\0')) {
          uVar3 = *puVar8;
          uVar9 = 0x249db7b7;
LAB_0059fabc:
          FUN_00514d10(uVar3,uVar9,1);
        }
      }
      else {
        cVar1 = FUN_00514da0(*puVar8,0x1744b3);
        if (cVar1 == '\0') {
          uVar3 = *puVar8;
          uVar9 = 0x1744b3;
          goto LAB_0059fabc;
        }
      }
    }
    else {
      cVar1 = FUN_00514da0(*puVar8,0x1744b3);
      if (cVar1 == '\0') {
        uVar3 = *puVar8;
        uVar9 = 0x1744b3;
        goto LAB_0059fabc;
      }
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 1;
    if (3 < iVar7) {
      iVar7 = param_1 + 0x60;
      iVar5 = 0;
      puVar8 = (undefined4 *)(param_1 + 0xb8);
      do {
        if (iVar5 < *(int *)(param_1 + 0x40)) {
          cVar1 = FUN_00514da0(*puVar8,0x1ca7c0);
          if (cVar1 == '\0') {
            FUN_00514d10(*puVar8,0x1ca7c0,1);
          }
          FUN_00515b90(*puVar8,*(undefined4 *)(iVar7 + -0x14));
          FUN_00515830(local_20,*puVar8);
          uVar4 = FUN_005b2d80();
          iVar6 = FUN_007c4b80();
          FUN_005157e0(*puVar8,uVar4 & 0xffffff | iVar6 << 0x18);
        }
        else {
          cVar1 = FUN_00514da0(*puVar8,0x16a259);
          if (cVar1 == '\0') {
            FUN_00514d10(*puVar8,0x16a259,1);
          }
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x18;
        puVar8 = puVar8 + 1;
      } while (iVar5 < 4);
      iVar7 = *(int *)(param_1 + 0x44);
      if (iVar7 < 0) {
        return;
      }
      iVar5 = param_1 + iVar7 * 0x18;
      FUN_00599740(local_20,*(undefined4 *)(iVar5 + 0x50),*(undefined4 *)(iVar5 + 0x58),
                   *(undefined4 *)(param_1 + 0x54 + iVar7 * 0x18),1);
      FUN_00515d70(*(undefined4 *)(param_1 + 0xe0),&DAT_008941f8,local_20);
      return;
    }
  } while( true );
}

