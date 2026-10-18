/* speed.exe 00527510 FUN_00527510; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 0056bc10 FUN_0056bc10
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 005865e0 FUN_005865e0
 * calls 00514c70 FUN_00514c70
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_00527510(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00514c70(*(undefined4 *)(param_1 + 0x30));
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(0x6042a783), iVar1 != 0)) &&
     (iVar1 = FUN_005b1360(0x1ca7c0), iVar1 != 0)) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  uVar4 = 7;
  uVar2 = FUN_0056bc10(0xd48d95f,7);
  uVar3 = FUN_0056bc10(0x70513bd4,uVar2);
  FUN_005865e0(0x8f095fd5,6,uVar3,uVar2,uVar4);
  *(undefined4 *)(DAT_0091cf90 + 0x328) = 5;
  return;
}

