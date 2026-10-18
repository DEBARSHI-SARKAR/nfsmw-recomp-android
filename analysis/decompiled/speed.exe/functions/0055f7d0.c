/* speed.exe 0055f7d0 FUN_0055f7d0; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 00838360 FUN_00838360
 * calls 00513bc0 FUN_00513bc0
 * calls 00516c70 FUN_00516c70
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00586760 FUN_00586760
 * calls 00839770 FUN_00839770
 * calls 0054c0f0 FUN_0054c0f0
 * calls 005926b0 FUN_005926b0
 * calls 008382b0 FUN_008382b0
 * calls 005a5540 FUN_005a5540
 * calls 00838280 FUN_00838280
 * calls 005579e0 FUN_005579e0
 * calls 00516af0 FUN_00516af0
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0078c730 FUN_0078c730
 * calls 005257f0 FUN_005257f0
 * calls 00790370 FUN_00790370
 * calls 00516be0 FUN_00516be0
 * calls 0056bc10 FUN_0056bc10
 * calls 005110d0 FUN_005110d0
 * calls 00460d20 FUN_00460d20
 * calls 005a8cb0 FUN_005a8cb0
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00598bb0 FUN_00598bb0
 * calls 0054c620 FUN_0054c620
 * calls 00598970 FUN_00598970
 * calls 005141e0 FUN_005141e0
 * calls 0053f560 FUN_0053f560
 * calls 005a8c50 FUN_005a8c50
 * calls 0078c790 FUN_0078c790
 * calls 0078cd30 FUN_0078cd30
 * calls 00515e20 FUN_00515e20
 * calls 00839530 FUN_00839530
 * calls 005258b0 FUN_005258b0
 * calls 0078c640 FUN_0078c640
 */

