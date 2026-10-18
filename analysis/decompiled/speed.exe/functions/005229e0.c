/* speed.exe 005229e0 FUN_005229e0; analysis pseudocode, not buildable source.
 * calls 00793910 FUN_00793910
 * calls 00598970 FUN_00598970
 * calls 0079ca30 FUN_0079ca30
 * calls 007c4b80 FUN_007c4b80
 * calls 00795eb0 FUN_00795eb0
 * calls 00791590 FUN_00791590
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00798340 FUN_00798340
 * calls 0056bc10 FUN_0056bc10
 * calls 0078bbe0 FUN_0078bbe0
 * calls 005985c0 FUN_005985c0
 * calls 0056e300 FUN_0056e300
 * calls 0078c730 FUN_0078c730
 * calls 00795b00 FUN_00795b00
 * calls 00838360 FUN_00838360
 */

void __fastcall FUN_005229e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_0079ca30();
  iVar2 = FUN_0078bbe0();
  if (*(int *)(iVar2 + 0x20c) < 2) {
    FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,
                 "Game failed to start. <UNLOCALIZED TEXT>");
    return;
  }
  FUN_0079a9e0();
  FUN_00798340();
  iVar2 = FUN_00795b00(&LAB_00513570,param_1,0);
  if (0 < iVar2) {
    if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
      piVar3 = &DAT_0091c1ac;
      do {
        if (*piVar3 != 0) {
          iVar2 = FUN_0078c730();
          FUN_00838360(*(undefined4 *)(iVar2 + 0xf8),*piVar3,2,0,0);
        }
        piVar3 = piVar3 + 1;
      } while ((int)piVar3 < 0x91c22c);
      uVar4 = 5;
      FUN_00793910(5);
      FUN_00791590(uVar4);
    }
    FUN_0056e300(3);
    *(undefined4 *)(param_1 + 0x1168) = 0;
    FUN_005985c0(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x9c6e60a4);
    uVar4 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x1180) = uVar4;
    *(undefined1 *)(param_1 + 0x1184) = 1;
    return;
  }
  if (iVar2 == 0) {
    FUN_00795eb0(0,0);
    uVar4 = 0xd616e55a;
  }
  else {
    uVar4 = 0xd99cfe5e;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_0056bc10(uVar4);
  FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar4);
  return;
}

