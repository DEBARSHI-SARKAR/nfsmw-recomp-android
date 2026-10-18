/* speed.exe 00537c80 FUN_00537c80; analysis pseudocode, not buildable source.
 * calls 00793910 FUN_00793910
 * calls 00761140 FUN_00761140
 * calls 00798340 FUN_00798340
 * calls 00598a30 FUN_00598a30
 * calls 0056bc10 FUN_0056bc10
 * calls 0079bac0 FUN_0079bac0
 * calls 0079df40 FUN_0079df40
 * calls 0056e300 FUN_0056e300
 * calls 0078bcc0 FUN_0078bcc0
 * calls 00791590 FUN_00791590
 * calls 00537900 FUN_00537900
 * calls 0079a9e0 FUN_0079a9e0
 */

void __fastcall FUN_00537c80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  FUN_0079a9e0();
  FUN_00798340();
  FUN_0079bac0();
  iVar1 = FUN_0078bcc0();
  if (iVar1 == 0) {
    uVar4 = 0;
    FUN_0079bac0(0,param_1);
    FUN_0079df40(uVar4,param_1);
    uVar4 = 1;
    FUN_00793910(1);
    FUN_00791590(uVar4);
    if (*(int *)(DAT_0091cf90 + 0x19c) == 1) {
      FUN_00761140(1);
    }
    FUN_00537900();
    uVar4 = 1;
    FUN_00793910(1);
    FUN_00791590(uVar4);
    return;
  }
  puVar3 = &LAB_00522d90;
  iVar1 = param_1;
  FUN_0079bac0(&LAB_00522d90);
  iVar1 = FUN_0079df40(puVar3,iVar1);
  if (0 < iVar1) {
    FUN_0056e300(3);
    uVar4 = 1;
    FUN_00793910(1);
    FUN_00791590(uVar4);
    return;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0056bc10(0xacc1f7da);
  FUN_00598a30(uVar4,&DAT_00890978,1,0x417b2601,0x2c0e485a,uVar2);
  uVar4 = 1;
  FUN_00793910(1);
  FUN_00791590(uVar4);
  return;
}