void __thiscall FUN_0055f7d0(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 local_708;
  undefined4 local_707;
  undefined1 local_508 [640];
  undefined1 local_288 [644];
  
  if (param_2 == 0xd15c04ec) {
    FUN_005258b0(1);
    return;
  }
  if (DAT_0091d261 != '\0') {
    *(undefined1 *)(param_1 + 0xf5) = 1;
  }
  if ((((param_2 != 0xc98356ba) && (param_2 != 0xe1fde1d1)) && (param_2 != 0x4fbee42a)) &&
     ((param_2 != 0x7c42d6db && (*(char *)(param_1 + 0xf5) != '\0')))) {
    return;
  }
  if (0xc407210 < param_2) {
    if (param_2 < 0x911ab365) {
      if (param_2 == 0x911ab364) {
        FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x47ff4e7c,0xde6eff34,1);
        return;
      }
      if (param_2 < 0x406415e4) {
        if (param_2 != 0x406415e3) {
          if (param_2 == 0x1cad26e2) {
            if (*(char *)(param_1 + 0xf8) == '\0') {
              return;
            }
            if (*(char *)(param_1 + 0xf9) != '\0') {
              return;
            }
            if (*(char *)(param_1 + 0xfa) != '\0') {
              return;
            }
            if (*(int *)(param_1 + 0x2c) != 0) {
              FUN_0056c6e0(*(int *)(param_1 + 0x2c));
              *(undefined4 *)(param_1 + 0x2c) = 0;
            }
            puVar8 = &DAT_0091c39c;
            *(undefined1 *)(param_1 + 0xf8) = 0;
            FUN_0078c730(&DAT_0091c39c);
            FUN_0078cd30(puVar8);
            return;
          }
          if (param_2 == 0x34dc1bec) {
            FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x47ff4e7c,0xde6eff34,1);
            return;
          }
          if (param_2 != 0x35f8620b) {
            return;
          }
          FUN_0054c0f0();
          return;
        }
        goto LAB_0055fbd1;
      }
      if (param_2 == 0x4fbee42a) {
        if (DAT_0091cacc == 0) {
          iVar5 = 0;
          FUN_0079a9e0();
          iVar3 = FUN_0045d3a0(0);
          if (0 < iVar3) {
            do {
              iVar3 = iVar5;
              FUN_0079a9e0(iVar5);
              iVar3 = FUN_00790370(iVar3);
              if (iVar3 == 0) break;
              FUN_00460d20(iVar3 + 0xc,&DAT_0091c39c);
              iVar5 = iVar5 + 1;
              FUN_0079a9e0();
              iVar3 = FUN_0045d3a0(0);
            } while (iVar5 < iVar3);
          }
        }
        *(undefined1 *)(param_1 + 0xe8) = 1;
        *(undefined1 *)(param_1 + 0xf4) = 1;
        return;
      }
      if (param_2 != 0x72619778) {
        if (param_2 != 0x7c42d6db) {
          return;
        }
        if (*(char *)(param_1 + 0xf5) == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0xf5) = 0;
        FUN_005110d0();
        return;
      }
      FUN_005a8cb0();
LAB_0055fc2a:
      if (*(int *)(param_1 + 0x60) != 0) {
        FUN_00586760(0x249db7b7);
      }
      FUN_005926b0(1);
      return;
    }
    if (0xc98356ba < param_2) {
      if (param_2 == 0xca4cb0dd) {
        FUN_0053f560(1);
        return;
      }
      if (param_2 != 0xe1fde1d1) {
        return;
      }
      FUN_00516be0(0x7a548b3f,"OL_EAMessenger.fng",0xffffffff,0xff);
      *(undefined1 *)(param_1 + 0xe8) = 1;
      return;
    }
    if (param_2 != 0xc98356ba) {
      if (param_2 != 0x911c0a4b) {
        if (param_2 == 0x97c1b72f) {
          *(undefined1 *)(param_1 + 0xfa) = 1;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          iVar3 = FUN_0078c730();
          FUN_00838360(*(undefined4 *)(iVar3 + 0xf8),&DAT_0091c39c,1,0,0);
          FUN_00524920(*(undefined4 *)(param_1 + 0x10),0x47ff4e7c,0xde6eff34,1);
          return;
        }
        if (param_2 != 0x9803f6e2) {
          return;
        }
        FUN_005a5540();
        return;
      }
      FUN_005a8c50();
      goto LAB_0055fc2a;
    }
    FUN_0078c730();
    FUN_0078c640();
    if ((DAT_0091ca90 == 0) || (*(int *)(DAT_0091cf90 + 0x19c) < 2)) goto LAB_0055fe17;
    puVar8 = &DAT_0091c39c;
    FUN_0078c730(&DAT_0091c39c);
    iVar3 = FUN_0078c790(puVar8);
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0xf7) == '\0') {
        iVar3 = FUN_0078c730();
        FUN_00839770(*(undefined4 *)(iVar3 + 0xf8),&DAT_0091c39c,1);
        puVar8 = &DAT_0091c39c;
        FUN_0078c730(&DAT_0091c39c);
        iVar3 = FUN_0078c790(puVar8);
        puVar7 = local_288;
        goto LAB_0055fdfa;
      }
    }
    else {
      puVar7 = local_508;
LAB_0055fdfa:
      puVar4 = (undefined4 *)FUN_00513bc0(puVar7,iVar3);
      puVar6 = &DAT_0091c340;
      for (iVar3 = 0x9f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    FUN_0054c0f0();
LAB_0055fe17:
    if (*(char *)(param_1 + 0xe8) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xf4) != '\0') {
      FUN_00516be0(0x4fbee42a,"OL_EAMessenger.fng",0xffffffff,0xff);
      *(undefined1 *)(param_1 + 0xe8) = 0;
      return;
    }
    FUN_005258b0(1);
    *(undefined1 *)(param_1 + 0xe8) = 0;
    return;
  }
  if (param_2 == 0xc407210) {
LAB_0055fbd1:
    FUN_005579e0();
    return;
  }
  switch(param_2) {
  case 2:
    if (DAT_0091c35c != 0) {
      iVar3 = FUN_0078c730();
      iVar3 = FUN_008382b0(*(undefined4 *)(iVar3 + 0xf8),&DAT_0091c39c,0,&LAB_00544c80,param_1);
      if (iVar3 != 0) {
        return;
      }
      FUN_005141e0(0x91070ff2,&DAT_0091c39c);
      return;
    }
    goto LAB_0055f9bc;
  case 3:
    if (DAT_0091c35c != 0) {
      iVar3 = FUN_0078c730();
      iVar3 = FUN_008382b0(*(undefined4 *)(iVar3 + 0xf8),&DAT_0091c39c,1,&LAB_00544c80,param_1);
      if (iVar3 != 0) {
        return;
      }
      FUN_005141e0(0xc744b7ab,&DAT_0091c39c);
      return;
    }
LAB_0055f9bc:
    uVar2 = 0x2106e2fe;
LAB_0055fa91:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_0056bc10(uVar2);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0x34dc1bec,0x34dc1bec,uVar2);
    return;
  case 4:
    if (DAT_0091c35c == 0) {
      uVar2 = FUN_00516af0(*(undefined4 *)(param_1 + 0x10));
      FUN_00516c70(8,uVar2);
      return;
    }
    iVar3 = FUN_0078c730();
    iVar3 = FUN_008382b0(*(undefined4 *)(iVar3 + 0xf8),&DAT_0091c39c,3,&LAB_00544ca0,param_1);
    if (iVar3 == 0) {
      FUN_005141e0(0x7f1025e7,&DAT_0091c39c);
      return;
    }
    break;
  case 5:
    FUN_0054c620();
    return;
  case 6:
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_0056c6e0(*(int *)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0x2c) = 0;
      return;
    }
    break;
  case 8:
    iVar3 = FUN_0078c730();
    iVar3 = FUN_00839530(*(undefined4 *)(iVar3 + 0xf8),&DAT_0091c39c,&LAB_00544ca0,param_1);
    if (iVar3 == 0) {
      FUN_005141e0(0x78300ebf,&DAT_0091c39c);
      return;
    }
    if (iVar3 != -5) {
      return;
    }
    uVar2 = 0xfbe5ad60;
    goto LAB_0055fa91;
  case 9:
    iVar3 = FUN_0078c730();
    iVar3 = FUN_00838280(*(undefined4 *)(iVar3 + 0xf8),&DAT_0091c39c,&LAB_00544cc0,param_1);
    if (iVar3 == 0) {
      FUN_005141e0(0xa33aa702,&DAT_0091c39c);
      return;
    }
    break;
  case 10:
    local_708 = 0;
    puVar4 = &local_707;
    for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    uVar2 = FUN_0056bc10(0x8d0a8371,&DAT_0091c39c);
    FUN_00515e20(&local_708,0x200,uVar2);
    FUN_00598bb0(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x70e01038,0x417b25e4,4,0xffffffff,
                 0xffffffff,1,&local_708);
    return;
  case 0xb:
    DAT_0091ca8c = (DAT_0091ca8c != 0) + 1;
  case 7:
    FUN_005257f0("OL_VoiceChat.fng",0,0,0);
    return;
  }
  return;
}

