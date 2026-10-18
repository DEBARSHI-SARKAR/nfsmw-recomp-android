/* speed.exe 00790f90 FUN_00790f90; analysis pseudocode, not buildable source.
 * calls 004ae8f0 FUN_004ae8f0
 * calls 00460c70 FUN_00460c70
 * calls 0078c900 FUN_0078c900
 * calls 00516c50 FUN_00516c50
 * calls 0078c990 FUN_0078c990
 * calls 0078c790 FUN_0078c790
 * calls 00460d20 FUN_00460d20
 * calls 00572e80 FUN_00572e80
 * calls 0078c8e0 FUN_0078c8e0
 * calls 0078cb00 FUN_0078cb00
 * calls 0083d990 FUN_0083d990
 * calls 0083b210 FUN_0083b210
 * calls 00839770 FUN_00839770
 * calls 0083a670 FUN_0083a670
 * calls 0078c730 FUN_0078c730
 * calls 008371a0 FUN_008371a0
 */

void __thiscall FUN_00790f90(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_308;
  undefined4 local_307;
  undefined1 local_288;
  undefined4 local_287;
  undefined1 local_88 [64];
  undefined1 local_48 [68];
  
  local_288 = 0;
  puVar5 = &local_287;
  for (iVar4 = 0x7f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  iVar4 = *(int *)(param_2 + 8);
  if (iVar4 < 0x636e636d) {
    if (iVar4 == 0x636e636c) {
      uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b4cbc,&local_288,0x200,"unknown")
      ;
      FUN_0083b210(uVar2);
      cVar1 = FUN_0078c900(*(undefined4 *)(param_2 + 0x10));
      if (cVar1 != '\0') {
        FUN_0078c990(*(undefined4 *)(param_2 + 0x10));
        FUN_00516c50(0x519201f5,0,0xff);
        DAT_0091ca8c = 0;
      }
      DAT_0091ca90 = 1;
      FUN_00572e80(2,0);
      return;
    }
    if (0x62757379 < iVar4) {
      if (iVar4 == 0x6368616c) {
        local_308 = 0;
        puVar5 = &local_307;
        for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        uVar2 = *(undefined4 *)(param_2 + 0x10);
        *(undefined2 *)puVar5 = 0;
        *(undefined1 *)((int)puVar5 + 2) = 0;
        uVar2 = FUN_0083a670(uVar2,&DAT_008b6ce0,&local_288,0x200,&DAT_008af5cc);
        FUN_0083b210(uVar2);
        uVar2 = FUN_0083a670(&local_288,"GAMENAME",&local_308,0x80,&DAT_008b6cd8);
        FUN_0083b210(uVar2);
        iVar4 = FUN_00460d20(&local_308,&DAT_008b6cd8);
        if (iVar4 == 0) {
          iVar4 = FUN_0078c8e0();
          uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b4cbc,&local_308,0x80,
                               "unknown");
          FUN_0083b210(uVar2);
          FUN_0078cb00(&local_308,2);
          uVar2 = FUN_0078c790(&local_308);
          iVar3 = FUN_008371a0(uVar2);
          if (iVar3 == 0) {
            iVar4 = iVar4 * 0x161 + param_1;
            uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b4cbc,iVar4 + 0x1d1,0x20,
                                 "unknown challenger");
            FUN_0083b210(uVar2);
            uVar2 = FUN_0083a670(&local_288,"GAMENAME",iVar4 + 0x1f1,0x80,"unknown game");
            FUN_0083b210(uVar2);
            FUN_00460c70(iVar4 + 0x111,&local_288);
            local_48[0] = 0;
            local_88[0] = 0;
            uVar2 = FUN_0083a670(&local_288,"EXTHOSTNAME",local_48,0x40,&DAT_00890978);
            FUN_0083b210(uVar2);
            uVar2 = FUN_0083a670(&local_288,"INTHOSTNAME",local_88,0x40,&DAT_00890978);
            FUN_0083b210(uVar2);
            FUN_00460c70(iVar4 + 0x111,&local_288);
            FUN_00572e80(2,1);
            FUN_004ae8f0(0x55);
            FUN_00839770(*(undefined4 *)(param_1 + 0xf8),iVar4 + 0x1d1,8);
            DAT_0091ca90 = 1;
            DAT_0091ca8c = 2;
            return;
          }
          iVar4 = FUN_0078c730();
          FUN_0083d990(*(undefined4 *)(iVar4 + 0x108));
          return;
        }
      }
      return;
    }
    if (iVar4 == 0x62757379) {
      uVar2 = *(undefined4 *)(param_2 + 0x10);
    }
    else {
      if (iVar4 == 0x61637074) {
        uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b4cbc,&local_288,0x200,
                             "unknown");
        FUN_0083b210(uVar2);
        if (DAT_0091ca8c != 1) {
          DAT_0091ca90 = 1;
          return;
        }
        uVar2 = 0x7c1bb77f;
LAB_0079105c:
        FUN_00516c50(uVar2,"OL_VoiceChat.fng",0xff);
        DAT_0091ca90 = 1;
        return;
      }
      if (iVar4 != 0x626c636b) {
        return;
      }
      uVar2 = *(undefined4 *)(param_2 + 0x10);
    }
    uVar2 = FUN_0083a670(uVar2,&DAT_008b4cbc,&local_288,0x200,"unknown");
    FUN_0083b210(uVar2);
    DAT_0091ca8c = 0;
    DAT_0091ca90 = 1;
    return;
  }
  if (0x706c6179 < iVar4) {
    if (iVar4 != 0x74696d65) {
      return;
    }
    uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b4cbc,&local_288,0x200,"unknown");
    FUN_0083b210(uVar2);
    DAT_0091ca8c = 0;
    DAT_0091ca90 = 1;
    DAT_009b41ec = 0;
    return;
  }
  if (iVar4 == 0x706c6179) {
    uVar2 = *(undefined4 *)(param_2 + 0x10);
  }
  else {
    if (iVar4 == 0x6465636c) {
      uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b4cbc,&local_288,0x200,"unknown")
      ;
      FUN_0083b210(uVar2);
      if (DAT_0091ca8c != 1) {
        DAT_0091ca90 = 1;
        return;
      }
      uVar2 = 0x39992a2c;
      goto LAB_0079105c;
    }
    if (iVar4 != 0x6d657367) {
      return;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x10);
  }
  uVar2 = FUN_0083a670(uVar2,&DAT_008b4cbc,&local_288,0x200,"unknown");
  FUN_0083b210(uVar2);
  DAT_0091ca90 = 1;
  return;
}

