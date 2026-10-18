/* speed.exe 007ada50 FUN_007ada50; analysis pseudocode, not buildable source.
 * calls 007a9e10 FUN_007a9e10
 * calls 0045a430 FUN_0045a430
 * calls 00514c70 FUN_00514c70
 * calls 00514cc0 FUN_00514cc0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00524920 FUN_00524920
 * calls 00515b90 FUN_00515b90
 * calls 0056f7b0 FUN_0056f7b0
 * calls 00591330 FUN_00591330
 * calls 007a3c70 FUN_007a3c70
 * calls 00581730 FUN_00581730
 * calls 005251a0 FUN_005251a0
 * calls 00527df0 FUN_00527df0
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00591e90 FUN_00591e90
 * calls 007a5a60 FUN_007a5a60
 * calls 005252d0 FUN_005252d0
 * calls 00581760 FUN_00581760
 * calls 007ad7d0 FUN_007ad7d0
 * calls 00516c90 FUN_00516c90
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 0056f180 FUN_0056f180
 * calls 0051e1a0 FUN_0051e1a0
 * calls 00591240 FUN_00591240
 * calls 0056f120 FUN_0056f120
 * calls 00581cb0 FUN_00581cb0
 * calls 00576f10 FUN_00576f10
 * calls 00524850 FUN_00524850
 * calls 007a3c00 FUN_007a3c00
 * calls 007a5a20 FUN_007a5a20
 * calls 007a5aa0 FUN_007a5aa0
 * calls 00525220 FUN_00525220
 * calls 0056bc10 FUN_0056bc10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007ada50(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_118;
  undefined1 local_10c [128];
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882feb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007ad7d0();
  switch(*(uint *)(param_1 + 0x1ac) & 0xffff) {
  case 1:
    uVar7 = 0xd9d6b954;
    uVar6 = 0x3a541f7f;
    break;
  case 2:
    uVar7 = 0xee053562;
    uVar6 = 0xf0bddecd;
    break;
  default:
    uVar7 = 0;
    uVar6 = 0;
    break;
  case 4:
    uVar7 = 0x2414de28;
    uVar6 = 0x9996ca1e;
    break;
  case 8:
    uVar7 = 0xd8a058f7;
    uVar6 = 0xbe5ad8a2;
    break;
  case 0x10:
    uVar7 = 0xd8500c3;
    uVar6 = 0x3704f3d;
    break;
  case 0x20:
    uVar7 = 0x3ec63978;
    uVar6 = 0x3704f3d;
  }
  if (((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) != 0) ||
     ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0)) {
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x39dc21f9);
    FUN_00514c70(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe998fe99);
    FUN_00514c70(uVar3);
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xaa9834bc,uVar7);
  uVar6 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xe3b271b8,uVar6);
  FUN_00515b90(uVar6);
  FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xd0f7c7cc,0x16a259,1);
  if ((*(int *)(param_1 + 0x34) == 0) || (*(char *)(*(int *)(param_1 + 0x34) + 0xc) != '\0')) {
    uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x7379349b);
    FUN_00514c70(uVar6);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d25b2c4,0x58bbed2a);
    FUN_00516c90(0xd9420cd5,*(undefined4 *)(param_1 + 0x10),0);
    if ((*(byte *)(param_1 + 0x1ac) & 4) == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = 0x58bbed2a;
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = 0xda87b01;
    }
    FUN_00525220(uVar6,CONCAT44(uVar7,0x36c1e04d));
    uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe9ed0a2);
    FUN_00514c70(uVar6);
    uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x18a4384f);
    FUN_00514c70(uVar6);
    FUN_007a9e10(0);
    iVar4 = FUN_00591e90("GarageMain.fng");
    if (*(int *)(iVar4 + 0x34) != 0) {
      *(undefined4 *)(*(int *)(iVar4 + 0x34) + 0x574) = 0;
    }
    FUN_00516c90(0x913fa282,*(undefined4 *)(param_1 + 0x10),0);
    *(undefined1 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
       ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
      uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe9ed0a2);
      FUN_00514cc0(uVar6);
      uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x18a4384f);
      FUN_00514cc0(uVar6);
    }
    uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x7379349b);
    FUN_00514cc0(uVar6);
    FUN_00516c90(0x7c4583dc,*(undefined4 *)(param_1 + 0x10),0);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_0045d3a0();
    FUN_005252d0(uVar6,0x6f25a248,&DAT_0089d764,uVar7);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_0045d3a0();
    FUN_005252d0(uVar6,0xb2037bdc,&DAT_0089d764,uVar7);
    if (*(char *)(*(int *)(param_1 + 0x34) + 0xc) != '\0') {
      FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xd0f7c7cc,0x1ca7c0,1);
      iVar4 = FUN_0056ecc0();
      cVar2 = FUN_0056f180();
      if (cVar2 == '\0') {
        FUN_0051e1a0(*(undefined4 *)(iVar4 + 4),0,0);
        iVar4 = *(byte *)(local_118 + 0x59) + 1;
        local_4 = 0;
        FUN_00515e20(local_8c,0x80,"blacklist_rival_%02d_aka",iVar4);
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        uVar7 = FUN_005af1c0(local_8c,iVar4);
        uVar7 = FUN_0056bc10(uVar7);
        uVar7 = FUN_0056bc10(0x4ef2a115,uVar7);
        FUN_005252d0(uVar6,0x2d25b2c4,uVar7);
        local_4 = 0xffffffff;
        FUN_0045a430();
      }
      else {
        iVar4 = FUN_007a3c00();
        if (iVar4 == 0x4ef2a115) {
          uVar7 = FUN_007a3c70();
          FUN_00515e20(local_10c,0x80,"blacklist_rival_%02d_aka",uVar7);
          uVar6 = *(undefined4 *)(param_1 + 0x10);
          uVar7 = FUN_005af1c0(local_10c,uVar7);
          uVar7 = FUN_0056bc10(uVar7);
          uVar7 = FUN_0056bc10(0x4ef2a115,uVar7);
          FUN_005252d0(uVar6,0x2d25b2c4,uVar7);
        }
        else {
          FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d25b2c4,iVar4);
        }
      }
    }
    iVar4 = FUN_0056ecc0();
    uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xd6d32016);
    FUN_00514c70(uVar6);
    uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x79d6e45c);
    FUN_00514c70(uVar6);
    uVar6 = FUN_00591330();
    FUN_00515b90(*(undefined4 *)(param_1 + 0x3c),uVar6);
    uVar6 = FUN_00591240();
    FUN_00515b90(*(undefined4 *)(param_1 + 0x40),uVar6);
    if ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) != 0) {
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x1930b057,&DAT_0089c2d0,
                   *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_00581730();
      FUN_005252d0(uVar6,0x20c83c31,&DAT_0089c2d0,uVar7);
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xdc18c4d4,0xa9950b93);
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xb94139f4,0x7010bbf2);
    }
    if (((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) ||
       ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) != 0)) {
      FUN_00514c70();
    }
    else {
      FUN_00514cc0();
    }
    if (*(char *)(iVar4 + 0x11) == -1) {
      FUN_00514c70();
    }
    else {
      uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x39dc21f9);
      FUN_00514c70(uVar6);
      uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe998fe99);
      FUN_00514c70(uVar6);
      iVar4 = FUN_0056f120();
      iVar5 = FUN_00576f10(0x14,0);
      if ((iVar5 < 1) && ((DAT_009b9e79 == '\0' || (*(char *)(iVar4 + 4) != '\0')))) {
        uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x39dc21f9);
        FUN_00514c70(uVar6);
      }
      else {
        uVar6 = FUN_00576f10(0x14,0);
        uVar7 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x39dc21f9);
        FUN_00514cc0(uVar7);
        FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x5b875870,&PTR_LAB_008b79d0,uVar6);
        FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xea8aecd9,&PTR_LAB_008b79d0,uVar6);
      }
      if (*(char *)(iVar4 + 4) == '\x04') {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x72e7ea88,0x9db4df7d);
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9d974df3,0x73b79e0);
        iVar4 = FUN_00581760();
        fVar1 = (float)iVar4;
        if (iVar4 < 0) {
          fVar1 = fVar1 + _DAT_00891214;
        }
        FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x322b18f9,"%$0.0f",(double)fVar1);
        FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7044a5a4,&DAT_0089c2d0,
                     *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
        uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe9ed0a2);
        FUN_00514c70(uVar6);
      }
      else if (*(char *)(iVar4 + 4) == '\0') {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x72e7ea88,0x17574b0e);
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9d974df3,0x915f4d26);
        if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
           ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
          FUN_00527df0(*(undefined4 *)(param_1 + 0x10),0xe9ed0a2);
        }
        iVar4 = FUN_0056f120();
        if (iVar4 != 0) {
          FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x322b18f9,&DAT_0089c2d0,
                       *(undefined4 *)(iVar4 + 0x10));
          uVar6 = *(undefined4 *)(param_1 + 0x10);
          uVar7 = FUN_00581cb0();
          FUN_005252d0(uVar6,0x7044a5a4,&DAT_0089c2d0,uVar7);
        }
      }
      else {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x72e7ea88,0x9db4df7d);
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x9d974df3,0x73b79e0);
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x322b18f9,0xaefedad9);
        FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x7044a5a4,&DAT_0089c2d0,
                     *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
        uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe9ed0a2);
        FUN_00514c70(uVar6);
        iVar4 = FUN_00576f10(0x15,0);
        if ((0 < iVar4) || (DAT_009b9e7a != '\0')) {
          uVar6 = FUN_00576f10(0x15,0);
          uVar7 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xe998fe99);
          FUN_00514cc0(uVar7);
          FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xcc59b910,&PTR_LAB_008b79d0,uVar6);
          FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb8f9938a,&PTR_LAB_008b79d0,uVar6);
          uVar6 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x39dc21f9);
          FUN_00514c70(uVar6);
        }
      }
      FUN_0056f7b0();
      FUN_007a5a20();
      FUN_0056f7b0();
      FUN_007a5a60();
      FUN_007a5aa0();
    }
  }
  ExceptionList = local_c;
  return;
}

