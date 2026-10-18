/* speed.exe 00587d30 FUN_00587d30; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 0054e760 FUN_0054e760
 * calls 00524920 FUN_00524920
 * calls 00571eb0 FUN_00571eb0
 * calls 00515960 FUN_00515960
 * calls 00525d50 FUN_00525d50
 * calls 004ae8f0 FUN_004ae8f0
 * calls 0050e780 FUN_0050e780
 * calls 00573840 FUN_00573840
 * calls 00566f30 FUN_00566f30
 * calls 00566f10 FUN_00566f10
 */

void __thiscall FUN_00587d30(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  if (param_2 < 0x9120409f) {
    if (param_2 == 0x9120409e) {
      if (*(char *)((int)param_1 + 0x55) == '\0') {
        return;
      }
      if (*(char *)((int)param_1 + 0x57) == '\0') {
        return;
      }
      if ((char)param_1[0x15] != '\0') {
        (**(code **)(param_1[0xb] + 0x38))();
        (**(code **)(*param_1 + 0xc))();
        return;
      }
      (**(code **)(param_1[0xb] + 0x34))(0xffffffff);
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    if (param_2 < 0x84378bf0) {
      if (param_2 == 0x84378bef) {
        *(undefined1 *)((int)param_1 + 0x119) = 0;
        *(undefined1 *)((int)param_1 + 0x11a) = 1;
        param_1[0x44] = param_1[0x45];
        return;
      }
      if (param_2 == 0xc407210) {
        if (*(char *)((int)param_1 + 0x57) == '\0') {
          return;
        }
        if (*(char *)(param_1[0xe] + 0x20) != '\0') {
          return;
        }
        if (param_3 != *(int *)(param_1[0xe] + 0x10)) {
          return;
        }
        iVar1 = param_1[4];
        uVar4 = FUN_0050e780();
        FUN_00571eb0(iVar1,uVar4);
        if ((param_1[0xe] != 0) && (*(char *)(param_1[0xe] + 0x45) != '\0')) {
          (**(code **)(param_1[0xb] + 0x10))(0xc407210,param_3,param_4,param_5);
          return;
        }
        FUN_00573840(0xc407210,param_3,param_4,param_5);
        *(undefined1 *)((int)param_1 + 0x57) = 0;
        FUN_00516c90(0x587c018b,param_1[4],0);
        return;
      }
      if (param_2 == 0x35f8620b) {
        *(undefined1 *)(param_1 + 0x46) = 1;
        return;
      }
      if (param_2 != 0x72619778) {
        return;
      }
      if (*(char *)((int)param_1 + 0x55) != '\0') {
        return;
      }
      if (*(char *)((int)param_1 + 0x57) == '\0') {
        return;
      }
      cVar3 = (**(code **)(param_1[0xb] + 0x18))(param_1[0xe]);
      if (cVar3 == '\0') {
        FUN_00566f30();
      }
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    if (param_2 == 0x911ab364) {
      param_1[0x4f] = param_3;
      param_1[0x4e] = -0x6ee54c9c;
      param_1[0x50] = param_4;
      param_1[0x51] = param_5;
      *(undefined1 *)((int)param_1 + 0x57) = 0;
      FUN_00571eb0(param_1[4],0);
      return;
    }
    if (param_2 != 0x911c0a4b) {
      return;
    }
    if (*(char *)((int)param_1 + 0x55) != '\0') {
      return;
    }
  }
  else {
    if (0xc519bfc3 < param_2) {
      if (param_2 == 0xc98356ba) {
        (**(code **)(param_1[0xb] + 4))();
        return;
      }
      if (param_2 != 0xe1fde1d1) {
        return;
      }
      (**(code **)(param_1[0xb] + 0x10))(param_1[0x4e],param_1[0x4f],param_1[0x50],param_1[0x51]);
      return;
    }
    if (param_2 == 0xc519bfc3) {
      iVar1 = param_1[0xe];
      if (*(char *)(iVar1 + 0x46) == '\0') {
        return;
      }
      FUN_00524920(param_1[4],0x99344537,0x16a259,1);
      FUN_004ae8f0(4);
      FUN_00525d50(*(undefined4 *)(iVar1 + 0x48),param_1[4]);
      iVar2 = *(int *)(DAT_0091cf90 + 0x10);
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar1 == 0x6f547e4c) {
        *(uint *)(iVar2 + 0xac) = *(uint *)(iVar2 + 0xac) | 0x40;
        return;
      }
      if (iVar1 == -0x5ea1bafb) {
        *(uint *)(iVar2 + 0xac) = *(uint *)(iVar2 + 0xac) | 0x100;
        return;
      }
      if (iVar1 != -0x11e1238a) {
        return;
      }
      *(uint *)(iVar2 + 0xac) = *(uint *)(iVar2 + 0xac) | 0x80;
      return;
    }
    if (param_2 == 0x9803f6e2) {
      FUN_00515960(&param_5,&param_4);
      cVar3 = FUN_0054e760(param_5,param_4,param_1[0xf]);
      if (cVar3 != '\0') {
        if (DAT_00987f70 == '\0') {
          if ((char)param_1[0x4a] != '\0') {
            FUN_00516c90(0x936a6a7f,param_1[4],*(undefined4 *)(param_1[0xe] + 0x10));
          }
        }
        else {
          FUN_00516c90(0xc407210,param_1[4],*(undefined4 *)(param_1[0xe] + 0x10));
          *(undefined1 *)(param_1 + 0x4a) = 1;
        }
      }
      cVar3 = (**(code **)(param_1[0xb] + 0x2c))();
      if (cVar3 == '\0') {
        return;
      }
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    if (param_2 != 0xb5971bf1) {
      if (param_2 != 0xc3960eb9) {
        return;
      }
      FUN_00524920(param_1[4],0x99344537,0x1744b3,1);
      return;
    }
    if (*(char *)((int)param_1 + 0x55) == '\0') {
      return;
    }
  }
  if (*(char *)((int)param_1 + 0x57) == '\0') {
    return;
  }
  FUN_00566f10();
  (**(code **)(*param_1 + 0xc))();
  return;
}

