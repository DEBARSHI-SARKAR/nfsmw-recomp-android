/* speed.exe 00557e20 FUN_00557e20; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 00589900 FUN_00589900
 * calls 00516af0 FUN_00516af0
 * calls 00516b90 FUN_00516b90
 * calls 00586550 FUN_00586550
 * calls 0056e340 FUN_0056e340
 * calls 00837530 FUN_00837530
 * calls 00524520 FUN_00524520
 * calls 00513bc0 FUN_00513bc0
 * calls 008375e0 FUN_008375e0
 * calls 00516c70 FUN_00516c70
 * calls 00598bb0 FUN_00598bb0
 * calls 00460ed0 FUN_00460ed0
 * calls 00524390 FUN_00524390
 * calls 0054d480 FUN_0054d480
 * calls 00515e20 FUN_00515e20
 * calls 00524490 FUN_00524490
 * calls 00524920 FUN_00524920
 * calls 005a5540 FUN_005a5540
 * calls 005257f0 FUN_005257f0
 * calls 00524500 FUN_00524500
 * calls 005865e0 FUN_005865e0
 * calls 00516be0 FUN_00516be0
 * calls 0056bc10 FUN_0056bc10
 * calls 0078c790 FUN_0078c790
 * calls 00837090 FUN_00837090
 * calls 005258b0 FUN_005258b0
 * calls 00540f90 FUN_00540f90
 * calls 0078c730 FUN_0078c730
 * calls 00572e80 FUN_00572e80
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00557e20(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 local_388 [3];
  undefined1 auStack_385 [253];
  undefined1 local_288 [644];
  
  if (param_2 < 0xc519bfc4) {
    if (param_2 == 0xc519bfc3) {
      FUN_00460c70(&DAT_0091caac,"OLX_Message.fng");
      FUN_005257f0("OL_Feedback.fng",0,0,0);
      return;
    }
    if (param_2 < 0x911ab365) {
      if (param_2 == 0x911ab364) {
        if (*(char *)(param_1 + 0x136c) != '\0') {
          iVar3 = FUN_0078c730();
          FUN_00837090(*(undefined4 *)(iVar3 + 0xf8));
          *(undefined1 *)(param_1 + 0x136c) = 0;
        }
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x47ff4e7c,0xde6eff34,1);
        return;
      }
      if (param_2 == 0x35f8620b) {
LAB_00557f9c:
        FUN_00524390();
        return;
      }
      if (param_2 == 0x406415e3) {
        if (_DAT_008f42c0 <= (float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984) {
          uVar6 = 0x74;
          uVar2 = FUN_0056bc10(0x9a2e5f7b,0x74);
          FUN_005865e0(0x6d851451,0,&DAT_00890978,uVar2,uVar6);
          return;
        }
      }
      else if (param_2 == 0x72619778) {
        FUN_00524500();
        return;
      }
    }
    else {
      if (param_2 == 0x911c0a4b) {
        if (0xc < *(int *)(param_1 + 0x1164)) {
          *(int *)(param_1 + 0x1164) = *(int *)(param_1 + 0x1164) + -1;
        }
        goto LAB_00557f9c;
      }
      if (param_2 == 0x9803f6e2) {
        FUN_005a5540();
        FUN_00589900();
        iVar3 = *(int *)(param_1 + 0x150);
        if (iVar3 < 2) {
          if (iVar3 == 1) {
LAB_00557f7a:
            FUN_00524520();
            return;
          }
          if ((iVar3 == -10000) || (iVar3 == -1)) {
            FUN_00524500();
            return;
          }
        }
        else if (iVar3 == 10000) goto LAB_00557f7a;
      }
    }
  }
  else if (param_2 < 0xc9d30689) {
    if (param_2 == 0xc9d30688) {
      FUN_00516be0(0x911ab364,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
      FUN_00516be0(0xe1fde1d1,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
      return;
    }
    if (param_2 == 0xc519bfc4) {
      if (DAT_0091c35c != 0) {
        uVar2 = FUN_00516af0("OL_FriendDialogue.fng");
        FUN_00516c70(10,uVar2);
        return;
      }
      local_388[0] = 0;
      puVar4 = (undefined4 *)((int)local_388 + 1);
      for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      *(undefined1 *)((int)puVar4 + 2) = 0;
      uVar2 = FUN_0056bc10(0x8d0a8371,&DAT_0091c39c);
      FUN_00515e20(local_388,0x100,uVar2);
      FUN_00598bb0("OL_FriendDialogue.fng",&DAT_00890978,1,0x70e01038,0x417b25e4,8,0xffffffff,
                   0xffffffff,1,local_388);
      return;
    }
    if (param_2 == 0xc98356ba) {
      if (*(char *)(param_1 + 0x31) != '\0') {
        cVar1 = FUN_00516b90(*(undefined4 *)(param_1 + 0x10));
        if (cVar1 != '\0') {
          FUN_005258b0(1);
          *(undefined1 *)(param_1 + 0x31) = 0;
        }
      }
      iVar3 = FUN_0078c730();
      if (*(int *)(iVar3 + 0xfc) == 1) {
        puVar7 = &DAT_0091c39c;
        FUN_0078c730(&DAT_0091c39c);
        iVar3 = FUN_0078c790(puVar7);
        if (iVar3 != 0) {
          iVar3 = FUN_00837530(iVar3);
          if (iVar3 != 0) {
            FUN_00540f90();
            return;
          }
        }
      }
    }
  }
  else if (param_2 == 0xda5b8712) {
    local_388[0] = 0;
    puVar4 = (undefined4 *)((int)local_388 + 1);
    for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    uVar2 = FUN_00586550();
    FUN_00460ed0(local_388,local_388,uVar2);
    puVar4 = (undefined4 *)local_388;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar2 = FUN_0056e340();
    FUN_00460ed0(local_388,local_388,uVar2);
    FUN_00460ed0(local_388,local_388,&DAT_0089e2d8);
    uVar2 = FUN_00586550();
    FUN_00460ed0(local_388,local_388,uVar2);
    FUN_00524490(local_388);
    uVar2 = FUN_00586550();
    FUN_0054d480(uVar2);
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  else if (param_2 == 0xe1fde1d1) {
    iVar3 = FUN_0078c730();
    if (*(int *)(iVar3 + 0xfc) == 1) {
      puVar7 = &DAT_0091c39c;
      FUN_0078c730(&DAT_0091c39c);
      iVar3 = FUN_0078c790(puVar7);
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)FUN_00513bc0(local_288,iVar3);
        puVar5 = &DAT_0091c340;
        for (iVar3 = 0x9f; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      FUN_008375e0(DAT_0091c398,1);
      FUN_00572e80(0,0);
      DAT_0091ca90 = 1;
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
    return;
  }
  return;
}

