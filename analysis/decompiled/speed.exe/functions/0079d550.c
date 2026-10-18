/* speed.exe 0079d550 FUN_0079d550; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0079ca30 FUN_0079ca30
 * calls 007ec1c8 FUN_007ec1c8
 * calls 004647c0 FUN_004647c0
 * calls 00460c50 FUN_00460c50
 * calls 0083bb00 FUN_0083bb00
 * calls 00793340 FUN_00793340
 * calls 007ec1bd FUN_007ec1bd
 * calls 0064a3a0 FUN_0064a3a0
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

undefined4 __thiscall FUN_0079d550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 local_938 [8];
  undefined1 local_930;
  undefined4 local_92f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  iVar1 = FUN_00460c50(&DAT_009b479c);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    local_930 = 0;
    puVar5 = &local_92f;
    for (iVar1 = 0x249; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    *(undefined1 *)((int)puVar5 + 2) = 0;
    FUN_0083c880(&local_930,0x928,&DAT_008b708c,&DAT_009b4708);
    FUN_0083bb00(&local_930,0x928,&DAT_008b7084,DAT_009b4748);
    FUN_0083c880(&local_930,0x928,&DAT_008b707c,&DAT_009b474c);
    FUN_0083c880(&local_930,0x928,&DAT_008b7074,&DAT_009b479c);
    FUN_0083c880(&local_930,0x928,"VENUE","NFSMW");
    uVar2 = FUN_0064a3a0();
    FUN_0083c880(&local_930,0x928,&DAT_008b6d94,uVar2);
    iVar1 = 0;
    puVar4 = &DAT_009b475c;
    do {
      iVar3 = FUN_00460c50(puVar4);
      if (iVar3 < 1) break;
      FUN_004647c0(local_938,"NAME%d",iVar1);
      FUN_0083c880(&local_930,0x928,local_938,puVar4);
      FUN_004647c0(local_938,"TEAM%d",iVar1);
      FUN_0083c880(&local_930,0x928,local_938,"NFSMW");
      FUN_004647c0(local_938,"ROOM%d",iVar1);
      FUN_0083c880(&local_930,0x928,local_938,&DAT_00890978);
      puVar4 = puVar4 + 0x10;
      iVar1 = iVar1 + 1;
    } while ((int)puVar4 < 0x9b479c);
    uVar2 = FUN_00793340(0x72616e6b,&local_930,&LAB_00790180,param_1,param_2,param_3,0);
  }
  iVar1 = FUN_0079ca30();
  puVar5 = (undefined4 *)(iVar1 + 8);
  for (iVar3 = 0x19d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar2;
}

