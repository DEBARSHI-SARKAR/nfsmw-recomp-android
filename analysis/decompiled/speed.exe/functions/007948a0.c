/* speed.exe 007948a0 FUN_007948a0; analysis pseudocode, not buildable source.
 * calls 0083fcf0 FUN_0083fcf0
 * calls 00840d60 FUN_00840d60
 * calls 0064baa0 thunk_FUN_0064a1e0
 * calls 004647c0 FUN_004647c0
 * calls 00793460 FUN_00793460
 * calls 00840530 FUN_00840530
 * calls 00649fa0 FUN_00649fa0
 * calls 0064bad0 FUN_0064bad0
 * calls 0083c880 FUN_0083c880
 * calls 00841800 FUN_00841800
 * calls 0064bab0 FUN_0064bab0
 * calls 0083a980 FUN_0083a980
 * calls 0064a150 FUN_0064a150
 * calls 00844340 FUN_00844340
 * calls 0064a3a0 FUN_0064a3a0
 */

undefined4 __fastcall FUN_007948a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_458;
  undefined4 local_457;
  undefined4 local_453;
  undefined4 local_44f;
  undefined2 local_44b;
  undefined1 local_449;
  undefined1 local_448;
  undefined4 local_447;
  undefined1 local_408;
  undefined4 local_407;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    local_408 = 0;
    puVar3 = &local_407;
    for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    uVar1 = FUN_00649fa0();
    FUN_0083c880(&local_408,0x400,&DAT_008b6df8,uVar1);
    FUN_0083a980(&local_408,0x400,&DAT_008b6df0,DAT_008f8694);
    FUN_0083a980(&local_408,0x400,&DAT_008b6de8,0x14);
    iVar2 = FUN_0064bab0();
    if (iVar2 != 0) {
      uVar1 = FUN_0064bab0();
      FUN_0083c880(&local_408,0x400,&DAT_008b6de0,uVar1);
    }
    iVar2 = thunk_FUN_0064a1e0();
    if (iVar2 != 0) {
      uVar1 = thunk_FUN_0064a1e0();
      FUN_0083c880(&local_408,0x400,&DAT_008b6dd8,uVar1);
    }
    uVar1 = FUN_0083fcf0();
    FUN_0083c880(&local_408,0x400,&PTR_LAB_008b6dd4,uVar1);
    local_448 = 0;
    puVar3 = &local_447;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    FUN_004647c0(&local_448,"%s-%s-%s",&PTR_LAB_008b68a4,&DAT_008b68b0,&DAT_008b68a8);
    FUN_0083c880(&local_408,0x400,&DAT_008b6dc0,&local_448);
    local_457 = 0;
    local_453 = 0;
    local_44f = 0;
    local_44b = 0;
    local_458 = 0;
    local_449 = 0;
    FUN_0064bad0(&local_458,0x10);
    FUN_004647c0(&local_448,"%s/%s-%s",&DAT_008b68b0,&local_458,"Nov 21 2005");
    FUN_0083c880(&local_408,0x400,&DAT_008b6da0,&local_448);
    uVar1 = FUN_0064a150();
    FUN_0083c880(&local_408,0x400,&DAT_008b6d98,uVar1);
    uVar1 = FUN_0064a3a0();
    FUN_0083c880(&local_408,0x400,&DAT_008b6d94,uVar1);
    uVar1 = FUN_00844340(1000);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    iVar2 = FUN_00841800(&local_408,0,&LAB_0078b730);
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar2 == 0) {
      FUN_00793460();
      return 0xffffffff;
    }
    if (DAT_00926114 == 0) {
      FUN_00840d60(iVar2,0x7274696d,40000);
    }
    else {
      FUN_00840d60(iVar2,0x7274696d,500000000);
      FUN_00840d60(*(undefined4 *)(param_1 + 0x38),0x7374696d,500000000);
    }
    FUN_00840530(*(undefined4 *)(param_1 + 0x38),3,&LAB_00793510,param_1);
    FUN_00840530(*(undefined4 *)(param_1 + 0x38),0,FUN_007900f0,param_1);
    FUN_00840530(*(undefined4 *)(param_1 + 0x38),4,FUN_00790130,param_1);
  }
  return 0;
}

