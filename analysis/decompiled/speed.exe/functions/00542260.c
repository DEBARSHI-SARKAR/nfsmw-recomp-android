/* speed.exe 00542260 FUN_00542260; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 0056bc10 FUN_0056bc10
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0056e400 FUN_0056e400
 * calls 0056e380 FUN_0056e380
 * calls 005b8400 FUN_005b8400
 * calls 005252d0 FUN_005252d0
 * calls 005865e0 FUN_005865e0
 * calls 0056bc60 FUN_0056bc60
 * calls 0056e3c0 FUN_0056e3c0
 */

void __fastcall FUN_00542260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(0x6042a783), iVar1 != 0)) &&
     (iVar1 = FUN_005b1360(0x1ca7c0), iVar1 != 0)) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  uVar4 = 0xc;
  uVar2 = FUN_0056bc10(0x22729437,0xc);
  uVar3 = FUN_0056bc10(0x818f0385,uVar2);
  FUN_005865e0(0x5b9d88b9,6,uVar3,uVar2,uVar4);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0056bc60(0x22729437);
  FUN_005252d0(uVar2,0x42adb44c,uVar3);
  uVar2 = FUN_0056bc60(0xd9dc2f12);
  FUN_0056e380(uVar2);
  uVar2 = FUN_0056bc60(0xd9dc2f12);
  FUN_0056e3c0(uVar2);
  uVar2 = FUN_0056bc60(0xd9dc2f12);
  FUN_0056e400(uVar2);
  return;
}

