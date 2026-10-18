/* speed.exe 0052ab90 FUN_0052ab90; analysis pseudocode, not buildable source.
 * calls 00628c60 FUN_00628c60
 * calls 005b8550 FUN_005b8550
 * calls 0056bc10 FUN_0056bc10
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00593910 thunk_FUN_005931b0
 * calls 005252d0 FUN_005252d0
 * calls 00634370 FUN_00634370
 * calls 00628c50 FUN_00628c50
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_0052ab90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  thunk_FUN_005931b0();
  FUN_00634370();
  cVar1 = FUN_00628c50();
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + -0x1c) != 0) {
      iVar2 = FUN_00516af0(*(int *)(param_1 + -0x1c));
      if (iVar2 != 0) {
        iVar2 = FUN_005b8550(0x8a41f5b9);
        if (iVar2 != 0) {
          iVar2 = FUN_005b1360(0x16a259);
          if (iVar2 != 0) {
            FUN_005b8400(iVar2,0);
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
        }
      }
    }
  }
  else {
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x84) == '\0') {
      uVar4 = 0x70dfe5c2;
    }
    else {
      uVar4 = 0x417b2604;
    }
    uVar3 = FUN_0056bc10(uVar4);
    uVar4 = *(undefined4 *)(param_1 + -0x1c);
    uVar3 = FUN_0056bc10(0x3df9961b,uVar3);
    FUN_005252d0(uVar4,0x52cc164a,uVar3);
  }
  uVar4 = *(undefined4 *)(param_1 + -0x1c);
  uVar3 = FUN_00628c60(*(undefined4 *)(param_1 + 0xb8));
  FUN_005252d0(uVar4,0x4e11cf90,&DAT_008941f8,uVar3);
  return;
}

